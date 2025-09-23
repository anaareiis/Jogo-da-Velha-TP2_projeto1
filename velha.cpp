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
    if (velha[0][0] == 1 && velha[0][1] == 1 && velha[0][2] == 1) {
        return 1;
    }
    return 0;
}




