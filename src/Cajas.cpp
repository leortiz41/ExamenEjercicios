#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;


using namespace std;

struct  Nodo{

    int dato;
    Nodo *siguiente;

};

void agregar1(Nodo *&,int);

void agregar2(Nodo *&,Nodo*&,int);

void sacar2(Nodo *&,int &);

bool lista_vacia(Nodo *);

void sacar1(Nodo *&,Nodo *&,int &);

int main(){

    Nodo *frente = NULL;
    Nodo *fin = NULL;


    int dato;
    cout<<"Digite un codigo de caja 1:";
    cin>>dato;
    agregar2(frente,fin,dato);
    cout<<"Digite un codigo de caja 2:";
    cin>>dato;
    agregar2(frente,fin,dato);    
    cout<<"Digite un codigo de caja 3:";
    cin>>dato;
    agregar2(frente,fin,dato);
    
    cout<<"Despachando las cajas al repartidor: ";

    while(frente!=NULL){
        sacar1(frente,fin,dato);
        if(frente!=NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<".";
        }
    }
    
    getch();
    return 0;

}

void agregar1(Nodo *&lista,int n)
{

    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato=n;

    nuevo_nodo->siguiente = lista;

    lista=nuevo_nodo;

    cout<<"\nElmento "<<n<<" Agregado correctamente"<<endl;

}

bool lista_vacia(Nodo *frente){

    return (frente==NULL)? true : false;

}

void sacar2(Nodo *&lista,int &n){

    Nodo *aux=lista;

    n=aux->dato;

    lista=aux->siguiente;

    delete aux;

}

void agregar2(Nodo *&frente,Nodo *&fin,int n){

    Nodo *nuevo_nodo=new Nodo();

     nuevo_nodo-> dato=n;

    nuevo_nodo-> siguiente=NULL;

    if(lista_vacia(frente)){        frente=nuevo_nodo; }

    else{        fin->siguiente=nuevo_nodo; }

    fin=nuevo_nodo;

    cout<<"\tElemento "<<n<<" insertado correctamente"<<endl;

}

void sacar1(Nodo *&frente,Nodo *&fin,int &n){

    n =frente->dato;

    Nodo *aux=frente;

    if(frente==fin){        frente=NULL;        fin=NULL;    }

    else{        frente=frente->siguiente;    }

    delete aux;

}