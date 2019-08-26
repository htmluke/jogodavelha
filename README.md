# jogodavelha
Jogo da velha desenvolvido em C/C++ - Linguagem de Programação I - 2019.2 

## Como usar

```
git clone https://github.com/htmluke/jogodavelha
make
./exe
```

## Sobre o projeto
Nesse projeto, foi implementado um programa em C++ que simula um jogo da velha, habilitando os jogadores decidirem qual simbólo desejam começar e permitindo que façam jogadas corretas, evitando erros comuns, entre outras características comuns do jogo.

## Funcionalidades
As funcionalidades implementadas foram separadas em seções, para que não aja confusão de funções na hora da leitura do código. Utilizando-se da modularização, foram separas em três partes: tabuleiro, jogo e jogador.

### Tabuleiro

* **Aloca Matriz**
  Com o intuito de se ter um controle maior com o gasto de memória, foi realizado uma alocação dinâmica do espaço do tabuleiro para que, em seguida, pudesse ser utilizado de sua matriz para impressões e implementações de variáveis.

* **Imprime Tabuleiro**
  De forma simples e ordenada, utilizou-se da impressão conhecida na biblioteca do C++ para imprimir tanto o tabuleiro e suas coordenadas, quanto cada ponto do tabuleiro representado por sua matriz.
  
* **Limpa Tabuleiro**
  Num laço de repetição, com a intenção de se jogar novamente o jogo da velha, espaços vazios preenchem novamente o tabuleiro que antes já foi completo na última partida.
 
* **Tabuleiro Completo**
  Percorre a matriz verificando se todo o tabuleiro se encontra ocupado, indicando o fim do jogo num empate ou, simplesmente, completado por uma vitória.

### Jogo

* **Rodadas**
  Função que realiza a verificação das jogadas, num laço de repetição, além de verificar se houve vencedor e se o tabuleiro foi totalmente completo.

* **Vencedor**
  Com diversas paradas condicionais, a função realiza a verificação de um possível vencedor no jogo, realizando a comparação do tabuleiro com possível casos de vitória.

### Jogador

* **Escolhe Jogador**
  Com um vetor de duas casas como parâmetro da função, ela se utiliza desse benefício, com a entrada de qual símbolo começará a partida realizada pelo usuário, para retornar tanto o símbolo do Jogador 1, como o do Jogador 2.

* **Jogada**
  Função que realiza a jogada de cada um dos jogadores, solicitando uma entrada e sempre notificando o jogador caso o espaço da matriz esteja ocupada ou o valor usado como entrada esteja incorreto.

## Autor

* **Lucas Emanoell** - [htmluke](https://github.com/htmluke)
