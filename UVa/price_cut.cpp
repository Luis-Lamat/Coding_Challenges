#include <iostream>
using namespace std;

int check_middle(int a, int b, int c){
  if (a >= b && a >= c)
    return (b >= c) ? b : c;
  if (b >= a && b >= c)
    return (a >= c) ? a : c;
  if (c >= a && c >= b)
    return (a >= b) ? a : b;
  return 0;
}

int main (){
  int cases, a, b, c, count = 1;
  cin >> cases;
  while (cases--){
    cin >> a >> b >> c;
    cout << "Case " << count << ": " <<  check_middle(a,b,c) << endl;
    count++;
  } 
  return 0;
 }
