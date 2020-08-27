#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int x[10],counter=0;
int place(int k,int n);
void nqueens(int k,int n);

void main()
{       int i,n;
	clrscr();
	printf("\nENTER THE NUMBER OF QUEENS = ");
	scanf("%d",&n);
	nqueens(1,n);
	printf("\nNUMBER OF SOLUTIONS = %d",counter);
	getch();
}

int place(int k,int i)
{
	int j;
	for(j=1;j<k;j++)
	{
		if(x[j]==i||(abs(x[j]-i)==abs(j-k)))
			return 0;
	}
	return(1);
}

void nqueens(int k,int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		if(place(k,i))
		{
			x[k]=i;
			if(k==n)
			{
				printf("%d)",counter+1);
				for(j=1;j<=n;j++)

					printf("%d ",x[j]);
					printf("\n");
					counter++;

			}
			else
				nqueens(k+1,n);
		}
	}
}
    			
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
