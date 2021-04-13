#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the odd number of rows :";
    cin>>n;
    int a=n/2;
    for(int i=1;i<=a+1;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=a-i+1||j>=a+i+1)
			cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=i||j>n-i)
				cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}
