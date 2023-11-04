#include<iostream>
using namespace std;
int main()
{

    int arr[100];
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"entr the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int start=0;
    int endd=n-1;
    int x;
    cout<<"entr x"<<endl;
    cin>>x;
    while(start<=endd)
    {
        int  mid=(start+endd)/2;
        if(arr[mid]==x)
        {
            cout<<"i got it"<<endl;
            break;
        }
        else if(arr[mid]<x)
        {
            start=mid+1;
            endd=n-1;
        }
        else
        {
            start=0;
            endd=mid-1;
        }
    }
    return 0;
}
