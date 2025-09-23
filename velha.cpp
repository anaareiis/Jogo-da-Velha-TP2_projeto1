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
    // Linhas Jogador 1
    for (int i = 0; i < 3; i++) {
        if (velha[i][0] == 1 && velha[i][1] == 1 && velha[i][2] == 1) {
            return 1;
        }
    }
    // Colunas Jogador 1
    for (int j = 0; j < 3; j++) {
        if (velha[0][j] == 1 && velha[1][j] == 1 && velha[2][j] == 1) {
            return 1;
        }
    }
	// Jogador 1 - diagonais
    if ((velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1) ||
        (velha[0][2] == 1 && velha[1][1] == 1 && velha[2][0] == 1)) {
        return 1;
    }
    return 0;
}








