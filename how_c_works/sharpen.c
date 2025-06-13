#include <stdio.h>


int main()
{
	int card_count = 11;
	int c = 10;
	char ex[20];
	char suit = 'H';

	if(card_count > 10)
		puts("The deck is hot. Increase bet");

	
	while(c > 0)
	{
		puts("I must not write code in class");
		c = c - 1;
	}

	/* Assume name shorter than 20 chars. */

	puts("Enter boyfriend's name : ");
	scanf("%19s", ex);
	printf("Dear %s \n\n\t You' re history. \n", ex);


	switch(suit)
	{
		case 'C':
			puts("Clubs");
			break;
		case 'D':
			puts("Diamonds");
			break;
		case 'H':
			puts("Hears");
			break;
		default:
			puts("Spades");
	}
}
