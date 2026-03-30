#include <iostream>
using namespace std;

void sumauno(int x[][3]){
    for (int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            x[i][j] ++;
}
int main(){
    int arr[3][3]= {{10,20,30},{40,50,60},{70,80,90}};
    sumauno(arr);
    for (int i=0; i<9; i++)
    cout <<*(*arr+i) <<endl;
}