#include<stdio.h>
#include<conio.h>

int w[10],p[10];
float t[10];

float knapsack(int m, int n);
void sort(int n);

void main()
{
int max,n,k;
float result;

clrscr();
 printf("Enter the number of items:");
 scanf("%d",&n);
 printf("Enter the MAXIMUM capacity:");
 scanf("%d",&max);
 printf("Enter the weights :");
 for(k=0;k<n;k++)
 {
  scanf("%d",&w[k]);
 }

 printf("Enter the Profits :");
 for(k=0;k<n;k++)
 {
  scanf("%d",&p[k]);
 }
 result=knapsack(max,n);
 printf("Result = %f ",result);
 getch();
 }


float knapsack(int m,int n)
{
int cp,i;
float x[10];
float max=0;

for(i=0;i<n;i++)
 x[i]=0;

 cp=m;
 sort(n);

 i=0;
 while(i<n && w[i]<=cp)
 { x[i]=1;
   cp -= w[i];
   i++;
 }
 if(i<n)
 x[i]=(float)cp/w[i];

 for(i=0;i<n;i++)
  max += x[i]*p[i];
  return max;
}

void sort(int n)
{  int f,temp1,i,j;
float temp;
  for(f=0;f<n;f++)
  { t[f]=(float)p[f]/w[f];
  }

for(i=0;i<n-1;i++)
{ for(j=0;j<n-i-1;j++)
 { if(t[j]<t[j+1])
   { temp=t[j];
     t[j]=t[j+1];
     t[j+1]=temp;

     temp1=w[j];
     w[j]=w[j+1];
     w[j+1]=temp1;

     temp1=p[j];
     p[j]=p[j+1];
     p[j+1]=temp1;

   }
 }
}

printf("Sorted\n");
for (i = 0; i < n; i++)
	printf("%d %d\n", p[i], w[i]);

}
