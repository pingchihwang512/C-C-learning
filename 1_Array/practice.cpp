// Array : a collection of similar data elements
// Foreach : access elements of an array without performing initialization, testing and increment/decrement, c dont have for each but c++ and java has.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30};
    for(int x:arr)
        cout<<x<<endl;
}