// Parameter Passing
// -Pass by value, if the formal parameter changed, the actual parameter doesn't change, therefore use for take the value and return a value
// -Pass by address, actual parameter change if the formal parameter change, it access resource indirectly
// -Pass by reference, actual paramter change if the formal parameter change, the function of formal paramter has become part of  main function, it access resource directly

#include <iostream>

using namespace std;

//Example of call by value, take two value and return one result value
int add(int a, int b){
    int c;
    c=a+b;

    return c;
}

//Example of call by address, practice the syntax, remember pointer is a address variable that store the address value
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}

// Example of pass by reference, notice the syntax and the actual parameter change when formal parameter change
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int num1 =10, num2 = 15, sumCBV;

    sumCBV = add(num1,num2);
    cout << "Sum is " << sumCBV << endl;
    
    swap(&num1, &num2);
    cout << "num1 value is  " << num1 << ", num2 value is "<< num2 << endl;
    
    swap(num1,num2);
    cout << "num1 value is  " << num1 << ", num2 value is "<< num2 << endl;

    return 0;
}