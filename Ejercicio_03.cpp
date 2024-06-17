#include <iostream>
using namespace std;

int main() {
	
    int numCamisas;
    float precioUnitario, totalmonto, descuento, pagomonto;
    
	descuento = 0;
	totalmonto = numCamisas * precioUnitario;
	
    cout << "Ingresa el numero de camisas compradas: "<<endl;
    cin >> numCamisas;
    cout << "Ingresa el precio unitario por camisa: "<<endl;
    cin >> precioUnitario;

    if (numCamisas >= 3) {
        descuento = (20 * totalmonto) / 100;
    } else {
        descuento = (10 * totalmonto) / 100;
    }

    pagomonto = totalmonto - descuento;

    cout << "El monto total a pagar: S/ " << totalmonto << " y el descuento aplicado es de: S/"<<descuento<< endl;
    cout << "Entonces, el monto a pagar despues del descuento: S/ " << pagomonto << endl;
    return 0;
    
}

