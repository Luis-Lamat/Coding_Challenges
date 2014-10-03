#include <iostream>
#include <string>
using namespace std; 

int main () {
  int queries, centerX, centerY, X, Y;
  cin >> queries >> centerX >> centerY;
  
  while (queries--){
    cin >> X >> Y;
    
    std::string position = "";

    if (X == centerX || Y == centerY)
      position = "divisa";
    else {
      position += (Y < centerY) ? "S" : "N";
      position += (X < centerX) ? "O" : "E";
    }
    cout << position << endl;
  }
  return 0;
}
