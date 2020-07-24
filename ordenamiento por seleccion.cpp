//ordenamiento por seleccion

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
int numeros[] = {4,5,1,2,3};	
int i,j,aux,min;	
        //algoritmo del ordenamiento por seleccion   
	    for(i=0;i<5;i++){
		
	    min=i;
	    for(j=i+1;j<5;j++){
		    if(numeros[j]<numeros[min]){
		    min=j;	
		    	
			}
		
	   }//aca hacemos los intercambios de posicion correspondiente
	   aux = numeros[i];
	   numeros[i] = numeros[min];			
       numeros[min] = aux;	
	
	
	}
	cout<<"ordenados de manera ascendente: ";
	for(i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
getch();
return 0;	
}
