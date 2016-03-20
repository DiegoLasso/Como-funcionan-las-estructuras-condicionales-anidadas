#include <iostream>  	//se especifica la biblioteca a utilizar en el programa
  
using namespace std;   //el using namespace especifica los miembros del namespace van a utilizarse frecuentemente en el programa
  
int main() {  			//la primera función que se ejecuta del programa
 int dia,mes,anno, i;    //se declaran las variables a utilixar
 bool bisiesto = false;   //el bool solamente puede contener valores verdaderos o falsos, en el programa se usa para validar el año bisiesto
  
 cout << "Introduce el dia: ";   //se hacen las impresiones de pantalla solicitando al usuario la información requerida
 cin >> dia;  					//se guarda la información en la variable respectiva
 cout << "Introduce el mes: ";   //se solicita nuevamente la información requerida
 cin >> mes;  					//se guarda en la siguiente variable
 cout << "Introduce el año: ";  //se solicita el último dato al usuario
 cin >> anno; 					//se guarda el último dato 
  
 // se comprueba si el año es bisiesto con esta condición
 if(anno%4==0 && anno%100!=100 || anno%400==0)  
        bisiesto = true;  
  
    //comprobamos que los datos ingresados esten en un rango valido  
    if(dia>0 && dia<32 && mes>0 && mes<13 && anno>0){  
        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)  //uso de if para validar los meses
        {  
           cout <<"Fecha valida"<<endl;						//impresion de pantalla en caso de que la fecha introducida sea válida
        }  
        else  
        {  
            if(mes==2 && dia<30 && bisiesto)  			//se hace la validación del año bisiesto
                cout << "Fecha valida"<<endl;			//de cumplirse la condición se imprime en pantalla éste mensaje
            else if(mes==2 && dia<29 && !bisiesto)  	//se hace la condición para validar el mes de febrero
                cout << "Fecha valida"<<endl;			//se evalue e imprime la validación de la condición anterior
            else if(mes!=2 && dia<31)  					//la condición que implica los demás meses 
                cout << "Fecha valida"<<endl;  			//en caso de cumplirse la condición anterior se imprime en pantalla esto
            else  
                cout << "Fecha no valida"<<endl;
        }  
    }  
    else  										//se  hace una última validación 
        cout << "Fecha no valida"<<endl;  		//se le indica al usuario que los datos ingresados no son correctos
		return 0;  								//finaliza la ejecución de la función 
}  												//llave que finaliza el programa
