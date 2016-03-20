#include <iostream>  	//se especifica la biblioteca a utilizar en el programa
  
using namespace std;   //el using namespace especifica los miembros del namespace van a utilizarse frecuentemente en el programa
  
int main() {  			//la primera funci�n que se ejecuta del programa
 int dia,mes,anno, i;    //se declaran las variables a utilixar
 bool bisiesto = false;   //el bool solamente puede contener valores verdaderos o falsos, en el programa se usa para validar el a�o bisiesto
  
 cout << "Introduce el dia: ";   //se hacen las impresiones de pantalla solicitando al usuario la informaci�n requerida
 cin >> dia;  					//se guarda la informaci�n en la variable respectiva
 cout << "Introduce el mes: ";   //se solicita nuevamente la informaci�n requerida
 cin >> mes;  					//se guarda en la siguiente variable
 cout << "Introduce el a�o: ";  //se solicita el �ltimo dato al usuario
 cin >> anno; 					//se guarda el �ltimo dato 
  
 // se comprueba si el a�o es bisiesto con esta condici�n
 if(anno%4==0 && anno%100!=100 || anno%400==0)  
        bisiesto = true;  
  
    //comprobamos que los datos ingresados esten en un rango valido  
    if(dia>0 && dia<32 && mes>0 && mes<13 && anno>0){  
        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)  //uso de if para validar los meses
        {  
           cout <<"Fecha valida"<<endl;						//impresion de pantalla en caso de que la fecha introducida sea v�lida
        }  
        else  
        {  
            if(mes==2 && dia<30 && bisiesto)  			//se hace la validaci�n del a�o bisiesto
                cout << "Fecha valida"<<endl;			//de cumplirse la condici�n se imprime en pantalla �ste mensaje
            else if(mes==2 && dia<29 && !bisiesto)  	//se hace la condici�n para validar el mes de febrero
                cout << "Fecha valida"<<endl;			//se evalue e imprime la validaci�n de la condici�n anterior
            else if(mes!=2 && dia<31)  					//la condici�n que implica los dem�s meses 
                cout << "Fecha valida"<<endl;  			//en caso de cumplirse la condici�n anterior se imprime en pantalla esto
            else  
                cout << "Fecha no valida"<<endl;
        }  
    }  
    else  										//se  hace una �ltima validaci�n 
        cout << "Fecha no valida"<<endl;  		//se le indica al usuario que los datos ingresados no son correctos
		return 0;  								//finaliza la ejecuci�n de la funci�n 
}  												//llave que finaliza el programa
