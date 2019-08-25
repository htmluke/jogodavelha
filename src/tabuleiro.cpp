#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"

using namespace std;

char **alocaMatriz(char **tabuleiro, int dimensao)
{
    //Alocando dinamicamente a matriz na memória
    tabuleiro = (char**)calloc(dimensao, sizeof(char*));
    for(int i = 0; i < dimensao; i++)
    {
        tabuleiro[i] = (char*)calloc(dimensao, sizeof(char));
    }
    //Inicializa a Matriz com o char ' '
    for(int i = 0; i < dimensao; i++)
    {
        for(int j = 0; j < dimensao; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
    return tabuleiro;
}

void imprimeTabuleiro(char **tabuleiro, int dimensao)
{
    //Imprime o tabuleiro de acordo com os espaços preenchidos
    cout << "   0   1   2   Y"<< endl;
    cout << " 0 " << tabuleiro[0][0] << " | " << tabuleiro[0][1] << " | " << tabuleiro[0][2] << endl;
    cout << "  ---|---|---" << endl;
    cout << " 1 " << tabuleiro[1][0] << " | " << tabuleiro[1][1] << " | " << tabuleiro[1][2] << endl;
    cout << "  ---|---|---" << endl;
    cout << " 2 " << tabuleiro[2][0] << " | " << tabuleiro[2][1] << " | " << tabuleiro[2][2] << endl;
    cout << "X"<< endl;
}

void limpaTabuleiro(char **tabuleiro, int dimensao)
{
    //Inicializa a Matriz com o char ' '
    for(int i = 0; i < dimensao; i++)
    {
        for(int j = 0; j < dimensao; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

void tabuleiroCompleto(char **tabuleiro, int dimensao)
{
    int contador = 0;
    for(int i = 0; i < dimensao; i++)
    {
        for(int j = 0; j < dimensao; j++)
        {
            if(tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'O')
            {
                contador += 1;
            }
        }
    }
    
    if(contador == 9)
    {
        cout << "O tabuleiro foi totalmente preenchido.\n" << endl;
    }
}