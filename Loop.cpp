#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // for loop
    for (int i = 0; i < 10; i++)
    {
        cout << "Hello World\n";
    }
    // sum n  number
    int n;
    int sum = 0;
    // cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    // cout<<sum;

    // while loop
    int div;
    while (n > 0)
    {
        if(n>0){
            cout <<"Well don its positive number";
            cin>>n;
        }else{
           cout<<"oops its negative";
        }
    }

    return 0;
}