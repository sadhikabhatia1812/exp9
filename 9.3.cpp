#include <iostream>
using namespace std;

int main() {
    int a=10;
    int*aptr;
    aptr=&a;
    
    cout<<*aptr<<endl;
    *aptr=28;
    cout<<&a<<endl;
    
    int arr[]={10,20,30};
    cout<<*arr<<endl;

    return 0;
}
