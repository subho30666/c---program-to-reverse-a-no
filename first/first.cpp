// first.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "stdafx.h"

// firstapp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int n, a, b, c, d = 0;

void main()
{
	std::cout << "enter a no";
	std::cin >> n;
	if (n >= 0)
	{

		do {



			a = n % 10;
			d = d * 10 + a;
			n = n - a;
			n = n / 10;


		} while (n != 0);
		cout << "the reverse no is" << d;




	}
}





