#include <iostream>

using namespace std;

int main()
{
       int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>n-i) cout<<"  ";
            else cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
