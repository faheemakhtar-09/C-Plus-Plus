#include<iostream>
#include<math.h>   //for pow() function
using namespace std;

int main()
{

    int x,n,result;

    cout<<"Enter value of X :: ";
    cin>>x;
    cout<<"\nEnter value of N :: ";
    cin>>n;

    result=pow(x,n);

    cout<<"\nThe Power of Number [ "<<x<<" ^ "<<n<<" ] = "<<result<<"\n";

    /*  C++ Program to find Square  Root of a number using sqrt() function */
     float sq;

    cout<<"Enter any positive number :: ";
    cin>>n;

    sq=sqrt(n);

    cout<<"\nSquare  root of Entered Number [ "<<n<<" ] is :: "<<sq<<"\n";



    return 0;
}
