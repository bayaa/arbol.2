
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int contadorArreglo=0;
int V1,V2;
struct Nodo
{
    string dato;
    string dato2;
    Nodo *siguiente;
    Nodo *siguiente2;
};
string buscador,reserva;
void mostrarLista(Nodo *);
void insertarLista (Nodo *&, string);
void mostrarLista2(Nodo *);
void insertarLista2 (Nodo *&, string);
void sacarpila(Nodo *&, string);
void menu();
Nodo *lista = NULL;
Nodo *lista2 = NULL;
int main()
{
    menu();
    getch();
    return 0;
}
void menu()
{
    string dato,variable,n;
    int cant;
    int opcion;
    do
    {
        cout<<"\t MENU.\n";
        cout<<"1.- Insertar expresion\n";
        cout<<"2.- MOstrar elementos de la lista\n";
        cout<<"Salir"<<endl;
        cin>>opcion;
        switch(opcion)
        {
        case 1: do
            {
              cout<<"\nDigite expresion \n(finalizar expresion oprima p)\n"<<endl;
             getline(cin,n);
             getline(cin,n);
             cant=n.length();
             string b[cant];
for (int i = 0; i < cant; i++)
{
    b[i] = n[i];
dato=b[i];


if (dato==buscador){

                        insertarLista(lista, buscador);
                        ///mostrarLista2(lista2);
                        while (lista2!=NULL){
                                sacarpila(lista2, dato);
                        if (lista2 != NULL){
                                cout<<" \t  NULL\n  ";

                        }

                        }

                        insertarLista2(lista2, dato);
                        buscador=dato;



                       }

   else  if(dato=="+"||dato=="-"||dato=="*"||dato=="/"){

                        if ((dato=="-" || dato =="+")&&( buscador =="*"||buscador =="/")){
                        insertarLista(lista, buscador);
                         insertarLista(lista,reserva);
                        ///mostrarLista2(lista2);
                        while (lista2!=NULL){
                                sacarpila(lista2, dato);
                        if (lista2 != NULL){
                                cout<<" \t  NULL\n  ";

                        }

                        }
                       /// insertarLista2(lista2, reserva);
                        insertarLista2(lista2, dato);
                        buscador=dato;
                        reserva=" ";

                       }

                       else if ((dato=="*" || dato =="/")&&( buscador =="+"||buscador =="-")){
                            reserva=buscador;
                        //insertarLista(lista, dato);
                        ///mostrarLista2(lista2);
                        while (lista2!=NULL){
                                sacarpila(lista2, dato);
                        if (lista2 != NULL){
                                cout<<" \t  NULL\n  ";

                        }

                        }
                        insertarLista2(lista2,dato);
                        insertarLista2(lista2, buscador);
                        buscador=dato;
                       }

                       else{
                       buscador=dato;
                    insertarLista2(lista2,buscador);

                    }
                }
                else {

              ///  variable= dato;
                insertarLista(lista,dato);}
}

            }
            while(dato != "p");
            system ("pause");
            break;
        case 2:
            mostrarLista(lista);
            mostrarLista2(lista2);
            cout<<"\n";
            system ("pause");
            break;

        }
        system("cls");
    }
    while(opcion != 3);
}
void insertarLista (Nodo *&lista, string n)
{

    Nodo *nuevo_nodo =new Nodo ();
if (n=="p"){
    return;
}

    nuevo_nodo->dato=n;
    Nodo *aux1= lista;
    Nodo* aux2;
    while ((aux1 !=NULL)) //&& (aux1->dato <n)
    {
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if (lista == aux1)
    {
        lista=nuevo_nodo;
    }
    else
    {
        aux2->siguiente=nuevo_nodo;
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente= aux1;

}
void insertarLista2 (Nodo *&lista2, string n2)
{

    Nodo *nuevo_nodo2 =new Nodo ();

     nuevo_nodo2->dato2=n2;
    Nodo *aux12= lista2;
    Nodo* aux22;
    while (aux12 !=NULL)/// && (aux12->dato2 <n2))
    {
        aux22=aux12;
        aux12=aux12->siguiente2;
    }
    if (lista2 == aux12)
    {
        lista2=nuevo_nodo2;
    }
    else
    {
        aux22->siguiente2=nuevo_nodo2;
        aux22->siguiente2=nuevo_nodo2;
    }
    nuevo_nodo2->siguiente2= aux12;


}
void mostrarLista(Nodo * lista)
{

    Nodo *actual= new Nodo();

    actual= lista;
    while (actual !=NULL)
    {cout<<actual->dato<<"  ";

        actual=actual ->siguiente;
    }
}
void mostrarLista2(Nodo * lista2)
{

    Nodo *actual2= new Nodo();
    actual2= lista2;
while (actual2 !=NULL)
    {
        cout<<actual2->dato2<<"  ";


insertarLista(lista,actual2->dato2);
        actual2=actual2 ->siguiente2;

}}

void sacarpila(Nodo *& pilass, string no){
Nodo *auxx=pilass;
no=auxx->dato2;
pilass= auxx->siguiente2;
delete auxx;


}
