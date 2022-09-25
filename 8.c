#include <stdio.h>
void main()
{
int n,i,j,a[10],b[10],temp;
printf("\n Enter the no. of elements : ");
scanf("%d",&n);
printf("\n Enter %d elements\n",n);
for(i = 0 ; i < n ; i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
for(i = 1 ; i < n ; i++)
{
for(j = 0 ; j < n-i; j++)
{
if(a[j] > a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
printf("\nThe original elements are\n ");
for(i = 0 ; i < n ; i++)
printf("%d \n",b[i]);
printf("\nThe Sorted elements are\n ");
for(i = 0 ; i < n ; i++)
printf("%d \n",a[i]);
}
