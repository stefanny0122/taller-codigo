#include <iostream>
using namespace std;
int main()
{
	int i, n1 /*primer número*/,n2 /*segundo número*/,n3 /*tercer número*/,dn1 /*el doble del número 1*/,tn2 /*el triple del segundo*/,s/*suma*/;
	int r/*resta*/,t/*total*/,n, mn3 /*la mita del tercer número*/;
	i=0;
	cout<<"ingrese el numero de veces a repetir:\n"; cin>>n;
	do{
		cout<<"ingrese tres numeros diferentes:\n"; cin>>n1>>n2>>n3;
		dn1=2*n1;
		tn2=3*n2;
		mn3=n3/2;
		s=dn1+tn2;
		r=s-mn3;
		cout<<"el resultado del doble del primer numero es:"<<dn1<<"\n";
		cout<<"el resultado del triple del segundo numero es:"<<tn2<<"\n";
		cout<<"el resultado de la mitad del tercer numero es:"<<mn3<<"\n";
		cout<<"el resultado total de la suma y resta es:"<<r<<"\n";
		
		i=i+1;
	}while(i<n);
	
	return 0;
}
