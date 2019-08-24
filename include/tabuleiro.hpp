#ifndef TABULEIRO_HEADER
#define TABULEIRO_HEADER

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void alocaMatriz(char **tabuleiro, int dimensao);
void imprimeTabuleiro(char **tabuleiro, int dimensao);
void limpaTabuleiro(char **tabuleiro, int dimensao);
void tabuleiroCompleto(char **tabuleiro, int dimensao);

#endif