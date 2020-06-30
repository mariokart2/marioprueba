#include <iostream>
#include <conio.h>

using namespace std;

struct N
{
int dato;
N *siguiente;	
	
};




void sumaPila(N *&, int);



int main()
{
	N *pila=NULL; 
	int n1, n2;
	
	cout<<"ingrese un numero a la pila: "<<endl;
	cin>>n1;
	sumaPila(pila, n1);
	system("pause");
	system("cls");
		cout<<"ingrese otro numero: "<<endl;
	cin>>n2;
		sumaPila(pila, n2);
	
	getch();
	return 0;
}
 void sumaPila(N *&pila, int num)
 {
 	N *nwNodo = new N();
 	nwNodo -> dato = num; 
 	nwNodo -> siguiente = pila;
 	pila=nwNodo;
 	
 	cout<<num<<" se agrego a la pila"<<endl;
 }
