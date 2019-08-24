#include <iostream>
#include <stdio.h>
#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"

using namespace std;

int main()
{
    char **tabuleiro, //Cria uma matriz de ponteiros de ponteiros para o tabuleiros
         jogador1, jogador2; //Variáveis para os dois jogadores e o possível ganhador
         
    int dimensao = 3, //Variável de referência (linha e coluna) para o for se locomover através da matriz
        auxiliar = 1, //Variável para auxiliar a impressão do tabuleiro
        entrada; //Variável para pegar a resposta do usuário
    
    tabuleiro = alocaMatriz(tabuleiro, dimensao); //Chama função de alocação e inicialização da matriz
    
    do
    {
        imprimeTabuleiro(tabuleiro, dimensao);
        jogador1 = escolheJogador(jogador1, 1);
        jogador2 = escolheJogador(jogador2, 2);
        rodadas(tabuleiro, dimensao, jogador1, jogador2);

        cout << "Jogar mais outra partida?\n1 - sim\n2- nao" << endl;
        cin >> entrada;
        if(entrada == 1){
            cout << "Reiniciando o tabuleiro.\n" << endl;
            limpaTabuleiro(tabuleiro, dimensao);
        }
        else if(entrada == 2)
        {
            cout << "Saindo do jogo." << endl;
            auxiliar = 0;
            //break;
        }
    }while(auxiliar != 0);

    free(tabuleiro); //libera a memória ocupada pela matriz

    return 0;
}