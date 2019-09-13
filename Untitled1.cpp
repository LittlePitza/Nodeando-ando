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
    cout<<nodo1.snodo<<endl;
    nodo nodo2;
    nodo2.entero=7;
	nodo2.snodo=NULL;
	cout<<nodo2.snodo<<endl;
	nodo nodo3;
    nodo3.entero=9;
    nodo3.snodo=NULL;
    cout<<nodo3.snodo<<endl;
    
    return 0;
}

