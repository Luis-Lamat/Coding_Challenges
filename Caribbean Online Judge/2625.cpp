#include <iostream>
using namespace std;

void next(int column){
	switch (column%3){
		case 0:
			cout << 'O';
			break;
		case 1:
			cout << 'I';
			break;
		case 2:
			cout << 'E';
			break;
	}

}

int main()
{
	int rows, columns;
	cin >> rows >> columns;

	for (int i = 0; i < rows; ++i){
		for (int k = 0; k < columns; ++k){
			next(k+(i%3));
		}
		cout<<endl;
	}
	return 0;
}