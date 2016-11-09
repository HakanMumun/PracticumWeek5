// Week 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
# include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{ // Task 1
	/*
   	int number;
	cout << "number:";
	cin >> number;
	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		sum += i;
		
	}
	cout << "sum:" << sum << endl;
	return 0; 

	// Task 2

	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	int multiplies = 1;
	if (a>=b)
	{
		for (int i = b; i <=a; i++)
		{
			multiplies *=i;
		}
	}
	else
	{
		for (int i = a; i <=b; i++)
		{
			multiplies *=i;
		}
	}
	cout << multiplies << endl;
	return 0; 


	 // Task 3
	int n;
	cout << "Enter number between 0 and 10" << endl;
	cin >> n;
	
	if (n>=0 && n<=10)
	{
		for (int i = 1; i <=100; i++)
		{
			if (i%2==0 & i%3==0)
			{
				cout << i << endl;
			}
		}
	}
	else
	{
		cout << " Number isn't beetween 0 and 10" << endl;
	}
	return 0; 

	// Task 4 
	int num;
	cin >> num;
	bool isPrime = true;
	for (int i = 2; i <= num / 2; i++)
	{
		if (num %i == 0)
		{
			isPrime = false; cout << "Not simple" << endl;

			break;
		}
	}
	cout << isPrime << "\nSimple" << endl; 

	// Task 5

	int p, q;
	cin >> p >> q;
	bool isPrime = true;
	if (p>q)
	{
		int c;
		c = p;
		p = q;
		q = c;

	}
	for (int i = p; i <= q; i++)
	{
		for (int k = 2; k <= i / 2; k++)
		{
			if (i % k == 0)
			{
				isPrime = false;

				break;
			}
		}
		if (isPrime)
		{
			cout << i << endl;
		}
		else
		{
			isPrime = true;
		}
	} 

	// Task 6 
	int rows;
	cout << "rows:";
	cin >> rows;
	int k = 1;
	for (int i = 1; i <=rows; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			cout << k << " " ;
			k++;
		}
		cout <<  endl;
	}
	return 0; 

   //Task 7
    int number;
	cin >> number;
	int binary = 0;
	int remainder;
	if (number>0 && number<1000)
	{

		while (number)
		{
			remainder = number % 2;
			number = number / 2;
			binary *= 10;
			binary += remainder;

		}
	}
	cout << binary << endl;

	return 0; 

} */


