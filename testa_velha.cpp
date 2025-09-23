/**
 * @file testa_velha.cpp
 * @brief Testes unitários para a função VerificaVelha usando Catch2.
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"

// ====================================================
// BLOCO 1 – VITÓRIAS DO JOGADOR 1
// ====================================================

// Commits 1, 2 e 3
TEST_CASE("Jogador 1 vence na primeira linha") {
    int velha[3][3] = {
        {1, 1, 1},
        {0, 2, 0},
        {2, 0, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

// Commits 4, 5 e 6
TEST_CASE("Jogador 1 vence na segunda linha") {
    int velha[3][3] = {
        {0, 2, 0},
        {1, 1, 1},
        {0, 2, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

// Commit 7
TEST_CASE("Jogador 1 vence na terceira linha") {
    int velha[3][3] = {
        {0, 2, 0},
        {2, 0, 2},
        {1, 1, 1}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

// Commits 8 e 9
TEST_CASE("Jogador 1 vence na primeira coluna") {
    int velha[3][3] = {
        {1, 2, 0},
        {1, 2, 0},
        {1, 0, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

// Commit 10
TEST_CASE("Jogador 1 vence na segunda coluna") {
    int velha[3][3] = {
        {2, 1, 0},
        {0, 1, 2},
        {0, 1, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

// Commit 11
TEST_CASE("Jogador 1 vence na terceira coluna") {
    int velha[3][3] = {
        {2, 0, 1},
        {0, 2, 1},
        {0, 0, 1}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

// Commits 12 e 13
TEST_CASE("Jogador 1 vence na diagonal principal") {
    int velha[3][3] = {
        {1, 0, 2},
        {0, 1, 2},
        {0, 0, 1}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

// Commits 14, 15 e 16
TEST_CASE("Jogador 1 vence na diagonal secundária") {
    int velha[3][3] = {
        {0, 0, 1},
        {0, 1, 2},
        {1, 2, 0}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

// ====================================================
// BLOCO 2 – VITÓRIAS DO JOGADOR 2
// ====================================================

// Commits 18, 19 e 20
TEST_CASE("Jogador 2 vence na primeira linha") {
    int velha[3][3] = {
        {2, 2, 2},
        {1, 0, 1},
        {0, 1, 0}
    };
    REQUIRE(VerificaVelha(velha) == 2);
}

// Commit 32
TEST_CASE("Jogador 2 vence na segunda linha") {
    int velha[3][3] = {
        {1, 0, 1},
        {2, 2, 2},
        {0, 1, 0}
    };
    REQUIRE(VerificaVelha(velha) == 2);
}

// Commit 32
TEST_CASE("Jogador 2 vence na terceira linha") {
    int velha[3][3] = {
        {1, 0, 1},
        {0, 1, 0},
        {2, 2, 2}
    };
    REQUIRE(VerificaVelha(velha) == 2);
}

// Commit 32
TEST_CASE("Jogador 2 vence na primeira coluna") {
    int velha[3][3] = {
        {2, 1, 0},
        {2, 1, 0},
        {2, 0, 1}
    };
    REQUIRE(VerificaVelha(velha) == 2);
}

// Commit 32
TEST_CASE("Jogador 2 vence na segunda coluna") {
    int velha[3][3] = {
        {1, 2, 0},
        {0, 2, 1},
        {0, 2, 0}
    };
    REQUIRE(VerificaVelha(velha) == 2);
}

// Commit 32
TEST_CASE("Jogador 2 vence na terceira coluna") {
    int velha[3][3] = {
        {1, 0, 2},
        {0, 1, 2},
        {0, 0, 2}
    };
    REQUIRE(VerificaVelha(velha) == 2);
}

// Commit 32
TEST_CASE("Jogador 2 vence na diagonal principal") {
    int velha[3][3] = {
        {2, 0, 1},
        {0, 2, 1},
        {0, 0, 2}
    };
    REQUIRE(VerificaVelha(velha) == 2);
}

// Commit 32
TEST_CASE("Jogador 2 vence na diagonal secundária") {
    int velha[3][3] = {
        {1, 0, 2},
        {0, 2, 1},
        {2, 1, 0}
    };
    REQUIRE(VerificaVelha(velha) == 2);
}

// ====================================================
// BLOCO 3 – EMPATES
// ====================================================

// Commits 21 e 22
TEST_CASE("Empate sem vencedores") {
    int velha[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 2}
    };
    REQUIRE(VerificaVelha(velha) == 0);
}

// Commit 32 (Extra) 
TEST_CASE("Vitória na última jogada não é empate") {
    int velha[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 1}
    };
    REQUIRE(VerificaVelha(velha) == 1);
}

// ====================================================
// BLOCO 4 – INDEFINIDOS
// ====================================================

// Commits 23, 24 e 25
TEST_CASE("Jogo indefinido com casas vazias") {
    int velha[3][3] = {
        {1, 0, 2},
        {2, 1, 0},
        {0, 0, 0}
    };
    REQUIRE(VerificaVelha(velha) == -1);
}

// Commit 32 (Extra)
TEST_CASE("Tabuleiro vazio é indefinido") {
    int velha[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
    REQUIRE(VerificaVelha(velha) == -1);
}

// Commmit 32 (Extra)
TEST_CASE("Um único movimento não define vencedor") {
    int velha[3][3] = {
        {1,0,0},
        {0,0,0},
        {0,0,0}
    };
    REQUIRE(VerificaVelha(velha) == -1);
}

// ====================================================
// BLOCO 5 – IMPOSSÍVEIS
// ====================================================

// Commits 26, 27 e 28
TEST_CASE("Tabuleiro com valor inválido retorna -2") {
    int velha[3][3] = {
        {3, 0, 0},
        {0, 1, 2},
        {0, 0, 0}
    };
    REQUIRE(VerificaVelha(velha) == -2);
}

// Commits 29 e 30
TEST_CASE("Tabuleiro todo do jogador 1 é impossível") {
    int velha[3][3] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };
    REQUIRE(VerificaVelha(velha) == -2);
}

// Commit 32
TEST_CASE("Dois vencedores é impossível") {
    int velha[3][3] = {
        {1,1,1},
        {2,2,2},
        {0,0,0}
    };
    REQUIRE(VerificaVelha(velha) == -2);
}

// Commit 32
TEST_CASE("Múltiplas vitórias do mesmo jogador é impossível") {
    int velha[3][3] = {
        {1,1,1},
        {1,1,1},
        {2,0,2}
    };
    REQUIRE(VerificaVelha(velha) == -2);
}
