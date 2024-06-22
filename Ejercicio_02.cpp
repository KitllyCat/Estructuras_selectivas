#include <iostream>
using namespace std;
int main(){
	int opcion;
    double totalmonto, descuento, finalmonto;
    do {
        cout << "Programa para calcular el descuento aplicado:  (seleccione 1 o 2)" << endl;
        cout << "1. Iniciar" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        switch(opcion) {
        case 1:
    		cout << "Ingresa el monto total de la compra: ";
    		cin >> totalmonto;
			descuento = 0;
    		if (totalmonto > 1000) {
        	descuento = (10 * totalmonto) / 100;
        	finalmonto = totalmonto - descuento;
    		} else {
        	finalmonto = totalmonto;
    		}
    		cout << "El monto total a pagar es de: S/ " << totalmonto << " y el descuento que se aplico es de: "<< descuento << endl;
    		cout << "Entonces el monto a pagar despues del descuento es de: S/ " << finalmonto << endl;
    		return 0;
    	case 2:
        	cout << "Saliendo..." << endl;
        	break;
        default:
            cout << "Opcion invalida. Intente de nuevo." << endl;
        }

        cout << endl;

    } while(opcion != 2);

    return 0;
}

