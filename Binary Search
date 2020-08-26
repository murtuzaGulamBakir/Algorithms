#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 10
void main() {
int arr[size], num, i, n, beg, end, mid, found=0;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
printf("\n\n Enter the number that has to be searched: ");
scanf("%d", &num);
beg = 0, end = n-1;
while(beg<=end)
{
mid = (beg + end)/2;
if (arr[mid] == num)
{
printf("\n %d is present in the array at position %d", num, mid+1);
found =1;
break;
}
else if (arr[mid]>num)
end = mid-1;
else
beg = mid+1;
}
if(found!=1)
printf("Element not found:");
getch();
}
