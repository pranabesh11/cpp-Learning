#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60};
    int* ptr = arr;

    cout<<"arr[2] "<<arr[2]<<endl;
    cout<<"*(arr+2) "<<*(arr+2)<<endl;
    cout<<"ptr[2] "<<ptr[2]<<endl;
    cout<<"*(ptr+2) "<<*(ptr+2)<<endl;
    cout<<ptr<<endl;
    cout<<arr<<endl;
    cout<<*ptr<<endl;
    cout<<*arr<<endl;
    return 0;
}