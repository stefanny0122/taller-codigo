#include <iostream>
using namespace std;
int main()
{
int vlt_invrcn /*valor total de inverción*/,cms /*camisas*/,tcms /*total de camisas*/,pntl /*pantalones*/,tpntl /*total de pantalones*/,zpt /*zapatos*/,tzpt /*total de los zapatos*/,chqt /*chaqueta*/,tchqt /*total de chaqueta*/, lbr /*libro*/,tlbr/*total de libros*/,opr/*operacional*/;
	cout<<"1.calcular el valor total con el valor unitario de cada producto:\n";
	cout<<"2. calcular el valor total con el valor total invertido por articulo:\n";
	cout<<""; cin>>opr;
	
	switch(opr){
		case 1:
			cout<<"ingrese el valor unitario de las camisas:\n"; cin>>cms;
			tcms=cms*4;
			cout<<"ingrese el valor unitario de los pantalones:\n"; cin>>pntl;
			tpntl=pntl*3;
			cout<<"ingrese el valor unitario de los zapatos:\n"; cin>>zpt;
			tzpt=zpt*2;
			cout<<"ingrese el valor unitario de la chaqueta:\n"; cin>>chqt;
			tchqt=chqt;
			cout<<"ingrese el valor unitario de los libros:\n"; cin>>lbr;
			tlbr=lbr*4;
			vlt_invrcn=tcms+tpntl+tzpt+tchqt+tlbr;
			cout<<"el valor total invertido es "<<vlt_invrcn<<" conteniendo encuenta el valor de los libro.\n";
		    break;
		    
		case 2:	
		   cout<<"ingrese el valor total de las cuatro camisas:\n"; cin>>cms;
		   cout<<"ingrese el valor total de los tres pantalones:\n"; cin>>pntl;
		   cout<<"ingrese el valor total de los dos zapatos:\n"; cin>>zpt;
		   cout<<"ingrese el valor total de la chaqueta:\n"; cin>>chqt;
		   cout<<"ingrese el valor total de los cuatro libros:\n"; cin>>lbr;	
		   
		   	vlt_invrcn=cms+pntl+zpt+chqt+lbr;
		 	cout<<"el valor total invertido es "<<vlt_invrcn<<" conteniendo encuenta el valor de los libro.\n";
		    break;  	
	}
	
	
	return 0;
}
