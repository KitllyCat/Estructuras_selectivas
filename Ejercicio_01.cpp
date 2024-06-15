#include <iostream>
using namespace std;
int main(){
	
	int calificacion, aprueba, reprueba;
	cout<<"Ingrese la calificacion del alumno para determinar su estado: "<<endl;
	cin>>calificacion;
	
	if (calificacion >= 70){
		cout<<"El alumno aprobo :( "<<endl;
	} else {
		cout<<"El alumno desaprobo :) "<<endl;
		}

	return 0;
	
}

