#include <iostream>
using namespace std;

int main()
{
	string s;
	int a, b;

	cin >> s;

	if (s == "square"){
		cin >> a;
		cout << a * a << endl;
	} else {
		cin >> a >> b;
		cout << a * b << endl;
	}

	return 0;
}