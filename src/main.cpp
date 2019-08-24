#include <iostream>
#include <stdio.h>
#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"

using namespace std;

int main()
{
    char **tabuleiro, //Cria uma matriz de ponteiros de ponteiros para o tabuleiros
         jogador1, jogador2, //Variáveis para os dois jogadores e o possível ganhador
         entrada; //Variável para pegar a resposta do usuário
    int dimensao = 3, //Variável de referência (linha e coluna) para o for se locomover através da matriz
        auxiliar = 0; //Variável para auxiliar a impressão do tabuleiro

    alocaMatriz(tabuleiro, dimensao); //Chama função de alocação e inicialização da matriz
    
    do
    {
        imprimeTabuleiro(tabuleiro, dimensao);
        escolheJogador(jogador1, jogador2);
        rodadas(tabuleiro, dimensao, jogador1, jogador2);

        cout << "Jogar mais outra partida?\n- s\n- n" << endl;
        cin >> entrada;
        if(entrada == 's'){
            cout << "Reiniciando o tabuleiro.\n" << endl;
            limpaTabuleiro(tabuleiro, dimensao);
        }
        else
        {
            cout << "Saindo do jogo." << endl;
            auxiliar == 1;
        }
    }while(auxiliar == 0);

    free(tabuleiro); //libera a memória ocupada pela matriz

    return 0;
}