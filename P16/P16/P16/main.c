#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX], ch;
	int i = 0;
	fptr = fopen("output.txt", "a");
	printf("please enter the word,Press ENTER to end the transfer:\n");
	while ((ch = getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\nFile Walled copy finishes!!\n");
	system("pause");
	return 0;
