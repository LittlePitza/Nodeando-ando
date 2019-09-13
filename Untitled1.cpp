#include <bits/stdc++.h>
using namespace std;

struct nodo{
    int entero;
    nodo *snodo;
    
};
nodo l1,l2,l3;

int main(){
    nodo nodo1;
    nodo1.entero=3;
    nodo1.snodo=NULL;
    nodo nodo2;
    nodo2.entero=7;
	nodo2.snodo=NULL;
	nodo nodo3;
    nodo3.entero=9;
    nodo3.snodo=NULL;
	nodo nodo4;
	nodo4.entero=10;
	nodo4.snodo=NULL;
	nodo nodo5;
	nodo5.entero=4;
	nodo5.snodo=NULL;					
    
	nodo*current=&nodo1;
 	nodo1.snodo=&nodo2;
 	nodo2.snodo=&nodo3;
 	nodo3.snodo=&nodo4;
 	nodo4.snodo=&nodo5;
	while(current!=NULL){
		cout<<"Nodo: "<<current->entero<<endl;
		current=current->snodo;
	}   
    return 0;
}

