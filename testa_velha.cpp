
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"


TEST_CASE("Jogador 1 vence na primeira linha") {
    int velha[3][3] = {
        {1, 1, 1},
        {0, 2, 0},
        {2, 0, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

TEST_CASE("Jogador 1 vence na segunda linha") {
    int velha[3][3] = {
        {0, 2, 0},
        {1, 1, 1},
        {0, 2, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

TEST_CASE("Jogador 1 vence na terceira linha") {
    int velha[3][3] = {
        {0, 2, 0},
        {2, 0, 2},
        {1, 1, 1}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}


 
 
