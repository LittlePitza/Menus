#include <bits/stdc++.h>
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
struct persona P1[5];
struct persona *apuntador;

apuntador=&P1[0];

for(int i=0;i<1;i++){
    cout<<"Nombre: ";
    cin.getline(P1[i].nombre,100,'\n');
    cout<<"Edad: ";
    cin>>P1[i].edad;
    cout<<"Estatura; ";
    cin>>P1[i].estatura;
    cout<<" Calle: ";
    fflush(stdin);
    cin.getline(P1[i].dire.calle,20,'\n');

}

//

cout<<endl<<"Nombre guardado: "<<P1[0].nombre;
cout<<endl<<"Edad guardad: "<<P1[0].edad;
cout<<endl<<"Estatura Guardada:"<<P1[0].estatura;
cout<<endl<<"Calle Guardada:"<<P1[0].dire.calle<<"\n";

system("pause");
return 0;

}
