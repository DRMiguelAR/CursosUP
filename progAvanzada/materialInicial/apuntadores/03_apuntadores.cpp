#include <iostream>
using namespace std;
int main(){
	int x=16;
	int* p;
	

	cout<< "El valor de x es: " <<x <<endl;
        cout<< "La dirección de memoria de x es: "<<&x <<endl;

	p= &x;
	cout<<"El contenido de p es: " << p <<endl;
	cout<<"p está apuntando al valor " << *p <<endl;
}
