all: test

# Build object for library/source
src/jogo_da_velha.o: src/jogo_da_velha.cpp src/jogo_da_velha.hpp
	g++ -std=c++14 -Wall -c src/jogo_da_velha.cpp -o src/jogo_da_velha.o

# Run tests (link source object + test TU + Catch)
test: src/jogo_da_velha.o tests/testa_jogo.cpp tests/catch_amalgamated.cpp
	g++ -std=c++14 -Wall src/jogo_da_velha.o tests/testa_jogo.cpp tests/catch_amalgamated.cpp -o testa_jogo
	./testa_jogo

compile: src/jogo_da_velha.o tests/testa_jogo.cpp tests/catch_amalgamated.cpp
	g++ -std=c++14 -Wall src/jogo_da_velha.o tests/testa_jogo.cpp tests/catch_amalgamated.cpp -o testa_jogo

gcov: src/jogo_da_velha.cpp tests/testa_jogo.cpp tests/catch_amalgamated.cpp
	g++ -std=c++14 -Wall -fprofile-arcs -ftest-coverage -c src/jogo_da_velha.cpp -o src/jogo_da_velha.o
	g++ -std=c++14 -Wall -fprofile-arcs -ftest-coverage -c tests/testa_jogo.cpp -o tests/testa_jogo.o
	g++ -std=c++14 -Wall -fprofile-arcs -ftest-coverage -c tests/catch_amalgamated.cpp -o tests/catch_amalgamated.o
	g++ -std=c++14 -Wall -fprofile-arcs -ftest-coverage src/jogo_da_velha.o tests/testa_jogo.o tests/catch_amalgamated.o -o testa_jogo
	./testa_jogo
	gcov *.cpp

debug: src/jogo_da_velha.cpp tests/testa_jogo.cpp tests/catch_amalgamated.cpp
	g++ -std=c++14 -Wall -g -c src/jogo_da_velha.cpp -o src/jogo_da_velha.o
	g++ -std=c++14 -Wall -g src/jogo_da_velha.o tests/testa_jogo.cpp tests/catch_amalgamated.cpp -o testa_jogo
	gdb testa_jogo

cpplint: src/jogo_da_velha.cpp src/jogo_da_velha.hpp tests/testa_jogo.cpp
	cpplint --exclude=catch_amalgamated.hpp src/* tests/*

valgrind: test
	valgrind --leak-check=yes --log-file=docs/valgrind.rpt ./testa_jogo

clean:
	rm -rf *.o *.exe *.gc* testa_jogo src/*.o tests/*.o
