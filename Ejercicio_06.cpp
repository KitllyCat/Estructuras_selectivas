#include <iostream>
using namespace std;

int main() {
    double promedio, pension, igv;

    cout << "Ingrese el promedio obtenido: ";
    cin >> promedio;

    if (promedio >= 18) {
        pension = 1000;
        igv = 0;
        pension -= pension * 0.3;
    } else {
        pension = 1000;
        igv = pension * 0.18;
    }

    double total = pension + igv;
    cout << "El alumno debe pagar un total de " << total << " soles." << endl;

    return 0;
}
