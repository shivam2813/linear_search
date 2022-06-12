#include<iostream>

using namespace std;


int linearsearch(int arr[],int x,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
}
int main(){
    int a[10],x,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to search: ";
    cin>>x;
    int output=linearsearch(a,x,n);
    cout<<output;
    return 0;
}
