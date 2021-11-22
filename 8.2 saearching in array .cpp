#include <bits/stdc++.h>
using namespace std;


/* ---------------------------------------------------linear search--------------------------------------------------*/


int searching(int a[],int n,int t);
int searching(int a[],int n,int t)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==t)
        {
            return i+1;

        }


    }
    return -1;
}
/* ---------------------------------------------------binary search--------------------------------------------------*/


int binary_searching(int a[],int n,int t);
int binary_searching(int a[],int n,int t)
{
    int s=0,e=n,mid;
    while(s<=e)
    {
        mid=(s+n)/2;
        if(a[mid]==t)
        {
            return mid+1;
        }
        else if(a[mid]>t)
        {

            e=mid-1;
        }
        else
        {

            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
    cout<<"position of element in array is "<<searching(a,n,t)<<endl;


    /* ---------------------------------------------------binary shearch== O(log^n)--------------------------------------------------*/


    cout<<"with binary search "<<binary_searching(a,n,t);
    return 0;
}
