#include <iostream>
using namespace std;

int main(){

    int i,j,k,n=1;

    for (i = 0; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
        {
            cout<<" ";
        }

        for (k = 1; k<=i; k++)
        {
            cout<<" "<<n++;
        }
        
        cout<<"\n";
    }

    return 0;
    
}