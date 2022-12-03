#include <iostream>
using namespace std;
int main()
{
    int l,key,h,mid;
    int A[]={2,4,6,22,44,66,67,67,69};
    l=0;
    h=8;
    cout<<"Enter key";
    cin>>key;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key>A[mid])
        {
            l=mid+1;
        }
         if(key<A[mid])
        {
            
            {
                h=mid-1;
            }
        }
        if(key==A[mid])
        {
            cout<<"Key found at index "<<mid;
            break;
        }
        
    }
    cout<<"Key not found";
   
    return 0;
}