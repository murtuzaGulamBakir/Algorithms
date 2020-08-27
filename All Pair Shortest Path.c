
#include<stdio.h>
#include<conio.h>
int a[20][20],cost[20][20];
int min(int a,int b)
{ if(a<b)
    return a;
  else
    return b;
}
void allpair(int n)
{ int i,j,k;
for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
      a[i][j]=cost[i][j];
for(k=1;k<=n;k++)
{
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
	a[i][j]=min(a[i][j],a[i][k]+a[k][j]);

 }

 printf("Shortest path is :");
  printf("\n");
  for(i=1;i<=n;i++)
  printf("%d\t",i);
  for(i=1;i<=n;i++)
  { printf("\n%d ",i);
	for(j=1;j<=n;j++)
	     printf("%d\t",a[i][j]);
	     printf("\n");
  }
}

}
int main()
{ int i,j,n;
clrscr();
printf("Enter the nodes:");
scanf("%d",&n);
for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  { if(i!=j)
  { printf("Cost of Edge <%d,%d> if no edge then enter 1000:",i,j);
   scanf("%d",&cost[i][j]);
  }
  else
  cost[i][j]=0;
  } allpair(n);

  getch();
  return 0;
}
