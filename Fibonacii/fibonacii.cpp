#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int num1, aux, aux1,num;
    char exit;

    do{
        num1=0;aux=0;aux1=1;
        system("cls");
        cout<<"Secuencia de fibonacii"<<endl<<endl;
        cout<<"Cuantos Numeros de la secuencia quieres ver?\n";
        cin>>num;
        cout<<endl;
        cout<<"Los numeros son..."<<endl;

        for(int a=1;a<=num;a++){
            cout<<num1<<endl;
            aux=num1;
            num1=num1+aux1;
            aux1=aux;
        }

        cout<<endl<<endl<<"Desea salir S/N? ";
        cin>>exit;
    }while(exit!='s'&&exit!='S');
}
