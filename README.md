# jogodavelha
Jogo da velha desenvolvido em C/C++ - Linguagem de Programação I - 2019.2

## Como usar

```
git clone https://github.com/htmluke/jogodavelha
make
./exe
```

## Sobre o projeto
Neste projeto, foi implementado um programa em C++ que simula um jogo da velha, habilitando os jogadores decidirem com qual símbolo desejam começar e permitindo que façam jogadas corretas, evitando erros comuns, entre outras características próprias do jogo.

## Funcionalidades
As funcionalidades implementadas foram separadas em seções, para que não haja confusão entre as funções na hora da leitura do código. Utilizando-se da modularização, foram separadas em três partes: tabuleiro, jogo e jogador.

### Tabuleiro

* **Aloca Matriz**:
  com o intuito de ter um controle maior com o gasto de memória, foi realizada uma alocação dinâmica do espaço do tabuleiro para que, em seguida, pudesse se utilizar de sua matriz para impressões e implementações de variáveis.

* **Imprime Tabuleiro**:
  de forma simples e ordenada, utilizou-se da impressão conhecida na biblioteca do C++ para imprimir tanto o tabuleiro e suas coordenadas, quanto cada ponto do tabuleiro representado por sua matriz.

* **Limpa Tabuleiro**:
  num laço de repetição, com a intenção de se jogar novamente o jogo da velha, espaços vazios preenchem novamente o tabuleiro que antes já foi completo na última partida.

* **Tabuleiro Completo**:
  percorre a matriz e verifica se todo o tabuleiro se encontra ocupado (indicando o fim do jogo num empate) ou, simplesmente, completado por uma vitória.

### Jogo

* **Rodadas**:
  função que realiza a verificação das jogadas num laço de repetição, além de verificar se houve vencedor e se o tabuleiro foi totalmente preenchido.

* **Vencedor**:
  com diversas paradas condicionais, a função realiza a verificação de um possível vencedor no jogo, realizando a comparação do tabuleiro com possíveis casos de vitória.

### Jogador

* **Escolhe Jogador**:
  com um vetor de duas casas como parâmetro da função, ela se utiliza desse benefício, com a entrada de que símbolo começará a partida realizada pelo usuário, para retornar tanto o símbolo do Jogador 1, como o do Jogador 2.

* **Jogada**:
  função que efetua a jogada de cada um dos jogadores, solicitando uma entrada e sempre notificando o jogador caso o espaço da matriz esteja ocupado ou o valor utilizado como entrada esteja incorreto.

## Autor

* **Lucas Emanoell** - [htmluke](https://github.com/htmluke)
