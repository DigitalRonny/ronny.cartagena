#include<iostream>
#include<windows.h>//system
/*
* @autor    : Ronny Cartagena
* @date     : 30/12/2022
* @details  : Barra de carga
*/
using namespace std;
int rcBarra()
{
    system("COLOR 0B");//Color de las letras y la barra
    //system("cls");//limpiar la consola 

    char bar1, bar2;
    int tamano,porcentaje,reglaTres=0;
    
    cout<<"Ingrese un caracter para la previsualizacion de la barra: "; cin>>bar1;
    cout<<"Ingrese un caracter para llenar la barra: "; cin>>bar2;
    cout<<"Ingrese el tamano de la barra: "; cin>>tamano;
    cout<<"Ingrese el porcentaje deseado: "; cin>>porcentaje;

    cout<<"\n\tCargando...";
    cout<<"\n\n\t";//para acomodar-alinear la barra con la palabra cargando
    
    for (int i = 0; i < tamano; i++)
    {
        cout<<bar1;
    }
   
    cout<<"\r";//para reescribir en la posicion anterior
    cout<<"\t";//para que empiece a reescribir justo en la posicion de la barra 1

    reglaTres = (tamano*porcentaje)/100;

    for (int i = 0; i < reglaTres; i++)
    {
        cout<<bar2;
        Sleep(130);
    }
    cout<<"\n\n\tCARGA COMPLETA - "<<system("Pause")<<endl;
    //system(Pause) hace que el programa espera que el usuario presione una tecla para ejecutar la siguiente línea de código 
    cout.flush();
    return 0;
}




