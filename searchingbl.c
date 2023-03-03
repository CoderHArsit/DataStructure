#include <stdio.h>

int main()
{
    printf("BINARY SEARCH\n");
    printf("enter the size of an array\n");
    int n;
    scanf("%d",&n);
    printf("enter the elements in an array\n");
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched\n");
    int se;
    scanf("%d",&se);
    int ul=n-1;
    int ll=0;
    
    while(ul>=ll){
        int mid=(ul+ll)/2;
        if(arr[mid]==se){
            printf("ELEMENT FOUND");
            return 0;
        }
        if(arr[mid]>se){
            ll=mid+1;
        }
        if(arr[mid]<se){
            ul=mid-1;
        }
        
    }
    printf("ELEMENT NOT FOUND");

    return 0;
}