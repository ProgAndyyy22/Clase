#include <iostream>
using namespace std;

int main() {

    int n;
    int centenas;
    int decenas;
    int unidades;

    cout << "Ingrese un numero: ";
    cin >> n;

    if (n <= 0 || n >= 1000) {

        cout << "Numero no valido." << endl;

    }
    else {

        centenas = n / 100;
        decenas = (n % 100) / 10;
        unidades = n % 10;

        if (centenas > 0) {

            if (centenas == 1 && decenas == 0 && unidades == 0) {
                cout << "cien";
            }
            else {

                switch (centenas) {

                    case 1:
                        cout << "ciento ";
                        break;

                    case 2:
                        cout << "doscientos ";
                        break;

                    case 3:
                        cout << "trescientos ";
                        break;

                    case 4:
                        cout << "cuatrocientos ";
                        break;

                    case 5:
                        cout << "quinientos ";
                        break;

                    case 6:
                        cout << "seiscientos ";
                        break;

                    case 7:
                        cout << "setecientos ";
                        break;

                    case 8:
                        cout << "ochocientos ";
                        break;

                    case 9:
                        cout << "novecientos ";
                        break;
                }
            }
        }

        if (decenas == 1) {

            switch (unidades) {

                case 0:
                    cout << "diez";
                    break;

                case 1:
                    cout << "once";
                    break;

                case 2:
                    cout << "doce";
                    break;

                case 3:
                    cout << "trece";
                    break;

                case 4:
                    cout << "catorce";
                    break;

                case 5:
                    cout << "quince";
                    break;

                case 6:
                    cout << "dieciseis";
                    break;

                case 7:
                    cout << "diecisiete";
                    break;

                case 8:
                    cout << "dieciocho";
                    break;

                case 9:
                    cout << "diecinueve";
                    break;
            }
        }
        else {

            if (decenas == 2) {
                cout << "veinte";
            }
            else {

                switch (decenas) {

                    case 3:
                        cout << "treinta";
                        break;

                    case 4:
                        cout << "cuarenta";
                        break;

                    case 5:
                        cout << "cincuenta";
                        break;

                    case 6:
                        cout << "sesenta";
                        break;

                    case 7:
                        cout << "setenta";
                        break;

                    case 8:
                        cout << "ochenta";
                        break;

                    case 9:
                        cout << "noventa";
                        break;
                }

                if (unidades > 0) {
                    cout << " y ";
                }
            }

            if (decenas == 2 && unidades > 0) {
                cout << " y ";
            }

            switch (unidades) {

                case 1:
                    cout << "uno";
                    break;

                case 2:
                    cout << "dos";
                    break;

                case 3:
                    cout << "tres";
                    break;

                case 4:
                    cout << "cuatro";
                    break;

                case 5:
                    cout << "cinco";
                    break;

                case 6:
                    cout << "seis";
                    break;

                case 7:
                    cout << "siete";
                    break;

                case 8:
                    cout << "ocho";
                    break;

                case 9:
                    cout << "nueve";
                    break;
            }
        }

        cout << endl;
    }

    return 0;
}