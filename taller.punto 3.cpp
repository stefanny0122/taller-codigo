#include <iostream>
using namespace std;
int main()
{
int	ne /*n�mero entero*/,rs /*resultados sumados*/,rm /*resultados multiplicados*/;
int np1 /*n�mero par 1*/,np2 /*n�ero par 2*/,np3 /*n�mero par 3*/;	
	cout<<"escribe un n�mero entero:"<<"\n"; cin>>ne;
	if(ne%2==0){
		np1=ne+2;
		np2= np1+2;
		np3=np2+2;
		rs=np1+np2+np3;
		rm=rs*ne;
	}
	else{
	np1=ne+1;
		np2= np1+2;
		np3=np2+2;
		rs=np1+np2+np3;
		rm=rs*ne;	
	}
	cout<<"los siguientes numeros pares son:"<< np1<<"\n"<<np2<<"\n"<<np3<<"\n";
	cout<<"el resultado de la suma es:"<<rs<<"\n";
	cout<<"el resultado de la multiplicaci�n es:"<<rm<<"\n";
	return 0;
}
