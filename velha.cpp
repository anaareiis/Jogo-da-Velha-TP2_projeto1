/**
 * \file  velha.cpp
 */

#include "velha.hpp"

/**
 * @brief Função auxiliar que verifica quem venceu
 * @param b Tabuleiro 3x3
 * @return int
 *   0 -> ninguém venceu
 *   1 -> Jogador 1 venceu
 *   2 -> Jogador 2 venceu
 *   3 -> dois jogadores venceram ao mesmo tempo (impossível)
 */
static int winner_of(const int b[3][3]) {
    int win1 = 0, win2 = 0;

    // Linhas
    for (int i = 0; i < 3; ++i) {
        if (b[i][0] != 0 && b[i][0] == b[i][1] && b[i][1] == b[i][2]) {
            if (b[i][0] == 1) win1 = 1; else win2 = 1;
        }
    }

    // Colunas
    for (int j = 0; j < 3; ++j) {
        if (b[0][j] != 0 && b[0][j] == b[1][j] && b[1][j] == b[2][j]) {
            if (b[0][j] == 1) win1 = 1; else win2 = 1;
        }
    }

    // Diagonais
    if (b[0][0] != 0 && b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
        if (b[0][0] == 1) win1 = 1; else win2 = 1;
    }
    if (b[0][2] != 0 && b[0][2] == b[1][1] && b[1][1] == b[2][0]) {
        if (b[0][2] == 1) win1 = 1; else win2 = 1;
    }

    if (win1 && win2) return 3; // dois vencedores ao mesmo tempo
    if (win1) return 1;
    if (win2) return 2;
    return 0; // ninguém venceu
}

/**
 * @brief Verifica a situação do jogo da velha
 * @param velha Tabuleiro 3x3 (0 = vazio, 1 = jogador 1, 2 = jogador 2)
 * @return int
 *   1  -> Jogador 1 venceu
 *   2  -> Jogador 2 venceu
 *   0  -> Empate
 *  -1  -> Indefinido (jogo não terminou)
 *  -2  -> Impossível (estado inválido ou dois vencedores)
 */
int VerificaVelha(int velha[3][3]) {
    int countEmpty = 0;

    // Validação dos valores e contagem de casas vazias
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int v = velha[i][j];
            if (!(v == 0 || v == 1 || v == 2)) return -2; // valor inválido
            if (v == 0) ++countEmpty;
        }
    }

    int w = winner_of(velha);

    if (w == 3) return -2; // dois vencedores ao mesmo tempo
    if (w == 1) return 1;
    if (w == 2) return 2;

    if (countEmpty == 0) return 0; // empate
    return -1; // indefinido (há casas vazias e ninguém venceu ainda)
}
