#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((i==n)||(j==n)||(j==(n-i+1)))
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
    return 0;
}
