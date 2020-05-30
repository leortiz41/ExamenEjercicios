#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matiz, numeroFilas, numeroColumnas;


int main()
{
   pedirDatos();
   mostrarMatriz(puntero_matiz,numeroFilas,numeroColumnas);

   for (int i = 0; i < numeroFilas; i++)
   {
       delete[]puntero_matiz[i];

   }
   delete[] puntero_matiz;
   
	getch();
    return 0;
}


void perdirDatos()
{

    cout << "Digite el Numero de filas: ";	
    cin >> numeroFilas;
    cout << "digite el numero de Columnas: ";
    cin >> numeroColumnas;

    puntero_matiz = new int *[numeroFilas];
    for (int i = 0; i < numeroFilas; i++)
    {
        puntero_matiz[i] = new int[numeroColumnas];
    }
    cout << "Digite elementos de la matriz: ";
    for (int i = 0; i < numeroFilas; i++)
    {
        for (int k = 0; k < numeroColumnas; k++)
        {
            cout << "Digite un numero [" << i << "][" << k << "]: " ;
            cin>>*(*(puntero_matiz +i)+k);
        }
       
}
 cout<< "\n";
}
void  mostrarMatriz(int **puntero_matiz, int numeroFilas,int numeroColumnas){
    cout<<"\n\nImprimiendo Matriz\n";
    for (int i = 0; i < numeroFilas; i++)
    {
      for (int k = 0; k < numeroColumnas; k++)
      {
          cout<<*(*(puntero_matiz+i)+k)<<" ";
      }
     
      
    }
     cout<< "\n";
}
