#include<iostream>
#include<conio.h>
using namespace std;
//function protoype
double salario_final(double salario_base, double impuestos_empleado);

 int main (){
	char nombre_empleado[15];
    char apellido_empleado[15];
	double salariobase_empleado;
	double impuestos_empleado;
	//ingreso de datos, getting data
	cout << "bienvenido a la calculadora de salario automatica: " << endl;
	// translation: "introduce the name of the employee please"
	cout << "Ingrese el nombre del empleado: ";
	cin.getline(nombre_empleado,15,'\n');
	//translation: "introduce the last name of the employee please"
	cout << "ingrese el apellido del empleado: ";
	cin.getline(apellido_empleado,15,'\n');
	// translation: "introduce the salary of the employee"
	cout << "Ingrese el salario del empleado: ";
	cin >> salariobase_empleado;
	//translation: "introduce the tax percentage"
	cout << "ingrese el porciento de los impuestos: ";
	cin >> impuestos_empleado;
	//translatrion: "The final salary is: " 
	cout << "el salario final del empleado es: " << salario_final(salariobase_empleado, impuestos_empleado);
	
	
	//system("pause");
	return 0;
}

//function to calculate employee salary
  double salario_final(double salario_base,double impuestos_empleado){
  	double salario_f;
	  salario_f=salario_base-impuestos_empleado;
	return salario_f;
}

