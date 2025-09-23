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
    // Linhas e colunas Jogador 1
    for (int i = 0; i < 3; ++i) {
        if (velha[i][0] == 1 && velha[i][1] == 1 && velha[i][2] == 1) return 1;
        if (velha[0][i] == 1 && velha[1][i] == 1 && velha[2][i] == 1) return 1;
    }
	// Diagonais Jogador 1
    if ((velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1) ||
        (velha[0][2] == 1 && velha[1][1] == 1 && velha[2][0] == 1)) return 1;

	//Primeira linha Jogador 2
	if (velha[0][0] == 2 && velha[0][1] == 2 && velha[0][2] == 2) return 2;	

    return 0;
}








