/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha(int velha[3][3]) {
	// Conta quantas casas vazias existem (0 = vazio)
    int countEmpty = 0;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (velha[i][j] == 0) ++countEmpty;

    // Verificar vencedores
    int win1 = 0, win2 = 0;

    // Linhas
    for (int i = 0; i < 3; ++i) {
        if (velha[i][0] != 0 && velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {
            if (velha[i][0] == 1) win1 = 1; else win2 = 1;
        }
    }

    // Colunas
    for (int j = 0; j < 3; ++j) {
        if (velha[0][j] != 0 && velha[0][j] == velha[1][j] && velha[1][j] == velha[2][j]) {
            if (velha[0][j] == 1) win1 = 1; else win2 = 1;
        }
    }

    // Diagonais
    if (velha[0][0] != 0 && velha[0][0] == velha[1][1] && velha[1][1] == velha[2][2]) {
        if (velha[0][0] == 1) win1 = 1; else win2 = 1;
    }
    if (velha[0][2] != 0 && velha[0][2] == velha[1][1] && velha[1][1] == velha[2][0]) {
        if (velha[0][2] == 1) win1 = 1; else win2 = 1;
    }

	if (win1) return 1;
    if (win2) return 2;

    if (countEmpty == 0) return 0; // empate
    return -1; // ainda há jogadas possíveis -> indefinido
}








