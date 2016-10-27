#include<cmath>
#include<iostream>

using namespace std;

bool isPrimeBruteForce(int x)
{
	if (x < 2)
		return false;
	float sqroot_x = sqrt(x);
	for(int i=0; i <= sqroot_x; i++) { /* If there were only factors above the square root of x, they would be bigger than x itself. */
		if (x%i==0)
			return false;
	}
	return true;
}

int main(int argc, char* argv[])
{
	int number;
	bool result;
	number = argv[0];
	result = isPrimeBruteForce(number);
	if result {
		cout << number << " is a prime number.";
	} else {
		cout << number << " is not a prime number.";
	}
	return 0;
}
