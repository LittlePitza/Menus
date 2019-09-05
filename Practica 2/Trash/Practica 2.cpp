#include <bits/stdc++.h>
using namespace std;
int arreglo[10];

int main(){
	
	int mayor = INT_MIN;
	int *puntero = arreglo;
	for (;puntero<=&arreglo[9];puntero++){
		cout<<"Escribe un numero entero ";
		cin>>*puntero;
		if(*puntero>mayor) mayor=*puntero;
	}
	cout<<"El numero mas grande es"<<;
	return 0;
	
	
	
	
	
	
	
	
	return 0;
}
