// Array as Parameter, array only pass by address, no matter in C or C++, 
//  and because it is pass by address, you can change the element in array while array pass by address in formal paramter


#include <iostream>

using namespace std;

// example of pass by address of array and change it's element in function
void fun(int *A, int n){
    A[0] = 15;
}

// example of function return array pointer, not just return array!!! function create array in heap and main function can access it, an example of dynamic memory
int * fun (int size){
    int *p;
    p = new int[size];

    for(int i =0;i<size;i++){
        p[i]=i+1;
    }
    return p;
}

// First of all, array element change in pass by address function
// Secondly, another function return an array and we replace original array with it using iterate method.
// Notice that second function return pointer or array. Do not write syntax like A = fun(n), wrong type
int main(){
    int A[]={2,4,6,8,10};
    int n = 5;
    fun(A,n);

    for(int x:A){
        cout<<x<<" ";
    }

    cout <<endl;
    
    int *ptr;
    ptr = fun(n);

    for(int i= 0;i<n;i++){
        A[i]=ptr[i];
    }

    for(int x:A){
    cout<<x<<" ";
    }

    return 0;
}
