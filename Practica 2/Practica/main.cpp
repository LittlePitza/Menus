#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

struct direccion{
char calle[20];
int cp;
char ciudad[20];
};

struct persona{
char nombre[100];
int edad;
float estatura;
struct direccion dire;
};

int main(int argc, char** argv){
int opcion=0 ;
struct persona P1[5];
struct persona *apuntador;

apuntador=&P1[0];
do{
system("cls");
cout<<"Menu Suscripciones a Paginas NO conocidas\n";
cout<<"1.- Agregar Usuarios\n";
cout<<"2.- Borrar Usuarios\n";
cout<<"3.- Buscar Usuarios\n";
cout<<"4.- Salir\n";
cin>>opcion;

switch(opcion){

case 1:
    system("cls");
    cout<<"Agregar Usuarios\n";
    for(int i=0;i<2;i++){
    fflush(stdin);
    cout<<"Nombre: ";
    cin.getline(P1[i].nombre,100,'\n');
    cout<<"Edad: ";
    cin>>P1[i].edad;
    cout<<"Estatura; ";
    cin>>P1[i].estatura;
    fflush(stdin);
    cout<<" Calle: ";
    cin.getline(P1[i].dire.calle,20,'\n');

}
    break;

case 2:
    system("cls");
    cout<<"Borrar Usuarios";
    break;
case 3:
    int opc_1;
    system("cls");
    cout<<"Buscar Usuarios"<<"\n";
    cout<<"Ingresa el numero de usuario que deseas buscar"<<"\n";
    cin>>opc_1;
    for(int i=opc_1; i==opc_1;i++){
    cout<<endl<<"Nombre guardado: "<<P1[i].nombre;
    cout<<endl<<"Edad guardad: "<<P1[i].edad;
    cout<<endl<<"Estatura Guardada:"<<P1[i].estatura;
    cout<<endl<<"Calle Guardada:"<<P1[i].dire.calle<<"\n";
    system("pause");
    }
    break;

case 4:
    int opc_2;
    cout<<"Lista de Usuarios\n";
    for


}
}while(opcion!=4);
system("pause");
return 0;

}
