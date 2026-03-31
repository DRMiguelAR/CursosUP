#include <iostream>
#include <bitset>

using namespace std;
int main(){
    using bin8 = bitset<8>;
    using bin32 = bitset<32>;
    int x = 30;
    cout<< x <<endl;   
    cout<< (bin8)x <<endl; 

    int y= 0b110011;
    cout<< y <<endl;

    cout << "Negativos" <<endl;
    int z = -1;
    cout<< z <<endl;   
    cout<< (bin8)z <<endl;
    cout<< (bin32)z <<endl;
    z=-40;
    cout << z <<endl;
    cout<< (bin8)z <<endl;
    cout<< (bin32)z <<endl;

    char c= 'a';
    cout << c <<endl;
    cout<< (bin8)c <<endl;

    char b= 0b01001101;
    cout << b <<endl;
    cout<< (bin8)b <<endl;

    char c= 0x44;
    cout << c <<endl;
    cout<< (bin8)c <<endl;
}