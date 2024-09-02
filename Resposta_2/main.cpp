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

int main() {
    int numero;

    cout << "Informe um número: ";
    cin >> numero;

    if (pertenceFibonacci(numero)) {
        cout << "O número " << numero << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << numero << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}
