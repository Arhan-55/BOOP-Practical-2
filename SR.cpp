#include <iostream>
using namespace std;

int a = 10;
int main(){

    int a = 20;
    cout<<"Local value: "<<a;
    cout<<"\nGlobal value: "<<::a<<endl;

    return 1;
}
