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

//RJ: 20,29%
//MG: 16,17%
//ES: 15,03%
//OUTROS: 10,98%