#include <iostream>
using namespace std;

int main() {
    double cantidad, precioUnitario, total;

    cout << "Ingrese la cantidad de llantas que desea comprar: ";
    cin >> cantidad;

    if (cantidad < 5) {
        precioUnitario = 300;
    } else if (cantidad >= 5 && cantidad <= 10) {
        precioUnitario = 250;
    } else {
        precioUnitario = 200;
    }

    total = cantidad * precioUnitario;
    cout << "El precio unitario por cada llanta es: $" << precioUnitario << endl;
    cout << "El total de la compra es: $" << total << endl;

    return 0;
}
