#include<math.h>

bool isPrimeBruteForce(int x) {
	if (x < 2)
		return false;
	float sqroot_x = sqrt(x);
	for(int i=0; i <= sqroot_x; i++) {
		if (x%i==0)
			return false;
	}
	return true;
}
