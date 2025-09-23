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
    // verifica vitórias do jogador 1 em linhas
    for (int i = 0; i < 3; i++) {
        bool venceu = true;
        for (int j = 0; j < 3; j++) {
            if (velha[i][j] != 1) {
                venceu = false;
                break;
            }
        }
        if (venceu) return 1;
    }
    return 0;
}







