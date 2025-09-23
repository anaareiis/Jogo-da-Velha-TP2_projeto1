
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
 
 
