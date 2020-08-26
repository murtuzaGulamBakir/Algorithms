#include<stdio.h>
#include<conio.h>
#include<string.h>
int c[20][20];
char d[20][20];
void lcs(char x[20],char y[20]) ;
void display(char d[20][20],char x[20],int i,int j);
void main()
{ char i,a[20],b[20];
  clrscr();
  printf("Enter the String 1:");
  gets(a);
  printf("Enter the String 2:");
  gets(b);
  printf("\nString 1 : ");
  for(i=0;i<=strlen(a);i++)
     printf("%c ",a[i]);
  printf("\nString 2 : ");
  for(i=0;i<=strlen(b);i++)
     printf("%c ",b[i]);
  printf("\n\n");
  lcs(a,b);
  printf("is the longest common subsequence \n\n WELL DONE!!");
  getch();
}



void lcs(char x[],char y[])
{ int m,n,i,j;
m= strlen(x);
n=strlen(y);
for(i=0;i<=m;i++)
 c[i][0]=0;
for(j=0;j<=n;j++)
 c[0][j]=0;
for(i=1;i<=m;i++)
 for(j=1;j<=n;j++)
	if(x[i-1]==y[j-1])
	{ c[i][j]=c[i-1][j-1]+1;
	  d[i][j]='d';
	}
	else if(c[i-1][j]>=c[i][j-1])
	   { c[i][j]=c[i-1][j];
	     d[i][j]='u';
	   }
	else
	   { c[i][j]=c[i][j-1];
	     d[i][j]='l';
	   }
	   display(d,x,m,n);
}
void display(char d[20][20],char x[20],int i,int j)
{ if(i==0||j==0)
  return ;
  else
  { if(d[i][j]=='d')
    { display(d,x,i-1,j-1);
      printf("%c ",x[i-1]);
    }
    else if (d[i][j]=='u')
     display(d,x,i-1,j);
    else
     display(d,x,i,j-1);

  }
}
