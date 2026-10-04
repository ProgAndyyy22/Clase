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
    int objetivo = 121;

    std::vector<long long> p1(objetivo + 1, 0);
    for (int i = 0; i <= objetivo; i += 1) p1[i] = 1;

    std::vector<long long> p2(objetivo + 1, 0);
    for (int i = 0; i <= objetivo; i += 2) p2[i] = 1;

    std::vector<long long> p10(objetivo + 1, 0);
    for (int i = 0; i <= objetivo; i += 10) p10[i] = 1;

    std::vector<long long> p25(objetivo + 1, 0);
    for (int i = 0; i <= objetivo; i += 25) p25[i] = 1;

    std::vector<long long> p50(objetivo + 1, 0);
    for (int i = 0; i <= objetivo; i += 50) p50[i] = 1;

    std::vector<long long> m1 = multiplicarPolinomios(p1, p2, objetivo);
    std::vector<long long> m2 = multiplicarPolinomios(m1, p10, objetivo);
    std::vector<long long> m3 = multiplicarPolinomios(m2, p25, objetivo);
    std::vector<long long> final = multiplicarPolinomios(m3, p50, objetivo);

    std::cout << objetivo << " : " << final[objetivo] << "\n";

    return 0;
}