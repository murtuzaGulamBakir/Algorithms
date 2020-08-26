#include<stdio.h>
#include<conio.h>
void main()
{ int n,a[20],i,j,largest,pos;
clrscr();
//Input
printf("Enter the number of elements: ");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("Enter the elements %d: ",i+1);
scanf("%d",&a[i]);
}
//Sorting
for(j=n-1;j>=1;j--)
{     largest=a[0];
      pos=0;
for(i=1;i<=j;i++)
  {
   if(a[i]>largest)
     { largest=a[i];
       pos=i;
     }
  }
     a[pos]=a[j];
     a[j]=largest;
}
 //Display
 printf("Sorted array is:");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
getch();
}
                                                     
                            
