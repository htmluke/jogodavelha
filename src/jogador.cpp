#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"

using namespace std;

char escolheJogador(char jogador[2])
{
    char entrada;
    int auxiliar = 0;
    cout << "Jogador, decida com qual símbolo irá começar:\n" << endl;
    do
    {
        cin >> entrada;
        if(entrada == 'x' || entrada == 'X')
        {
            jogador[0] = 'X';
            jogador[1] = 'O';
            auxiliar = 1;
        }
        else if(entrada == 'o' || entrada == 'O')
        {
            jogador[0] = 'O';
            jogador[1] = 'X';
            auxiliar = 1;
        }
        else
        {
            cout << "Opção inválida, digite novamente.\n" << endl;
        }
    }while(auxiliar == 0);
    
    cout << "Pronto! O Jogador 1 será " << jogador[0] << " e o Jogador 2 será " << jogador[1] << ".\n" << endl;

    return jogador[2];
}

void jogada(char **tabuleiro, char jogador, int numeroJogador)
{
    int linha, coluna, auxiliar = 0;
    
    cout << "Vez do jogador " << numeroJogador << ".\n" << endl;

    do
    {
        cout << "Entre com a coordenada X e, em seguida, a Y:\n" << endl;
        cin >> linha;
        cin >> coluna;

        if(tabuleiro[linha][coluna] != ' ' || linha < 0 || linha > 2 || coluna < 0 || coluna > 2)
        {
            cout << "Um problema foi encontrado, digite novamente.\n" << endl;
        }
        else
        {
            tabuleiro[linha][coluna] = jogador;
            auxiliar = 1;
        }
    }while(auxiliar == 0);
}