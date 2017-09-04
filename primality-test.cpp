#include<cmath>
#include<iostream>

using namespace std;

bool isPrimeBruteForce(double x)
{
	if (x < 2)
		return false;
	double sqroot_x = sqrt(x);
	for(int i=0; i <= sqroot_x; i++) { /* If there were only factors above the square root of x, they would be bigger than x itself. */
		if (x%i==0)
			return false;
	}
	return true;
}

int main(int argc, char* argv[])
{
	double number;
	bool result;
	cout << "Enter number to test if it's prime: ";
	cin >> number;
	result = isPrimeBruteForce(number);
	if (result) {
		cout << number << " is a prime number.";
	} else {
		cout << number << " is not a prime number.";
	}
	return 0;
}
