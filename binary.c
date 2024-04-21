#include<stdio.h>
int main()
{
    int n,i,l,h,mid,key;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements in the sorted order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the elements to search:");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==array[mid])
        {
            printf("%d found at the location%d",key,mid);
            break;
        }
else if(key<array[mid])
    h=mid-1;
else
l=mid+1;
    }
    if(l>h)
    printf("the element is not found");
return 0;
}