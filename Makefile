all:	testa_velha.cpp velha.cpp velha.hpp velha.o catch_amalgamated.cpp
	g++ -std=c++14 -Wall velha.o testa_velha.cpp catch_amalgamated.cpp -o testa_velha
	./testa_velha
	# Compilação completa e execução dos testes

compile:	testa_velha.cpp velha.cpp velha.hpp velha.o catch_amalgamated.cpp
	g++ -std=c++14 -Wall velha.o testa_velha.cpp catch_amalgamated.cpp -o testa_velha

velha.o:	velha.cpp velha.hpp
	g++ -std=c++14 -Wall -c velha.cpp
	
testa_velha:	testa_velha.cpp velha.cpp velha.hpp velha.o catch_amalgamated.cpp
	g++ -std=c++14 -Wall velha.o testa_velha.cpp catch_amalgamated.cpp -o testa_velha
	
test:	testa_velha	
	./testa_velha
	
cpplint:	testa_velha.cpp velha.cpp velha.hpp
	cpplint --exclude=catch_amalgamated.hpp *.*

gcov:	testa_velha.cpp velha.cpp velha.hpp catch_amalgamated.cpp
	g++ -std=c++14 -Wall -fprofile-arcs -ftest-coverage -c velha.cpp
	g++ -std=c++14 -Wall -fprofile-arcs -ftest-coverage -c testa_velha.cpp
	g++ -std=c++14 -Wall -fprofile-arcs -ftest-coverage -c catch_amalgamated.cpp
	g++ -std=c++14 -Wall -fprofile-arcs -ftest-coverage velha.o testa_velha.o catch_amalgamated.o -o testa_velha
	./testa_velha
	gcov *.cpp	

debug:	testa_velha.cpp velha.cpp velha.hpp catch_amalgamated.cpp
	g++ -std=c++14 -Wall -g -c velha.cpp
	g++ -std=c++14 -Wall -g velha.o testa_velha.cpp catch_amalgamated.cpp -o testa_velha
	gdb testa_velha
	
cppcheck:	testa_velha.cpp velha.cpp velha.hpp
	cppcheck --enable=warning .

valgrind: testa_velha
	valgrind --leak-check=yes --log-file=valgrind.rpt ./testa_velha

clean:
	rm -rf *.o *.exe *.gc* testa_velha
