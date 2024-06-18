#include <iostream>
using namespace std;

int main() {
    char sexo;
    int edad;
    double numPulsaciones;

    cout << "Ingrese el sexo (F/M): ";
    cin >> sexo;
    cout << "Ingrese la edad: ";
    cin >> edad;

    if (sexo == 'F' || sexo == 'f') {
        numPulsaciones = (220 - edad) / 10.0;
    } else if (sexo == 'M' || sexo == 'm') {
        numPulsaciones = (210 - edad) / 10.0;
    } else {
        cout << "Sexo no v�lido. Intente nuevamente." << endl;
        return 1;
    }

    cout << "El n�mero de pulsaciones por cada 10 segundos es: " << numPulsaciones << endl;

    return 0;
}
