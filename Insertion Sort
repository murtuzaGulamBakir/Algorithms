#include<conio.h>
#include<stdio.h>
void main()
{ int n,k,i,j,a[20],x;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(k=1;k<=n-1;k++)
{ x=a[k];
i=k-1;
while(i>=0 && a[i]>x)
{ a[i+1]=a[i];
  i=i-1;
}
a[i+1]=x;
}
printf("Sorted array is:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
}
