#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, rem, sum = 0;

    cout<<"Enter your number";
    cin>>num;
    for (int i = num; i > 0; i++)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    // cout<<num;
    cout <<"sum of digit is "<< sum;

    return 0;
}
