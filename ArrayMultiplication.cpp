#include <iostream>
using namespace std;
int main()
{
   int i,j,k,rows1,coloumns1,rows2,coloumns2,sum=0;
   cout<<"Enter rows and coloums of first matrix";
   cin>>rows1>>coloumns1;
    cout<<"Enter rows and coloums of second matrix";
   cin>>rows2>>coloumns2;
   int A[rows1][coloumns1],B[rows2][coloumns2];
   if(coloumns1==rows2){
   for(i=0;i<rows1;i++)
   {
    for(j=0;j<coloumns1;j++)
    {
        cout<<"Enter elements for "<<i<<" "<<j<<" ";
        cin>>A[i][j];
    }
   }
    for(i=0;i<rows2;i++)
   {
    for(j=0;j<coloumns2;j++)
    {
        cout<<"Enter elements for "<<i<<" "<<j<<" ";
        cin>>B[i][j];
    }
   }
int C[rows1][coloumns2];



for(i=0;i<rows1;i++)
{
    

     
    for(j=0;j<coloumns2;j++)
    {
        
        
        for(k=0;k<=rows2-1;k++)
        {
            sum=A[i][k]*B[k][j]+sum;
        }

    C[i][j]=sum;
    sum=0;
    }
   sum=0;
}
for(i=0;i<rows1;i++)
{
    for(j=0;j<coloumns2;j++)
    {
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
}

   }
else
{
    cout<<"Invalid input";
    return 0;
}



}

