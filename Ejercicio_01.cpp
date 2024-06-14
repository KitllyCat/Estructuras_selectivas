/*Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su promedio de
tres calificaciones es mayor o igual a 70; reprueba en caso contrario */

#include <iostream>
using namespace std;
int main(){
	
	int calificacion, aprueba, reprueba;
	cout<<"Ingrese la calificacion del alumno: "<<endl;
	cin>>calificacion;
	if (calificacion >= 70){
		cout<<"El alumno aprobo"<<endl;
	} else {
		cout<<"El alumno desaprobo"<<endl;
		}
	return 0;
	
}