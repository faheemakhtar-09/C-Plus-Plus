#include <iostream>
using namespace std;

int main() {
    // int , reversedNumber = 0, rem;
    int i,number,r,s=0;

    std::cout << "Enter a number: ";
    std::cin >> number;
    for (int i = number; i >0;)
    {
        r=i%10;
 
        s=s*10+r;
   
        i=i/10;
      cout<<i;
    }
    std::cout<<"\n  The Reverse Number of "<<number<<" is "<<s;
}