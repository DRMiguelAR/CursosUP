#include <iostream>
#include <bitset>

using namespace std;
int main(){
    
    int x = 30;
    cout<< x <<endl;   
    cout<< (bitset<8>)x <<endl; 

    int y= 0b110011;
    cout<< y <<endl;
}