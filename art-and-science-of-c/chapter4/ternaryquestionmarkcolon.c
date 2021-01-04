/*
ternaryquestionmarkcolon.c
a program that makesbus of the ternary operation ?:
rewriting the evenodd.c using ?:
*/

#include <stdio.h>

int main() {
	
	int val;
	
	printf("enter val: ");
	scanf("%d", &val);
	
	printf("%d is %s\n", val, (val % 2 == 0)? "even" : "odd");
	
	return 0;
}
