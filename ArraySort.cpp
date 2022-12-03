#include <iostream>
using namespace std;
int main()
{
    int i,temp=0,a,min,c=0,b,j=0,e=0;
    cout<<"Enter size of first";
    cin>>a;
    
   
    int A[a];
    for(i=0;i<a;i++)
    {
        cout<<"Enter a number"<<endl;
        cin>>A[i];
    }
    for(i=0;i<a;i++)
    {
        for(j=i;j<a;j++)
        {
            if (A[i]>A[j])
            {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            }

        }
        cout<<" "<<A[i];
    }

return 0;
}
        
   