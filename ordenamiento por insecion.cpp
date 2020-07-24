//ordenamiento por insercion

#include <iostream>
#include <conio.h>
 using namespace std;


 
 int main (){
 
int numeros[] = {5,4,1,3,2}; 	
int i, pos, aux;


//algoritmo del ordenamiento por inserccion	
for(i=0; i<5;i++){
pos = i;
aux = numeros[i];
   
  while((pos>0)&&(numeros[pos-1] > aux)){  //aca vemos si en num a la izquiera es mayor que el numero que recorreremos
  	numeros[pos] = numeros[pos-1];
  pos--;
  }
  numeros[pos] = aux;
 }
 	
cout<<"ordenados de manera ascendente: ";
for (i=0; i<5; i++){
	
	cout<<numeros[i]<<" ";
} 	
 	
getch();
return 0;
}
