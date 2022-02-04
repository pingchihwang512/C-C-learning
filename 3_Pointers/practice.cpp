// Pointers : an address variable that means for storing address of data, using for access heap memory, access resource outside the program and parameter passing
//  To understand declartion, initialization, dereference (Dispaly the value of what pointer points)
//      malloc : (take size) to access memory in heap, allocate the request memory and return a pointer to it
//      printf() - C library function. sends formatted output to stdout
//      & (Ampersand)

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a = 10;
    int A[5] = {2,4,6}; 
    int *p;
    p = &a;
    // p = &A is invalid, p = A is valid

    cout << a << endl;;     // Display the value of a
    cout << *p << endl;     // Dereferencing - Display p pointer point to 's value.
    cout << &a << endl;     // Dispaly the address value of a variable
    cout << &p << endl;     // Display pointer p address
    cout << p << endl;      // Display p pointer point to 's address

    printf("using c syntax %d" ,a);      // Display the value of a in singed decimal interger
    cout << endl;
    printf("using c syntax %d" ,*p);     // Dereferencing - Dispaly the value of what p pointer points
    cout << endl;
    printf("using c syntax %x" ,&a);     // Dispaly the address value of a variable
    cout << endl;
    printf("using c syntax %x" ,&p);     // Display pointer p address
    cout << endl;
    printf("using c syntax %x" ,p);      // Dispaly the value of p. Because p is a pointer which store address. Now p points to the a, so it stores the same address vairble of a
    cout << endl;


    // Dynamic Allocation : Memory needs were determined before program execution by define the variable needed. Sometimes, we need memory during runtime on this case, programs need to dynamically allocate memory.
    // p = (int *)malloc(t*sizeof(int));    C       create array memory in heap memory
    // p = new int[5];                      C++     create array memory in heap memory
    // *Remember to deallocate the used memory if you no longer needed!!!

    return 0;
}