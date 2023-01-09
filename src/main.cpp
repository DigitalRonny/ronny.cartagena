#include <iostream>
#include<windows.h>
#include "../lib/rcCombinatorias.h"
#include "../lib/rcLoadingBar.h"
using namespace std;

/*
* @autor    : Ronny Cartagena
* @date     : 09/01/2023
* @details  : Examen Bimestral
*/

//Variables Globales
int const rcCedula=1726340514;//clave
string rcNombreCompleto = "Ronny Cartagena";
string rcCorreoElectronico = "RONNY.CARTAGENA@EPN.EDU.EC";//usuario
int rcEnumerador;

bool rcLoginRonny(){
	string rcUsuario;
	string rcUsuario2 = "profe";
	int rcClave, rcContador=1;;

	while (rcContador <=3 )
	{
		
		cout<<"\tINTENTO: "<<rcContador<<endl;
		fflush(stdin);
		cout<<"Usuario: "; getline(cin,rcUsuario);
		cout<<"Clave: "; cin>>rcClave;

		if ((rcUsuario == rcCorreoElectronico) && (rcClave == rcCedula))
		{
			cout<<":: Bienvenido Ronny";
			system("Pause");
			return true;	
		}
		if ((rcUsuario == rcUsuario2) && (rcClave == 1234))
		{
			cout<<":: Bienvenido "<<"PROFE"<<endl;
			system("Pause");
			return true;
			break;
		}
		else{
			cout<<"Intentalo de nuevo\n\n";
			return false;
			break;
		}
		//cout<<"Lo sentimos tu usuario y clave son incorrectos..!"<<endl;
		rcContador++;
		
	}
	return false;
		
}


int rcShowMenu()
{
    cout<<"\n\t\t <profe>"<<endl;
    cout<<"\t\t OPCIONES:"<<endl;
    cout<<"\t\t 1.Mostrar Usuario \n\t\t 2.Barra de carga\n\t\t 3.Combinatoria\n\t\t 0.Salir"<<endl;
    cout<<"\t\t Ingrese una opcion: "; cin>>rcEnumerador;
	
    return rcEnumerador;
}


void rcMostrarUsurio()
{
	for (int i = 0; i < rcCorreoElectronico.length(); i++)//convertir a minusculas la cadena de texto
	{
    rcCorreoElectronico[i] = tolower(rcCorreoElectronico[i]);
  	}

	for (int i = 0; i < rcNombreCompleto.length(); i++)//convertir a mayusculas la cadena de texto
	{
    rcNombreCompleto[i] = toupper(rcNombreCompleto[i]);
  	}
	cout<<"\nCEDULA: "<<rcCedula<<endl;
	cout<<"CORREO: "<<rcCorreoElectronico<<endl;
	cout<<"NOMBRE: "<<rcNombreCompleto<<endl;
}


void rcShowLoadingCorreo_e()
{
	int rcBarrita;
	rcBarrita = rcBarra();
	cout<<rcBarrita;
}

void rcCombinatoriaNombre_Impar()
{

}



void rcEleccion(int opcion)
{
    switch (rcEnumerador)//switch va a evaluar enumerador
    {
	case 0:
    	cout<<"Saliendo del programa...."<<endl;
        break;
    case 1:
        rcMostrarUsurio();
        break;
    case 2:
		rcShowLoadingCorreo_e();
        break;
    case 3: 
		rcCombinatoriaNombre_Impar();
        break;
    default:
        cout<<"La opcion elegida no es correcta"<<endl;
        break;
    }
    
}



int main()
{
	bool rcRetorno =0;
	system("cls");
	rcLoginRonny();
	rcRetorno = rcLoginRonny();
	
	if (rcRetorno == true)
	{
		rcShowMenu();
		rcEleccion(rcEnumerador);
	}
	
}