#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;
void mostrarTiempo(clock_t tiempo);
void mostrarTiempo(clock_t tiempo){
	tiempo=clock() - tiempo;
	cout<<endl<<"Tiempo de ejecución es "<<double(tiempo)/CLOCKS_PER_SEC<<"seg."<<endl;	
}
int main (){
	clock_t tiempo=clock();
	long long i = 0;
	double sum = 0;
	for (i = 1; i<1000000000; i++){
		sum = sum + log(double(i));
	}
	mostrarTiempo(tiempo);
	cout<<"Pulse para salir..."<<endl;
	cin.get();
	return 0;
}
