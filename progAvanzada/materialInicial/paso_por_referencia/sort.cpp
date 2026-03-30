#include <iostream>
using namespace std;

bool comparar(int a, int b){ return a<b ? false : true; }
void swap(int &a, int &b){
    int temp;
    temp= a;
    a=b;
    b=temp;
}
void bubblesort(int *a, int tam){
    //regresa el arreglo acomodado de menor a mayor
}
int main(){
    int tam=8;
    int arr[tam]= {33,42,88,3,50,27,77,69};
    int i=1;
    int j=2;
    if (comparar(arr[i],arr[j]))
        swap(arr[i], arr[j]);
    for (int i=0; i<tam; i++)
       cout<< arr[i] <<" ";
    cout<<endl;
}