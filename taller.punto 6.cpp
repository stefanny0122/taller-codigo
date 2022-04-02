#include <iostream>
using namespace std;
int main()
{
	int prq /*prendas que quiere*/,i,cdp /*cantidad de prendas*/,t/*total*/,c /*corbata*/,z /*zapatos*/,ci /*cinturon*/,ca /*camisa*/,vlrt/*valor del traje*/;
	vlrt=400000, t=0,i=0;
	cout<<"cuantas prendas desea:\n"; cin>>cdp;
	do{
	cout<<"1.corbata:\n";
	cout<<"2.cinturon:\n";	
	cout<<"3.zapatos:\n";
	cout<<"4.camisa:\n";	
	cout<<""; cin>> prq;
	switch(prq){
		
		case 1: 
		c=vlrt/6;
		cout<<"este es el valor total de la corbata:"<<c<<"\n";
		t=c+t;
		break;
		case 2:
		ci=vlrt/5;
		cout<<"este es el valor total del cinturon:"<<ci<<"\n";
		t=ci+t;
		break;
		case 3:
		z=vlrt/2;
		cout<<"este es el valor total de los zapatos:"<<z<<"\n";
		t=z+t;
		break;
		case 4:
		ca=((vlrt/2)*2)/3;
		cout<<"este es el valor total de la camisa:"<<ca<<"\n";
		t=ca+t;
		break;
		default:
			cout<<"error";
			break;		
	}
	
	i=i+1;
}while(i<cdp);
	cout<<"el total de las prendas compradas es:\n"<<t;
	return 0;
}
