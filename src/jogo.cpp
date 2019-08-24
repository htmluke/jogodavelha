#include "jogo.hpp"
#include "jogador.hpp"
#include "tabuleiro.hpp"

using namespace std;

void rodadas(char **tabuleiro, int dimensao, char jogador1, char jogador2)
{
    int ganhador = 0;
    for(int i = 0; i < 9; i++)
    {   
        imprimeTabuleiro(tabuleiro, dimensao);
        
        if(i%2 == 0)
        {
            jogada(tabuleiro, jogador1, 1);
        }
        else
        {
            jogada(tabuleiro, jogador2, 2);
        }
        if(i >= 4)
        {
            ganhador = vencedor(tabuleiro, jogador1, ganhador);
        }
        if(i == 8)
            {
                tabuleiroCompleto(tabuleiro, dimensao);
            }
        if(ganhador == 1)
        {
            break;
        }
    }
}

int vencedor(char **tabuleiro, char jogador1, int ganhador)
{
    //Verificação na horizontal
    if(tabuleiro[0][0] == tabuleiro[0][1] && tabuleiro[0][1] == tabuleiro[0][2] && tabuleiro[0][0] != ' ')
    {
        if(tabuleiro[0][0] == jogador1)
        {
            cout << "Parabés, Jogador 1, você ganhou!" << endl;
            ganhador = 1;
        }
        else
        {
            cout << "Parabés, Jogador 2, você ganhou!" << endl;
            ganhador = 1;
        }
    }
    if(tabuleiro[1][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[1][2] && tabuleiro[1][0] != ' ')
    {
        if(tabuleiro[1][0] == jogador1)
        {
            cout << "Parabés, Jogador 1, você ganhou!" << endl;
            ganhador = 1;
        }
        else
        {
            cout << "Parabés, Jogador 2, você ganhou!" << endl;
            ganhador = 1;
        }
    }
    if(tabuleiro[2][0] == tabuleiro[2][1] && tabuleiro[2][1] == tabuleiro[2][2] && tabuleiro[2][0] != ' ')
    {
        if(tabuleiro[1][0] == jogador1)
        {
            cout << "Parabés, Jogador 1, você ganhou!" << endl;
            ganhador = 1;
        }
        else
        {
            cout << "Parabés, Jogador 2, você ganhou!" << endl;
            ganhador = 1;
        }
    }

    //Verificação na vertical
    if(tabuleiro[0][0] == tabuleiro[1][0] && tabuleiro[1][0] == tabuleiro[2][0] && tabuleiro[0][0] != ' ')
    {
        if(tabuleiro[0][0] == jogador1)
        {
            cout << "Parabés, Jogador 1, você ganhou!" << endl;
            ganhador = 1;
        }
        else
        {
            cout << "Parabés, Jogador 2, você ganhou!" << endl;
            ganhador = 1;
        }
    }
    if(tabuleiro[0][1] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][1] && tabuleiro[0][1] != ' ')
    {
        if(tabuleiro[0][1] == jogador1)
        {
            cout << "Parabés, Jogador 1, você ganhou!" << endl;
            ganhador = 1;
        }
        else
        {
            cout << "Parabés, Jogador 2, você ganhou!" << endl;
            ganhador = 1;
        }
    }
    if(tabuleiro[0][2] == tabuleiro[1][2] && tabuleiro[1][2] == tabuleiro[2][2] && tabuleiro[0][2] != ' ')
    {
        if(tabuleiro[0][2] == jogador1)
        {
            cout << "Parabés, Jogador 1, você ganhou!" << endl;
            ganhador = 1;
        }
        else
        {
            cout << "Parabés, Jogador 2, você ganhou!" << endl;
            ganhador = 1;
        }
    }

    //Verificação na diagonal
    if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
    {
        if(tabuleiro[0][0] == jogador1)
        {
            cout << "Parabés, Jogador 1, você ganhou!" << endl;
            ganhador = 1;
        }
        else
        {
            cout << "Parabés, Jogador 2, você ganhou!" << endl;
            ganhador = 1;
        }
    }
    if(tabuleiro[2][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[0][2] && tabuleiro[2][0] != ' ')
    {
        if(tabuleiro[2][0] == jogador1)
        {
            cout << "Parabés, Jogador 1, você ganhou!" << endl;
            ganhador = 1;
        }
        else
        {
            cout << "Parabés, Jogador 2, você ganhou!" << endl;
            ganhador = 1;
        }
    }
    return ganhador;
}
