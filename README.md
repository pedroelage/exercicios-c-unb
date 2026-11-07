# Exercícios de APC — UnB

Este repositório reúne 20 exercícios em C feitos durante os estudos de Algoritmos e Programação de Computadores (APC). Cada arquivo contém um programa independente.

## Exercícios

| Arquivo | O que faz |
|---|---|
| `atetriz.c` | Simula um jogo em uma matriz: remove linhas completas de 1s, aplica gravidade às colunas e imprime os estados até não haver mais linhas completas. |
| `boleto.c` | Calcula um dígito verificador a partir dos algarismos de um número, alternando pesos 2 e 1 e somando os algarismos dos produtos. |
| `cesar2.c` | Aplica a cifra ROT13 às letras de várias frases, preservando os demais caracteres. |
| `cinema.c` | Registra assentos ocupados de uma sala de cinema e imprime o mapa das fileiras e lugares. |
| `cpfwhile.c` | Verifica os dois dígitos verificadores de um CPF usando laços e pesos crescentes. |
| `cursor.c` | Simula movimentos verticais de um cursor em um texto e tenta manter a coluna inicial ao mudar de linha. |
| `email2.c` | Gera um endereço no formato primeiro-nome.último-sobrenome@unb.br, convertendo as letras para minúsculas. |
| `existe.c` | Ordena uma sequência de palavras e verifica se alguma palavra de outra sequência também aparece nela. |
| `flor.c` | Lê uma matriz e informa o índice, começando em 1, da coluna com a maior soma. |
| `indicepar.c` | Separa e imprime os índices dos valores pares e dos valores ímpares de um vetor. |
| `local.c` | Substitui uma palavra somente quando ela aparece como palavra inteira, respeitando os limites entre letras e não letras. |
| `parouimpar.c` | Determina o vencedor de uma final de par ou ímpar após calcular os vencedores de dois confrontos anteriores. |
| `primos.c` | Para cada número, verifica se ele e os números formados ao remover seus últimos algarismos são primos. |
| `risada.c` | Extrai as vogais de uma risada e verifica se a sequência resultante é um palíndromo. |
| `stringexe.c` | Compara duas sequências de palavras e informa se existe alguma palavra em comum. |
| `subs.c` | Substitui ocorrências de uma sequência de caracteres por outra dentro de uma frase. |
| `vetor1.c` | Lê valores e encontra o segundo e o terceiro menores durante uma única passagem pelo vetor. |
| `vetor8.c` | Calcula a média inteira de um vetor e imprime os valores maiores que ela. |
| `viagem.c` | Processa conjuntos de participantes até o fim da entrada e escolhe o código com maior nota, usando o menor código como desempate. |
| `words.c` | Verifica se as letras de cada palavra estão em ordem estritamente crescente, sem diferenciar maiúsculas de minúsculas. |

## Compilar e executar

Com o GCC instalado, compile um arquivo por vez. Por exemplo:

```bash
gcc atetriz.c -o atetriz
./atetriz
```

No Windows, o executável pode ser iniciado como `atetriz.exe` após a compilação.
