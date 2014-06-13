#include <iostream>
using namespace std;

bool eleven(string s){
	int num = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (i % 2 == 0) num += (s[i] - '0');
		else num -= (s[i] - '0');
	}
	if (num % 11 == 0)
		return true;
	return false;
}


int main()
{
	string input;
	cin >> input;

	while (input != "0"){
		if (eleven(input)){
			cout << input << " is a multiple of 11." << endl;}
		else{
			cout << input << " is not a multiple of 11." << endl;}
		cin >> input;
	}
	return 0;
}