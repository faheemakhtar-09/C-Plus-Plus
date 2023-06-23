#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
int num,table;
cout<<"Enter your number Number for table \n ";
cin>>num;
for (int i = 1; i < 11; i++)
{
   table=num*i;
   cout<<num<<" * "<<i<<" = "<<table;
   cout<<endl;
}

}