// Structure : collection of the similar data items under one name that is grouping the data item, ex. poker card

#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r1 = {10,5};
    {
        r1.length=15;
        r1.breadth=7;

        cout << r1.length << endl;
        cout << r1.breadth << endl;

        return 0;
    };
    

}