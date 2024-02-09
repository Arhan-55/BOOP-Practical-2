#include <iostream>
using namespace std;

int main(){

    int n,c=0;

    cout<<"Enter a num: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            c++;
        }
    }

    if (c==2)
    {
        cout<<"The number is prime";
    }else{
        cout<<"The number is not prime";
    }

    return 1;
}