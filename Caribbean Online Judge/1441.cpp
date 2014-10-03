//
//  1441.cpp -> http://coj.uci.cu/24h/problem.xhtml?abb=1441
//
//  Created by Luis Alberto Lamadrid on 6/13/14.
//  Copyright (c) 2014 Luis Alberto Lamadrid. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

double hypothenuse(double a, double b){
	return sqrt(pow(a,2)+pow(b,2));
}

bool is_Right_Triangle(double a, double b, double c){
	return (hypothenuse(a,b) == c);
}

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	while(a && b && c){
		if (is_Right_Triangle(a,b,c))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
		cin >> a >> b >> c;
		cin.ignore();
	}
	return 0;
}