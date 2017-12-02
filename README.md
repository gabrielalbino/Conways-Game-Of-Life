# Aplicação do Conway's Game of Life em C++

## Sobre o autor:

Gabriel Batista Albino Silva, 16/0028361

## O que é o Conway's Game of Life?

O jogo da vida é um autómato celular desenvolvido pelo matemático britânico John Horton Conway em 1970. É o exemplo mais bem conhecido de autômato celular.

O jogo foi criado de modo a reproduzir, através de regras simples, as alterações e mudanças em grupos de seres vivos, tendo aplicações em diversas áreas da ciência.

As regras definidas são aplicadas a cada nova "geração"; assim, a partir de uma imagem em um tabuleiro bi-dimensional definida pelo jogador, percebem-se mudanças muitas vezes inesperadas e belas a cada nova geração, variando de padrões fixos a caóticos.


Conway escolheu suas regras cuidadosamente, após um longo período de experimentos, para satisfazer três critérios:

1. Não deve haver nenhuma imagem inicial para a qual haja uma prova imediata ou trivial de que a população pode crescer sem limite.
2. Deve haver imagens iniciais que aparentemente cresçam sem limite.
3. Deve haver imagens iniciais simples que cresçam e mudem por um período de tempo considerável antes de chegar a um fim das possíveis formas:
    3.1. Sumindo completamente (por superpopulação ou por ficarem muito distantes)
    3.2.Estacionando em uma configuração estável que se mantem imutável para sempre, ou entrando em uma fase de oscilação na qual são repetidos ciclos infinitos de dois ou mais períodos.

Em outras palavras, as regras deviam tornar o comportamento das populações ao mesmo tempo interessante e imprevisível.

As regras são simples e elegantes:

1. Qualquer célula viva com menos de dois vizinhos vivos morre de solidão.
2. Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação.
3. Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva.
4. Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração.
5. É importante entender que todos os nascimentos e mortes ocorrem simultaneamente. Juntos eles constituem uma geração ou, como podemos chamá-los, um "instante" na história da vida completa da configuração inicial.
## Como utilizar

Clone o respositório utilizando **git clone**, compile utilizando o **make** e execulte-o com o **make run**

## Itens do menu

No menu você pode fazer quantas alterações desejar, ao finalizar as alterações no campo celular digite 0 para inserir o numero de gerações que suas celulas deverão iterar.

Uma breve descrição dos itens do menu:

**0 - Encerrar Modificações no universo celular**

Acaba com a possíbilidade de modificar o campo celular, perguntando quantas iterações você deseja e iniciando o jogo.

**1 - Adicionar uma celula no universo celular**

Adiciona uma única celula na posição escolhida do seu campo celular.

Exemplo:

![1](https://i.imgur.com/sBb6g3j.png)

**2 - Adicionar um block no universo celular**

Adiciona um Block na posição escolhida do seu campo celular.

Exemplo:

![1](https://i.imgur.com/Wkx7pC2.png)

**3 - Adicionar um blinker no universo celular**

Adiciona um Blinker na posição escolhida do seu campo celular.

Exemplo:

![1](https://i.imgur.com/vR3Uk4k.png)

**4 - Adicionar um glider no universo celular**

Adiciona um Glider na posição escolhida do seu campo celular.

Exemplo:

![1](https://i.imgur.com/Loz5ght.png)

**5 - Adicionar uma gosperGliderGun no universo celular**

Adiciona uma GosperGliderGun na posição escolhida do seu campo celular.

Exemplo:

![1](https://i.imgur.com/SHyXsy1.png)

**6 - Remover uma celula do universo celular**

Remove uma celula na posição escolhida do seu campo celular.

**7 - Remover um block do universo celular**

Remove um Block na posição escolhida do seu campo celular.

**8 - Remover um blinker do universo celular**

Remove um Blinker na posição escolhida do seu campo celular.

**9 - Remover um glider do universo celular**

Remove um Glider na posição escolhida do seu campo celular.

**10 - Remover uma gosperGliderGun no universo celular**

Remove uma GosperGliderGun na posição escolhida do seu campo celular.
