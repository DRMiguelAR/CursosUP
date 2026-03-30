#include <iostream>
using namespace std;
int main(){
	int x=16;
	int* p;
	

	cout<< "El valor de x es: " <<x <<endl;
        cout<< "La dirección de memoria de x es: "<<&x <<endl;

	p= &x;
	*p= 18;
	cout<<"El contenido de p es: " << p <<endl;
	cout<<"p está apuntando al valor " << *p <<endl;
	cout<<"El nuevo valor de x es: " <<x <<endl;
}
