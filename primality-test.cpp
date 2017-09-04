#include <iostream>
#include <cmath>
//using namespace std;

int isPrimeBruteForce(int x)
{
	if (x < 2)
		return false;
	double sqroot_x;
	double square = x;
	sqroot_x = std::sqrt(square);
	for(int i=0; i <= sqroot_x; i++) { /* If there were only factors above the square root of x, they would be bigger than x itself. */
		if (x%i==0)
			return 0;
	}
	return 1;
}

int main(int argc, char* argv[])
{
	int result;
	int number;
	std::cout << "Enter number to test if it's prime: " << std::endl;
	std::cin >> number;
	result = isPrimeBruteForce(number);
	std::cout << std::endl;
	if (result == 1) {
		std::cout << number << " is a prime number." << std::endl;
	} else {
		std::cout << number << " is not a prime number." << std::endl;
	}
/*	result = isPrimeBruteForce(37);
	printf("Is 37 a prime number? %i", result);*/
	return 0;
}
