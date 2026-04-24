#include <iostream>
using namespace std;

void sumauno(int x[]){
    for (int i=0; i<3; i++)
        x[i] ++;
}
int main(){
    int arr[3]= {10,20,30};
    sumauno(arr);
    for (int i=0; i<3; i++)
        cout<< arr[i] << endl; 
}