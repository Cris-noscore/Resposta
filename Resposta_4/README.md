
# Resposta 3

# Cálculo de Percentual de Representação por Estado

Este é um programa em C++ que calcula e exibe o percentual de representação de faturamento por estado com base em valores predefinidos.

## Descrição

O programa calcula a porcentagem de participação no total de faturamento para cada estado e exibe o resultado com precisão de duas casas decimais. Os estados considerados são São Paulo (SP), Rio de Janeiro (RJ), Minas Gerais (MG), Espírito Santo (ES) e outros.

## Código

```cpp
#include <iostream>
#include <iomanip> // Para usar o std::setprecision

int main() {
    
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;

    
    double total = sp + rj + mg + es + outros;

    
    std::cout << std::fixed << std::setprecision(2); // Definir precisão de duas casas decimais

    std::cout << "Percentual de representacao por estado:" << std::endl;
    std::cout << "SP: " << (sp / total) * 100 << "%" << std::endl;
    std::cout << "RJ: " << (rj / total) * 100 << "%" << std::endl;
    std::cout << "MG: " << (mg / total) * 100 << "%" << std::endl;
    std::cout << "ES: " << (es / total) * 100 << "%" << std::endl;
    std::cout << "Outros: " << (outros / total) * 100 << "%" << std::endl;

    return 0;
}


Exemplo de Saída
Percentual de representacao por estado:
SP: 37.68%
RJ: 20.29%
MG: 16.17%
ES: 15.03%
Outros: 10.98%


## Autores

- [@Cris-noscore](https://www.github.com/Cris-noscore)


## Stack utilizada

**Back-end:** C++

