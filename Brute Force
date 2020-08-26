#include<conio.h>
#include <stdio.h>
#include <string.h>

int naive(char testStr[], char patternStr[]);

void main()
{
    char testStr[100], patternStr[100];
    int decision;
    clrscr();
    printf("Enter the test string: ");
    gets(testStr);
    printf("\n");
    printf("Enter the pattern string: ");
    gets(patternStr);
    decision = naive(testStr, patternStr);
    printf("\n");

    if (decision!=-1)
	printf("'%s' is a Substring of '%s'", patternStr, testStr);
    else
	printf("'%s' is not a Substring of '%s'", patternStr, testStr);

    printf("\n");
    getch();
}

int naive(char testStr[], char patternStr[])
{   int i;
    int testLen = strlen(testStr);
    int patternLen = strlen(patternStr);

    for (i = 0; i <= testLen - patternLen; i++)
    {
	int j = 0;

	while (j < patternLen && testStr[i + j] == patternStr[j])
	    j++;

	if (j == patternLen)
	    return i;
    }

    return -1;
}
