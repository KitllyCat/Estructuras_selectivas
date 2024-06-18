#include <iostream>
using namespace std;

int main() {
	
    int montoTotal, descuento, numeroEscogido;

    cout << "Ingresa el monto total de la compra: "<<endl;
    cin >> montoTotal;
    cout << "Ingresa el numero escogido al azar: "<<endl;
    cin >> numeroEscogido;
	descuento = 0;
	
    if (numeroEscogido =< 74) {
        descuento = (15 * montoTotal) / 100;
    } else {
        descuento = (20 * montoTotal) / 100;
    }

    cout << "El descuento aplicado con el numero "<<numeroEscogido<<" es de: S/ " << descuento << endl;

    return 0;
    
}

