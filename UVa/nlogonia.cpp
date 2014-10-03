/*
 * UVa problem: 11498 - Division of Nlogonia
 */
#include <iostream>
#include <string>
using namespace std; 

int main () {

  // initial user inputs
  int queries, centerX, centerY, X, Y;
  cin >> queries >> centerX >> centerY;

  do {
    // query while loop
    while (queries--){

      // house coordinates input
      cin >> X >> Y;

      // resetting the string
      string position = "";

      // check house coordinates relative to the
      // center point of the division
      if (X == centerX || Y == centerY) // if house is in border
        position = "divisa";
      else {                            // else house is in other quadrant
        position += (Y < centerY) ? "S" : "N";
        position += (X < centerX) ? "O" : "E";
      }
      cout << position << endl;
    }  
    cin >> queries;
    if (!queries) return 0;

    cin  >> centerX >> centerY;
  } while (queries);
  return 0;
}
