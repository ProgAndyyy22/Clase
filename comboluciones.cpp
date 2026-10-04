#include <iostream>
#include <vector>

std::vector<long long> multiplicarPolinomios(const std::vector<long long>& P1, const std::vector<long long>& P2, int max_grado) {
    std::vector<long long> resultado(max_grado + 1, 0);
    
    for (int i = 0; i <= max_grado; ++i) {
        if (P1[i] == 0) continue;
        
        for (int j = 0; j <= max_grado - i; ++j) {
            resultado[i + j] += P1[i] * P2[j];
        }
    }
    
    return resultado;
}

int main() {
    int max_grado = 200;

    std::vector<long long> polinomio5(max_grado + 1, 0);
    for (int i = 0; i <= max_grado; i += 5) {
        polinomio5[i] = 1;
    }

    std::vector<long long> polinomio8(max_grado + 1, 0);
    for (int i = 0; i <= max_grado; i += 8) {
        polinomio8[i] = 1;
    }

    std::vector<long long> polinomio16(max_grado + 1, 0);
    for (int i = 0; i <= max_grado; i += 16) {
        polinomio16[i] = 1;
    }

    std::vector<long long> parcial = multiplicarPolinomios(polinomio5, polinomio8, max_grado);
    std::vector<long long> final = multiplicarPolinomios(parcial, polinomio16, max_grado);

    for (int i = 50; i <= max_grado; ++i) {
        std::cout << i << " : " << final[i] << "\n";
    }

    return 0;
}