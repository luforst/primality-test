#include<math.h>
#include<stdio.h>
/*#include<iostream>

using namespace std;*/

int isPrimeBruteForce(int x)
{
	if (x < 2)
		return false;
	double sqroot_x;
	sqroot_x = sqrt (x);
	for(int i=0; i <= sqroot_x; i++) { /* If there were only factors above the square root of x, they would be bigger than x itself. */
		if (x%i==0)
			return 0;
	}
	return 1;
}

int main(int argc, char* argv[])
{
	int result;
/*	int number;
	cout << "Enter number to test if it's prime: ";
	cin >> number;
	result = isPrimeBruteForce(number);
	if (result) {
		cout << number << " is a prime number.";
	} else {
		cout << number << " is not a prime number.";
	}*/
	result = isPrimeBruteForce(37);
	printf("Is 37 a prime number? %i", result);
	return 0;
}
