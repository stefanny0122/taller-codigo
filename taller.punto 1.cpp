/*El propietario de una pequeña empresa quiere conocer el valor a pagar por la 
nómina de sus 10 empleados, sabiendo que cada uno tiene un sueldo base de 
$855.000. Se sabe que por cada 10 horas extras que trabaje el empleado al mes 
obtendrá un 10% más de bonificación al mes, si el empleado trabaja 20 hora extras 
al mes obtendrá una bonificación del 15% y si trabaja 32 horas extras recibirá un 
20% de bonificación; se debe tener en cuenta que las prestaciones sociales de los 
empleados equivalen a un 26% de su salario base.*/

#include <iostream>
using namespace std;
int main()
{
	int n /*número de empleados*/,f, sb /*sueldo base*/,pr /*prestaciones sociales*/,s /*sueldo*/;
	int ts /*total de sueldo*/, i, vln /*valor nominal*/,hrs/*horas de trabajo*/;
	sb=855000,pr=(sb*26)/100,i=0,vln=0;
	  cout<<"ingrese el numero de empleados:\n"; 
	  cin>>n; 
	do{
			s=vln;
			f=s;
		cout<<"1.cuando son 10 horas:\n";
		cout<<"2.cuando son 20 horas:\n";	
		cout<<"3.cuando son 32 horas:\n";	
		cout<<""; cin>> hrs;
		switch(hrs){
			case 1:
				ts=((sb-pr)*10)/100;
				s=(sb-pr)+ts;
				cout<<"el total del sueldo es:"<<s<<"\n";
				break;
			case 2:
				ts=((sb-pr)*15)/100;
				s=(sb-pr)+ts;
				cout<<"el total del sueldo es:"<<s<<"\n";
				break;
			case 3:
				
				ts=((sb-pr)*20)/100;
				s=(sb-pr)+ts;
				cout<<"el total del sueldo es:"<<s<<"\n";
				
				break;
				
			default:
				
		    	cout<<"opcion incorrecta"<<"\n";
				break;	
							
		}
		 vln=s+f;
		i=i+1;
	}while(i<n);
	cout<<"valor nominal total es:"<<vln<<"\n";
	return 0;
}
