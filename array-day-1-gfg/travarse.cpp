#include <iostream>
using namespace std;

int main(){
    // 1ST METHOD:-
    int array[6] = {10,20,30,40,50,60};
    for (int i = 0; i < 6; i++)
    {
        cout<<array[i]<<"  is the "<<i<<" th element"<<endl;
    }
    //2ND METHOD:
    cout<<"this is another method"<<endl;

    for (int i = 0; i < 6; i++)
    {
        cout<<i[array]<<endl;
    }
    
    return 0;
}