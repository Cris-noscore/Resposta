
# Resposta 2

# Verificador de Pertencimento à Sequência de Fibonacci

Este é um programa em C++ que verifica se um número fornecido pertence à sequência de Fibonacci.

## Descrição

O código define uma função `pertenceFibonacci` que determina se um número inteiro `n` está na sequência de Fibonacci. A sequência de Fibonacci é uma série de números em que cada número é a soma dos dois números anteriores, começando por 0 e 1.

## Código

```cpp
#include <iostream>
using namespace std;

bool pertenceFibonacci(int n) {
    int a = 0, b = 1, c = 0;
    
    while (c <= n) {
        if (c == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}


## Autores

- [@Cris-noscore](https://www.github.com/Cris-noscore)


## Stack utilizada


**Back-end:** C++

