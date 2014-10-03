/*
 * UVa problem: 11727 - Cost Cutting
 */
#include <iostream>
using namespace std;

// Method to check the middle number
int check_middle(int a, int b, int c){

  //checks if a is biggest
  if (a >= b && a >= c)
    return (b >= c) ? b : c; // return the middle one

  // checks if b is biggest
  if (b >= a && b >= c)
    return (a >= c) ? a : c; // return the middle one

  // checks if c is biggest
  if (c >= a && c >= b)
    return (a >= b) ? a : b; // return the middle one
  return 0;
}

int main (){
  // variable declaration
  int cases, a, b, c, count = 1;
  cin >> cases;
  while (cases--){

    // user input
    cin >> a >> b >> c;

    // outputs the result in the correct format
    cout << "Case " << count << ": " <<  check_middle(a,b,c) << endl;
    count++;
  } 
  return 0;
 }
