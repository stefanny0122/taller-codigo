#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int ne /*número entero*/,p /*potencia*/,f /*factorial*/,fct/*factorial total*/;
	cout<<"digite un numero entero:"<<"\n"; cin>>ne;
	if(ne%2==0){
		cout<<"el numero es par"<<"\n";
		p= pow(ne,7);
		cout<<"la potencia del numero es:"<<p<<"\n";
	}
	else{
		cout<<"el numero es impar"<<"\n";
		fct=1;
		for (f=1;f<=ne;f++)
		fct=f*fct;
		cout<<"el factorial del numero es:"<<fct<<"\n";
	}
	return 0;
}
