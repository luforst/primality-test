#include<cmath>

bool isPrimeBruteForce(int x) {
	if (x < 2)
		return false;
	float sqroot_x = sqrt(x);
	for(int i=0; i <= sqroot_x; i++) { /* If there were only factors above the square root of x, they would be bigger than x itself. */
		if (x%i==0)
			return false;
	}
	return true;
}
