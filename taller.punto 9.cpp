#include <iostream>

using namespace std;

int main()
{
	float ntms,prmd,otro,mtr,cntdd_almns,i,aprvd,rprvd;
	ntms=0,otro=0;
	cout<<"ingrese el número de alumnos a calcular:\n"; cin>>cntdd_almns;
	do{
		cout<<"ingrese la cantidad de materias:\n"; cin>>mtr;
	do{
		cout<<"ingrese la calificación de la materia:\n";cin>>ntms;
		ntms=ntms+ntms;
		otro=otro+1;
	}while(otro<=mtr);
	prmd=ntms/mtr;
	if(prmd>3.5){
		cout<<"a reprovado\n";
		rprvd=1+i;
	}
	else{
		cout<<"ah aprovado\n";
		aprvd=1+i;
	}
	i=i+1;
}while(i<cntdd_almns);
	cout<<"cantidad de estudiantes reprovados:\n"<<rprvd;
	cout<<"cantidad de estudiantes aprovados:\n"<<aprvd;
	return 0;
}
