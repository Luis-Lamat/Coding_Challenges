#include <iostream>
using namespace std;

int main()
{
	int cases, candidates, regions, num, aux = 0, winner, x;

	cin >> cases;

	for (int a = 0; a < cases; ++a){

		cin >> candidates >> regions;

		int votes[candidates];
		aux = 0;

		x = 1;
		for (int i = 0; i < regions; ++i){
			for (int k = 0; k < candidates; ++k){

				if (x)
					votes[k] = 0;

				cin >> num;
				votes[k] += num;

				if (votes[k] > aux){
					aux = votes[k];
					winner = k;
					//cout << "Numero = " << aux << " , Index = "<< winner << endl; //-----------------------------proof
				}
			}
			x = 0;
		}
		cout << winner+1 << endl;
	}
	return 0;
}