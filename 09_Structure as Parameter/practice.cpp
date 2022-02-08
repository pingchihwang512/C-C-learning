// Structure as parameter
// Notice that if the structe has array, structure can still pass by value

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

// Example function that structure pass by value. Even if the function change the length of structure, the actual structe value remain same
void show(struct Rectangle r){
    r.length = 20;
    cout << "Length " << r.length << endl << "Breath " << r.breadth << endl;
}

// Example function that structe pass by address. Notice that the syntax and the sturcture element change
void show(struct Rectangle *p){
    p->breadth = 200;
    cout << "Length " << p->length << endl << "Breath " << p->breadth << endl;
}

// Example function return an address of structure, create a structure type without typing in the main function take by heap
struct Rectangle *fun(){
    struct Rectangle *p;
    p = new Rectangle;
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle))
    p->length = 123;
    p->breadth = 456;

    return p;
}

int main(){
    struct Rectangle r = {10,5};
    show(r);
    printf("Length %d \nBreath %d\n", r.length,r.breadth);
    cout << endl;
    show(&r);
    printf("Length %d \nBreath %d\n", r.length,r.breadth);
    cout << endl;

    struct Rectangle *ptr = fun();
    cout << "Length " << ptr->length << endl << "Breath " << ptr->breadth << endl;
    return 0;
}