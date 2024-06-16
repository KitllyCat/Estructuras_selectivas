#include <iostream>
using namespace std;

int main() {
    int numCamisas;
    float precioUnitario, totalmonto, descuento, pagomonto;
	descuento = 0;
    cout << "Ingresa el numero de camisas compradas: "<<endl;
    cin >> numCamisas;
    cout << "Ingresa el precio unitario por camisa: "<<endl;
    cin >> precioUnitario;

    totalmonto = numCamisas * precioUnitario;

    if (numCamisas >= 3) {
        descuento = (20 * totalmonto) / 100;
    } else {
        descuento = (10 * totalmonto) / 100;
    }

    pagomonto = totalmonto - descuento;

    cout << "El monto total a pagar: S/ " << totalmonto << endl;
    cout << "Eñ descuento aplicado: S/ " << descuento << endl;
    cout << "Y el monto a pagar despues del descuento: S/ " << pagomonto << endl;
    return 0;
}

