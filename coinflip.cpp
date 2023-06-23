// #include <iostream>
// #include <stdlib.h>
// #include <ctime>

// int main() {
  
//   // Create a number that's 0 or 1
  
//   srand (time(NULL));
//   int	coin = rand();
//     std::cout << coin<<"\n";
  
//   // If number is 0: Heads
//   // If it is not 0: Tails
  
//   if (coin == 0) {
  
//     std::cout << "Heads\n";
  
//   }
// 	else {
	
//     std::cout << "Tails\n";
  
//   }
  
// }

// C++ program to demonstrate
// the use of rand()
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	// This program will create some sequence of
	// random numbers on every program run
	for (int i = 0; i < 8; i++)
		cout << rand() << " ";
        cout<<endl;

	return 0;
}
