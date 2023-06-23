#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n = 100;
    for (int x = 1; x <= n; x++)
    {
        if (x % 2 == 0)
        {
           cout<<x;
           cout<<endl;
        }
    }

    return 0;
}
