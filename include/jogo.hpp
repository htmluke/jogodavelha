#ifndef JOGO_HEADER
#define JOGO_HEADER

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void rodadas(char **tabuleiro, int dimensao, char jogador1, char jogador2);
int vencedor(char **tabuleiro, char jogador1, int ganhador);

#endif