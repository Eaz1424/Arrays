#include <iostream>
using namespace std;

int main()
{
    
    int i,j,k,a,key;
    cout<<"Enter size";
    cin>>a;
    int A[a];
    for(i=0;i<a;i++)
    {
        cout<<"Enter a number \n";
        cin>>A[i];
    }
    cout<<"Enter key \n";
    cin>>key;
    for(i=0;i<a;i++)
    {
        if(key==A[i]){
        cout<<"Key found at index "<<i;
        return 0;
        }
       
        
    }
    
            cout<<"key not found";
            
        }
    
    
   
