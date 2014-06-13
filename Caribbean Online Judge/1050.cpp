//
//  main.cpp
//  1050
//
//  Created by Luis Alberto Lamadrid on 6/13/14.
//  Copyright (c) 2014 Luis Alberto Lamadrid. All rights reserved.
//

#include <iostream>
using namespace std;

//Function to calculate the Greatest common divisor
int  GDC(int a, int b){
    
    //Check special first case...
    if (a == 1 || b == 1) return 1;
    
	 int rem = a%b, gdc = 0;
	 while (rem){
	 	 if (a < b) swap(a,b);
        
		 gdc = rem;
		 rem = a % b;
        
		 if (rem){
			 a = b;
			 b = rem;
		 }
	 }
	 return gdc;
}

//Simple swapping method
void swap(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}

//If the GDC of 2 numbers is 1, then they are coprime
bool is_Coprime(int a, int b){
    if (GDC(a,b) == 1) return  true;
	return false;
}

int main()
{
    int a, count = 0;
    cin >> a;
    
    for (int i = 1; i < a; i++) {
        if (is_Coprime(a, i)) {
            count++;
        }
    }
    
    cout << count << endl;
	return 0;
}