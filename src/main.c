#include<stdio.h>

int main() {
	
	
	do {
	
	int num=0;
	char word[50]= "" ,tik='n';

	printf("Please insert a number as an input! \n");
	scanf("%d", &num);
	
	word = num_to_words(num);
	printf("This is the returned string: %s \n",word);

	printf("Do you want to try it again? [y]or[n] \n");
	scanf("%c", &tik);

	} while( tik == 'y' )

	
	return 0;
}