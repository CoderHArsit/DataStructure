#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start = 0;
    int end = n-1;
    while(start<=end) {
      // using inbuilt swap function
      swap(arr[start],arr[end]);
      start++;
      end--;
    } 
}

void printarray(int arr[],int n) {
  for(int i=0 ; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }  
}
int main()
{   
    // n = size of array
    int n;         
    int arr[7] = {1,2,3,4,5,6,7};
    cout<<"Reversed array is:"<<endl;
    reverse(arr,7);
    printarray(arr,7);
    return 0;
}