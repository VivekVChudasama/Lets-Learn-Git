#include <iostream>
using namespace std;

int main() {

  int n1, n2, sum; 
  cout << "Enter two integers: ";
  cin >> n1 >> n2;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = n1 + n2;

  // prints sum 
  cout << n1 << " + " <<  n2 << " = " << sum;     

  return 0;
}