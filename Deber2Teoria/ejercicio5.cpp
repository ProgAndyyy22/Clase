
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double OZ_A_ML = 29.5735;

    double MASTER_VODKA_ML = 11.0 * OZ_A_ML; // 7 partes
    double BRISA_CARIBE_ML= 9.0 * OZ_A_ML; // 9 partes
    double GOLPE_BLANCO_ML = 6.5 * OZ_A_ML; // 9 partes
    double JUGO_NARANJA_ML = 16.0 * OZ_A_ML; // jugo puro
    double COLA_ML = 13.0 * OZ_A_ML; // cola pura


    double PRECIO_MASTER_VODKA = 7.00;
    double PRECIO_BRISA_CARIBE = 6.50;
    double PRECIO_GOLPE_BLANCO = 7.50;
    double PRECIO_JUGO_NARANJA = 3.00;
    double PRECIO_COLA = 1.00;

    double PRECIO_BOT_VODKA = 23.00, CAP_BOT_VODKA = 700.0;
    double PRECIO_BOT_RON = 12.00, CAP_BOT_RON   = 750.0;
    double PRECIO_BOT_JUGO = 6.00,  CAP_BOT_JUGO  = 2000.0;
    double PRECIO_BOT_COLA = 1.50,  CAP_BOT_COLA  = 1750.0;

    double masterVodka, brisaCaribe, golpeBlanco, jugoNaranja, cola;

    cout << "Cantidad de Master Vodka: ";
    cin >> masterVodka;
    cout << "Cantidad de Brisa del Caribe: ";
    cin >> brisaCaribe;
    cout << "Cantidad de Golpe Blanco: ";
    cin >> golpeBlanco;
    cout << "Cantidad de Jugo de Naranja: ";
    cin >> jugoNaranja;
    cout << "Cantidad de Cola: ";
    cin >> cola;

    // a) Precio total de la orden (lo que paga el cliente)
    double precioTotal = masterVodka * PRECIO_MASTER_VODKA
                        + brisaCaribe * PRECIO_BRISA_CARIBE
                        + golpeBlanco * PRECIO_GOLPE_BLANCO
                        + jugoNaranja * PRECIO_JUGO_NARANJA
                        + cola * PRECIO_COLA;

    // ml necesarios de cada insumo, segun las proporciones de cada coctel
    double mlVodka = masterVodka * MASTER_VODKA_ML * (4.0/7.0)
                    + brisaCaribe * BRISA_CARIBE_ML * (1.0/9.0)
                    + golpeBlanco * GOLPE_BLANCO_ML * (3.0/9.0);

    double mlRon   = masterVodka * MASTER_VODKA_ML * (2.0/7.0)
                    + brisaCaribe * BRISA_CARIBE_ML * (4.0/9.0)
                    + golpeBlanco * GOLPE_BLANCO_ML * (5.0/9.0);

    double mlJugo  = masterVodka * MASTER_VODKA_ML * (1.0/7.0)
                    + brisaCaribe * BRISA_CARIBE_ML * (2.0/9.0)
                    + jugoNaranja * JUGO_NARANJA_ML;

    double mlCola  = brisaCaribe * BRISA_CARIBE_ML * (2.0/9.0)
                    + golpeBlanco * GOLPE_BLANCO_ML * (1.0/9.0)
                    + cola * COLA_ML;

    // b) Botellas a comprar de cada insumo (redondeo hacia arriba con ceil, sin usar if)
    double botVodka = ceil(mlVodka / CAP_BOT_VODKA);
    double botRon = ceil(mlRon / CAP_BOT_RON);
    double botJugo  = ceil(mlJugo / CAP_BOT_JUGO);
    double botCola  = ceil(mlCola/ CAP_BOT_COLA);

    // c) Costo de preparar el pedido (lo que le cuesta al dueno del bar)
    double costoPedido = botVodka* PRECIO_BOT_VODKA
                        + botRon* PRECIO_BOT_RON
                        + botJugo* PRECIO_BOT_JUGO
                        + botCola* PRECIO_BOT_COLA;

    // d) Sobrantes en ml de cada bebida comprada
    double sobranteVodka = botVodka* CAP_BOT_VODKA - mlVodka;
    double sobranteRon = botRon* CAP_BOT_RON   - mlRon;
    double sobranteJugo = botJugo* CAP_BOT_JUGO  - mlJugo;
    double sobranteCola = botCola* CAP_BOT_COLA  - mlCola;

    double ganancia = precioTotal - costoPedido;

    cout << "\n--- Resultados ---\n";
    cout << "Precio total de la orden: $" << precioTotal << endl;

    cout << "Botellas a comprar -> "
         << "Vodka: " << botVodka
         << ", Ron: " << botRon
         << ", Jugo: " << botJugo
         << ", Cola: " << botCola << endl;

    cout << "Costo de preparar el pedido: $" << costoPedido << endl;

    cout << "Sobrantes (ml) "
         << "Vodka: " << sobranteVodka
         << ", Ron: " << sobranteRon
         << ", Jugo: " << sobranteJugo
         << ", Cola: " << sobranteCola << endl;

    cout << "Ganancia: " << ganancia << endl;

    return 0;
}
