// gosho ralta 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
 
using namespace std;
 
int main()
{
	
	/* 
	double a;
	int n, result = 1;
	cout << "input a";
	cin >> a;
	cout << "\ninput n";
	cin >> n;
	 
	if (n >= 0) {
		for (int i = 0; i <= n; i++)
			result *= a;
	}
	cout << "the result is : " << result << endl;

*/




	 /*

	int n;
	cout << "input n : ";
	cin >> n;
	int sum, c1, c2, c3, temp;

	for (int i = 100; i <= 999; i++) {
 
		temp = i;
		c1 = temp % 10;
		c2 = (temp / 10) % 10;
		c3 = temp / 100;

		if ((c1 + c2 + c3) == n)
			cout << i << " ";
	}

	*/


	/* 
	int n, count = 0;
	char sym;
	cout << "input n : ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cout << "\nint sym : ";
		cin >> sym;
		if (sym >= 97 && sym <= 122)
			count++;
	}
	cout <<"\nbori :" <<  count <<endl;
 */

	int sum = 0; 
	int n;

	do {
		cout << "input n : ";
		cin >> n;


	} while (n = 0);
	



	system("pause");
    return 0;
}

