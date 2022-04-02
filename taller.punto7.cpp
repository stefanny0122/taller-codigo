#include <iostream>

using namespace std;

int main()
{
	int trngl_rctngl,angls,angl_rct;
	angl_rct=90;
	
	cout<<"ingrese el valor del angulo:\n"; cin>>angls;
	if(angls<=45){
		trngl_rctngl=180-(angls+angl_rct);
	}
	else{
		trngl_rctngl=180-(angls+angl_rct);
	}
	
	cout<<"el angulo faltante es:"<<trngl_rctngl;
	
	return 0;
}
