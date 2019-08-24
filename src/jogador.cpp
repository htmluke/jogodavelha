#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"

using namespace std;

void escolheJogador(char jogador1, char jogador2)
{
    char entrada;
    int auxiliar = 0;
    cout << "Jogador 1, decida com qual símbolo irá começar: X ou O\n" << endl;
    do
    {
        cin >> entrada;

        if(entrada == 'x' || entrada == 'X')
        {
            jogador1 = 'X';
            jogador2 = 'O';
            auxiliar = 1;
        }
        else if(entrada == 'o' || entrada == 'O')
        {
            jogador1 = 'O';
            jogador2 = 'X';
            auxiliar = 1;
        }
        else
        {
            cout << "Opção inválida, digite novamente.\n" << endl;
        }
    }while(auxiliar == 0);
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