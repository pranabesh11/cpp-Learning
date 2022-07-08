#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int *b = &a;
    //& is address of int
    cout<<"the address of a is"<<b;
    cout<<"the address of a is "<<&a;
    //* dereferance operator
    cout<<"the value at b is"<<*b;


    // 
    return 0;
}