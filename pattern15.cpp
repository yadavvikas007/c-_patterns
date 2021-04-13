#include <iostream>

using namespace std;

int main()
{
    int n,c=1;
    cout<<"enter the no. of rows";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int k=0;k<=i;k++)
        {
            if(k==0||i==0)
                c=1;
            else
                c=c*(i-k+1)/k;
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}
