#include <iostream>
#include <conio.h>

using namespace std;

struct N
{
int dato;
N *siguiente;	
	
};
void sumaPila(N *&, int);  //prototipo de funcion
void sacarpila(N *&, int &);  //prototipo de funcion

int main(){
	N *pila=NULL; 
	int dato;
	
	cout<<"ingrese un numero a la pila: "<<endl;
	cin>>dato;
	sumaPila(pila, dato); //agregamos los datos a la pila
	system("pause");
	system("cls");
		cout<<"ingrese otro numero: "<<endl;
	cin>>dato;
		sumaPila(pila, dato);
		
	cout<<"\nSacando los elementos de la pila: ";
	while(pila != NULL){//mientras no sea el final de la fila
		sacarpila(pila,dato);
		if (pila != NULL){
    cout<<dato<<" , "; //mientras pila sea diferente de NULL agregara "," para continuar con los datos
		} 
		else {
			cout<<dato<<"."; // y cuando no pondra un punto final marcando el fin
		}
	}
	getch();
	return 0;
}
 void sumaPila(N *&pila, int num){
 	N *nwNodo = new N(); //creamos un espacio de memoria
 	nwNodo -> dato = num; //cargamos el valor dentro del nodo
 	nwNodo -> siguiente = pila;//cargamos el puntero pila dentro del nodo
 	pila=nwNodo;//asignamos el nuevo nodo a pila
 	
 	cout<<num<<" se agrego a la pila"<<endl;
 }
 void sacarpila(N *&pila, int &n){
	N *aux=pila;
	n = aux->dato;
	pila= aux->siguiente;
	delete aux;
}

