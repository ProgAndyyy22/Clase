#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    vector<int> HorasValidasLV = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    vector<int> HorasValidasS = {10, 11, 12, 13};
    vector<int> HorasAgenda = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17};

    vector<string> Encabezado = {"Hora", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    vector<string> DiasString = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};

    vector<vector<string>> agenda(10, vector<string>(7, "-"));
    vector<string> HorasLabel = {"08:00", "09:00", "10:00", "11:00", "12:00", "13:00", "14:00", "15:00", "16:00", "17:00"};

    for (int i = 0; i < 10; i++) {
        agenda[i][0] = HorasLabel[i];
    }

    while (true) {
        cout << "============== Sala de reuniones ==============" << endl;
        cout << "1. Agendar reserva" << endl;
        cout << "2. Ver resumen semanal (compacto)" << endl;
        cout << "3. Ver agenda semanal completa" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";

        int opcion = 0;
        cin >> opcion;

        if (opcion == 4) {
            cout << "Saliendo..." << endl;
            break;
        }

        if (opcion == 1) {
            int dia = 0;
            int hora = 0;
            string nombre;

            do {
                cout << "Ingrese el dia de la semana (1=Lunes, 2=Martes, 3=Miercoles, 4=Jueves, 5=Viernes, 6=Sabado): ";
                cin >> dia;

                if (dia < 1 || dia > 6) {
                    cout << "Dia no valido." << endl;
                }
            } while (dia < 1 || dia > 6);

            bool horaValida = false;

            do {
                cout << "Ingrese la hora (8:00 a 17:00; sabados 10:00 a 13:00): ";
                cin >> hora;

                if (dia == 6) {
                    horaValida = false;
                    for (int h : HorasValidasS) {
                        if (h == hora) {
                            horaValida = true;
                            break;
                        }
                    }
                    if (!horaValida) {
                        cout << "Hora no valida para sabado." << endl;
                    }
                } else {
                    horaValida = false;
                    for (int h : HorasValidasLV) {
                        if (h == hora) {
                            horaValida = true;
                            break;
                        }
                    }
                    if (!horaValida) {
                        cout << "Hora no valida para la semana." << endl;
                    }
                }
            } while (!horaValida);

            cout << "Ingrese el nombre de la reserva: ";
            cin >> nombre;

            int fila = -1;
            for (int i = 0; i < HorasAgenda.size(); i++) {
                if (HorasAgenda[i] == hora) {
                    fila = i;
                    break;
                }
            }

            if (fila == -1) {
                cout << "Hora no valida." << endl;
            } else {
                if (agenda[fila][dia] != "-" && agenda[fila][dia] != " ") {
                    cout << "La hora " << hora << ":00 del dia " << DiasString[dia - 1] << " ya esta reservada." << endl;
                } else {
                    agenda[fila][dia] = nombre;
                    cout << "Reserva agendada exitosamente para el dia " << DiasString[dia - 1]
                         << " a las " << hora << ":00" << " con el nombre: " << nombre << endl;
                }
            }

            cout << endl;
        }
        else if (opcion == 2) {
            int totalReservas = 0;
            vector<int> conteoHora(10, 0);

            for (int dia = 1; dia <= 6; dia++) {
                bool tieneReserva = false;
                cout << left << setw(12) << DiasString[dia - 1];

                for (int i = 0; i < 10; i++) {
                    if (agenda[i][dia] != "-" && agenda[i][dia] != " ") {
                        cout << " tiene reserva a las " << agenda[i][0] << " con el nombre: " << agenda[i][dia] << endl;
                        tieneReserva = true;
                        conteoHora[i]++;
                        totalReservas++;
                    }
                }

                if (!tieneReserva) {
                    cout << " no tiene reservas" << endl;
                }
            }

            int maximo = 0;
            for (int x : conteoHora) {
                if (x > maximo) {
                    maximo = x;
                }
            }

            if (totalReservas == 0) {
                cout << "No hay reservas agendadas" << endl;
            } else {
                cout << "La hora mas agendada de la semana es: ";
                bool primero = true;

                for (int i = 0; i < 10; i++) {
                    if (conteoHora[i] == maximo) {
                        if (!primero) {
                            cout << ", ";
                        }
                        cout << agenda[i][0];
                        primero = false;
                    }
                }

                cout << " (" << maximo << " reservas)" << endl;
            }

            cout << "Total de reservas: " << totalReservas << endl;
            cout << endl;
        }
        else if (opcion == 3) {
            cout << left << setw(12) << Encabezado[0];
            for (int i = 1; i < 7; i++) {
                cout << left << setw(12) << Encabezado[i];
            }
            cout << endl;

            for (int i = 0; i < 10; i++) {
                cout << left << setw(12) << agenda[i][0];

                for (int dia = 1; dia <= 6; dia++) {
                    cout << left << setw(12) << agenda[i][dia];
                }

                cout << endl;
            }

            cout << endl;
        }
        else {
            cout << "Opcion no valida." << endl;
        }
    }

    return 0;
}