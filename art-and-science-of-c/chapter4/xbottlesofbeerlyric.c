/*
xbottlesofbeerlyric.c
a program to generate the lyrics to this song

99 bottles of beer on the wall.
99 bottles of beer.
You take one down, pass it around.
98 bottles of beer on the wall.
98 bottole of beer on the wall.... 

modify this program by changing the numofbottles to an integer value
*/

#include <stdio.h>

#define numofbottles 99

int main()
{
	for (int i = numofbottles; i > 0; i--)
	{
		printf("%d bottles  of  beer  on  the wall.\n", i);
		printf("%d bottles  of  beer.\n", i);
		printf("You take  one  down, pass it  around.\n\n");
	}

	return 0;
}
