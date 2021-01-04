/*
exponents. c
a program that takes 2 inputs n and k and returns the n power k.
example
input: 2, 3
output: 8
*/


// expo declaration
float expo(int n, int k);

// main
int main() {
	
	int n = 2;
	int k = -20;
	
	printf("%d raised to the power %d is %f\n", n, k, expo(n, k));
	
	return 0;
}

/**
a function that takes two arguments, n and k, 
where n is the number and k is the power to be raised to.
*/
float expo(int n, int k) {
	
	int pow = 1;
	int temp = k;
	
	if (temp < 0) {
		temp *= -1;
	}
	
	for (int i = 0; i < temp; i++) {
		pow *= n;
	}
	
	if (k >= 0) {
		return pow;
	} else {
		return 1.0 / pow;
	}
	
}
