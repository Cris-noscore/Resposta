
# Resposta 5

# Inversão de String

Este é um programa em C++ que inverte uma string fornecida pelo usuário.

## Descrição

O programa lê uma string digitada pelo usuário, inverte a string e exibe o resultado. A inversão é realizada trocando os caracteres da string de forma a obter a ordem inversa dos caracteres.

## Código

```cpp
#include <iostream>
#include <string>

int main() {
    
    std::string str;
    std::cout << "Digite a string para ser invertida: ";
    std::getline(std::cin, str);

    
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    
    std::cout << "String invertida: " << str << std::endl;

    return 0;
}




## Autores

- [@Cris-noscore](https://www.github.com/Cris-noscore)


## Stack utilizada

**Back-end:** C++
