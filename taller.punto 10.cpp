#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double  ptnc_impr/*potencia de impares elevados en par*/,ptnc/*potencia*/;
	int nmr_lr /*número a leer */,sm_ngtvs /*suma de negativos*/,sm_pr /*suma de pares*/,i,prdcto_impr /*producto de impares*/,cntdd_vcs /*cantidad de veces*/,nmr_escp /*número de escape*/,opr/*operaciones*/;                                      
	nmr_lr=(-1000),sm_pr=0,prdcto_impr=1,i=0,ptnc=2;
	cout<<"1.cantidad de veces que quiera que se repita\n";
	cout<<"2.con número de escape\n";
	cout<<"";cin>>opr;
	switch(opr){
		case 1:
			cout<<"ingrese la cantidad de veces que desea que se repita:\n"; cin>>cntdd_vcs;
			do{
				if(nmr_lr%2==0){
					sm_pr=sm_pr+nmr_lr;
					cout<<"el resultado de la suma de los números pares es:\n"<<sm_pr<<"\n";
			}
				else{
					prdcto_impr =prdcto_impr *nmr_lr;
					cout<<"el resultado del producto de los números impares es:\n"<<prdcto_impr <<"\n";
					ptnc_impr=pow(nmr_lr,ptnc);
				      ptnc=ptnc+2;
					  	cout<<"el resultado de la potencia par de los impares:\n"<<ptnc_impr<<"\n";
				} 
				if(nmr_lr<0){
					sm_ngtvs=nmr_lr+sm_ngtvs;
			
				}
				i=i+1;
				nmr_lr=nmr_lr+1;
				cout<<"el resultado de la suma de negativos:\n"<<sm_ngtvs<<"\n";	
			}while(i<cntdd_vcs);
			break;
		case 2:
			prdcto_impr=1;
			cout<<"ingrese el numero de escape que desee:"; cin>>nmr_escp;
	do{
				if(nmr_lr%2==0){
					sm_pr=sm_pr+(nmr_lr*-1);
					cout<<"el resultado de la suma de los números pares es:\n"<<sm_pr<<"\n";
			}
				else{
					prdcto_impr=prdcto_impr*nmr_lr;
					cout<<"el resultado del producto de los números impares es:\n"<<prdcto_impr<<"\n";
					ptnc_impr=pow(nmr_lr,ptnc);
				      ptnc=ptnc+2;
					  	cout<<"el resultado de la potencia par de los impares:\n"<<ptnc_impr<<"\n";
				} 
				if(nmr_lr<0){
					sm_ngtvs=nmr_lr+sm_ngtvs;
				
				}
				i=i+1;
				nmr_lr=nmr_lr+1;
				cout<<"el resultado de la suma de negativos:\n"<<sm_ngtvs<<"\n";
			}while(nmr_lr!=nmr_escp);
			break;
	}
	return 0;
}

