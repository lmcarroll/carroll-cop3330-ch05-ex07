/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Liam Carroll
 */

#include "std_lib_facilities.h";

void solveAndPrintRoots(double a, double b, double c)
{
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "There are no roots to this equation.";
		}
		else
		{
			cout << "x = " << -c / b;
		}

		return;
	}
	else if (b == 0) //a*x*x + c = 0; x = sqrt(-c/a)
	{
		if (-c / a < 0)
		{
			cout << "There are no roots to this equation.";

			return;
		}
		else if (-c / a == 0)
		{
			cout << "The root of the equation is 0.";

			return;
		}
		else
		{
			cout << "The roots of the equation are x = " << sqrt(-c / a) << ", " << -sqrt(-c / a) << ".";

			return;
		}
	}
	else
	{
		double sqr = (b * b) - (4 * a * c);

		if (sqr == 0)
		{
			cout << "The root of the equation is " << -b / (2 * a) << ".";

			return;
		}
		
		if (sqr < 0)
		{
			cout << "There are no roots to this equation.";
		}
		else
		{
			double root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
			double root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

			cout << "The roots of the equation are x = " << root1 << ", " << root2 << ".";
		}
	}
}

int main()
{ 
	double a;
	double b;
	double c;

	cout << "Enter value for 'a': ";
	cin >> a;

	cout << "Enter value for 'b': ";
	cin >> b;

	cout << "Enter value for 'c': ";
	cin >> c;

	solveAndPrintRoots(a, b, c);

	return 0;
}