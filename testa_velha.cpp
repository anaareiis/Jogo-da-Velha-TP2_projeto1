
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"

//Commits 1, 2 e 3 
TEST_CASE("Jogador 1 vence na primeira linha") {
    int velha[3][3] = {
        {1, 1, 1},
        {0, 2, 0},
        {2, 0, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

//Commits 4, 5 e 6 
TEST_CASE("Jogador 1 vence na segunda linha") {
    int velha[3][3] = {
        {0, 2, 0},
        {1, 1, 1},
        {0, 2, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

//Commit 7
TEST_CASE("Jogador 1 vence na terceira linha") {
    int velha[3][3] = {
        {0, 2, 0},
        {2, 0, 2},
        {1, 1, 1}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

//Commits 8 e 9
TEST_CASE("Jogador 1 vence na primeira coluna") {
    int velha[3][3] = {
        {1, 2, 0},
        {1, 2, 0},
        {1, 0, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

//Commit 10
TEST_CASE("Jogador 1 vence na segunda coluna") {
	int velha[3][3] = {
		{2, 1, 0},
		{0, 1, 2},
		{0, 1, 0}
	};
	REQUIRE(VerificaVelha(velha) == 1);
}

//Commit 11
TEST_CASE("Jogador 1 vence na terceira coluna") {
	int velha[3][3] = {
		{2, 0, 1},
		{0, 2, 1},
		{0, 0, 1}
	};
	REQUIRE(VerificaVelha(velha) == 1);
}

//Commits 12 e 13
TEST_CASE("Jogador 1 vence na diagonal principal") {
    int velha[3][3] = {
        {1, 0, 2},
        {0, 1, 2},
        {0, 0, 1}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}
//Commits 14, 15 e 16
TEST_CASE("Jogador 1 vence na diagonal secundária") {
    int velha[3][3] = {
        {0, 0, 1},
        {0, 1, 2},
        {1, 2, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}
//Commits 18, 19 e 20
TEST_CASE("Jogador 2 vence na primeira linha") {
    int velha[3][3] = {
        {2, 2, 2},
        {1, 0, 1},
        {0, 1, 0}
    };
    REQUIRE(VerificaVelha(velha) == 2);
}
//Commits 21 e 22
TEST_CASE("Empate sem vencedores") {
    int velha[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 2}
    };
    REQUIRE(VerificaVelha(velha) == 0);
}
//Commits 23, 24 e 25
TEST_CASE("Jogo indefinido com casas vazias") {
    int velha[3][3] = {
        {1, 0, 2},
        {2, 1, 0},
        {0, 0, 0}
    };
    REQUIRE(VerificaVelha(velha) == -1);
}
//Commits 26, 27 e 28
TEST_CASE("Tabuleiro com valor inválido retorna -2") {
    int velha[3][3] = {
        {3, 0, 0},
        {0, 1, 2},
        {0, 0, 0}
    };
    REQUIRE(VerificaVelha(velha) == -2);
}
//Commits 29 e 30
TEST_CASE("Tabuleiro todo do jogador 1 é impossível") {
    int velha[3][3] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };
    REQUIRE(VerificaVelha(velha) == -2);
}





 
 
