#include <iostream>
using namespace std;

int main(){
    int *ptr1;
    int *ptr2;
    int *ptr3;

    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    cout<<"enter the first  number:-";
    cin>>*ptr1;
    cout<<"enter the second number:-";
    cin>>*ptr2;
    cout<<"enter the third number:-";
    cin>>*ptr3;

    int avg;
    avg = (*ptr1+*ptr2+*ptr3)/3;
    cout<<"the  average of this number is:-"<<avg<<endl;

    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<sizeof(ptr3)<<endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    cout<<"this is for part two"<<endl;
    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<sizeof(ptr3)<<endl;
    return 0;
}