# include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the value of n:";
	cin >> n;
	for (int i = 1; i <= n+1; i++)
	{
		int j;
		for( j=0;j<i;j++)
		{
			if(j==0) cout<<"*";
			else cout<<j;
		}
		for(int k=i-2;k>=1;k--)
			cout<<k;
		if(j!=1) cout<<"*";
		cout<<endl;
	}
	for (int i = n; i >=1; i--)
	{
		int j;
		for( j=0;j<i;j++)
		{
			if(j==0) cout<<"*";
			else cout<<j;
		}
		for(int k=i-2;k>=1;k--)
			cout<<k;
		if(j!=1) cout<<"*";
		cout<<endl;
	}
}
	
