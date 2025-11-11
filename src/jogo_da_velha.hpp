// Copyright 2025 Ana Areiis
#ifndef JOGO_DA_VELHA_HPP_
#define JOGO_DA_VELHA_HPP_

/**
 * @brief Verifica a situação do jogo da velha.
 *
 * @param velha matriz 3x3 representando o tabuleiro
 * @return int
 *   1 → jogador 1 venceu
 *   2 → jogador 2 venceu
 *   0 → empate
 *  -1 → indefinido (ainda há jogadas possíveis, sem vencedor)
 *  -2 → impossível (estado inválido do tabuleiro)
 */
int VerificaVelha(int velha[3][3]);

#endif  // JOGO_DA_VELHA_HPP_
