// Function : a piece of code to perform a specific of job

#include <iostream>
using namespace std;

int add(int a, int b){
    int c;
    c=a+b;

    return c;
}

int main(){
    int num1 = 10;
    int num2 = 20;
    int sum = add(num1,num2);

    cout << sum;
    return 0;
}