// Reference : only in C++, nickname given to a variable/Alias
//  -Must be initizalized when decalred
//  -Useful in paramter passing

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;
    cout << a << endl << r << endl;

    return 0;
}