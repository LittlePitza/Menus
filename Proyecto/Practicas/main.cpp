#include <bits/stdc++.h>
using namespace std;

struct direccion{
char calle[20];
int cp;
char ciudad[20];
};

struct persona{
char nombre[20];
int edad;
float estructura;
struct direccion dire;
};

int main(argc, char**, argv){
struct persona P1[5];
struct persona *apuntador;

apuntador=&P1[0];

for(int i=0;i<1;i++){
    cout<<"Nombre"<<
}





return 0;

}
