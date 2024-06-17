#include <iostream>
using namespace std;

int main() {
    int montoTotal, descuento, numeroEscogido;

    cout << "Ingresa el monto total de la compra: ";
    cin >> montoTotal;
    cout << "Ingresa el numero escogido al azar: ";
    cin >> numeroEscogido;
	descuento = 0;
    if (numeroEscogido < 74) {
        descuento = (15 * montoTotal) / 100;
    } else {
        descuento = (20 * montoTotal) / 100;
    }

    cout << "El descuento aplicado es de: S/ " << descuento << endl;

    return 0;
}

