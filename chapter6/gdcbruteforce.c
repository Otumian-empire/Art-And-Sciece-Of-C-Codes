/*
gdcbruteforce.c

computation of gcd of x and y using the brute force approach
*/

int bfgcd(int x, int y);

int main()
{
	int x = 24, y = 18;
	
	printf("the gcd of %d and %d is %d\n", x, y, bfgcd(x, y));
	
	return 0;
}

int bfgcd(int x, int y) {
	int guess = x;

	while (x % guess != 0 || y % guess != 0) {
		guess--;
	}
	
	return guess;
}
