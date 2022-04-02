#include <iostream>

using namespace std;

int main()
{
	float ntms,prmd,otro,mtr;
	ntms=0,otro=0;
		cout<<"ingrese la cantidad de materias:\n"; cin>>mtr;
	do{
		cout<<"ingrese la calificación de la materia:\n";cin>>ntms;
		ntms=ntms+ntms;	otro=otro+1;
	}while(otro<mtr);
	prmd=ntms/mtr;
	if(prmd<3){
		cout<<"a reprovado";
	}
	else{
		cout<<"ah aprovado";
	}
	return 0;
}
