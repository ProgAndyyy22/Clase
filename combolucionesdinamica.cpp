#include <iostream>
#include <vector>

int main() {
    std::vector<int> monedas = {5, 8, 16};
    std::vector<long long> formas(201, 0);
    
    formas[0] = 1;

    for (int moneda : monedas) {
        for (int i = moneda; i <= 200; ++i) {
            formas[i] += formas[i - moneda];
        }
    }

    for (int i = 50; i <= 200; ++i) {
        std::cout << i << " : " << formas[i] << "\n";
    }

    return 0;
}