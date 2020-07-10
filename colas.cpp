#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipo de funcion
void insertarcola(Nodo *&, Nodo*&, int);
bool cola_vacia(Nodo *);

int main(){
 Nodo *frente = NULL;
 Nodo *fin = NULL;
 	
int dato;
 	
cout<<"ingrese un numero: ";
cin>>dato;	
insertarcola(frente,fin,dato);	
	
	
	getch();
	return 0;
}

//funcion para insertar elementos
void insertarcola(Nodo *&frente, Nodo *&fin, int n){
	
	
Nodo *nuevo_nodo = new Nodo();
nuevo_nodo->dato = n;
nuevo_nodo->siguiente = NULL;

if(cola_vacia(frente)){
	
	frente = nuevo_nodo;
}	

else{
	fin->siguiente = nuevo_nodo;
}


	fin = nuevo_nodo;
    cout<<n<<" agregado ";

}


//funcion para la cola vacia
/*bool cola_vacia(Nodo *frente){
	
	if(frente == NULL){
	
	return true;
	}
	else{
	return false;
	}
	
}*/
//la funcion anterior se puede acortar con esta linea de texto
bool cola_vacia(Nodo *frente){
return(frente == NULL)? true : false;
}
