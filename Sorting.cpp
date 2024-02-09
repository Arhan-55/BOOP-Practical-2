#include <iostream>
using namespace std;

int b = 10;


int main(){

    int b = 20;

    cout<<"The Local value: "<< b;
    cout<<"\nGlobal value: "<< ::b << endl;

    return 1;

}