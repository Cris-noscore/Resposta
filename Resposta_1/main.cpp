#include <iostream>

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    std::cout << "O valor de SOMA é: " << SOMA << std::endl;

    return 0;
}

//A soma é 91