#include <iostream>
using namespace std;
int main(){
	
    double totalmonto, descuento, finalmonto;
    cout << "Ingresa el monto total de la compra: ";
    cin >> totalmonto;
	descuento = 0;
	
    if (totalmonto > 1000) {
        descuento = (10 * totalmonto) / 100;
        finalmonto = totalmonto - descuento;
    } else {
        finalmonto = totalmonto;
    }

    cout << "El monto total a pagar: S/ " << totalmonto << endl;
    cout << "Su descuento aplicado: S/ " << descuento << endl;
    cout << "Y el monto a pagar despues del descuento: S/ " << finalmonto << endl;
    return 0;
}

