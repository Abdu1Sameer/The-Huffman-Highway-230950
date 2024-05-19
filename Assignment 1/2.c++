#include <iostream>

using namespace std; 

int main()
{
    int n;
    cin>>n;
    int sp=2*n-2;
    int end=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2==0){
                for(int k=1;k<=end;k++)
                cout<<k;
                if(i!=(n-1))
               {
                for(int k=0;k<sp;k++)
                cout<<" ";
               } 
            }
            
            if(j%2!=0){
                for(int k=end;k>=1;k--)
                cout<<k;
            }
        }
        sp=sp-2;
        end++;
        cout<<endl;
        // cout<<sp;
        // cout<<endl;
    }
    return 0;
}