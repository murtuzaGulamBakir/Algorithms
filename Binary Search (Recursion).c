#include<conio.h>
#include<stdio.h>
int binsearch(int a[],int low,int high, int x);
void main()
{
int r,x,n,i,a[20];
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the elements to be searched for:");
scanf("%d",&x);
if(n==1)
      {	if(a[0]==x)
	     printf("The element found at position 1”);
	else
	     printf("Element not  found");
      }
else
     if(n==2)
      { if(a[0]==x)
	   printf("Element found at position 1");
       else
	  if(a[1]==x)
	   printf("Element found at postion 2");
       else
	   printf("Element Not found");
      }

else
{
r=binsearch(a,0,n,x);
if(r!=-1)
printf("Element found at Position %d:",r+1);
else
printf("Element NOT found" );
}
getch();
}
int binsearch(int a[],int low, int high,int x)
{
if(low<=high)
{ int mid= (low+high)/2;
   if(x==a[mid])
      { return mid;
      }
   else
      if(x<a[mid])
      {
       return(binsearch(a,low,mid-1,x));
      }
   else
       {
	 return(binsearch(a,mid+1,high,x));
       }
}
return -1;
}


