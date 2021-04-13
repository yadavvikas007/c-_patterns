#include <iostream>

using namespace std;

int main()
{

	int n;
	cout<<"enter the value of n";
	cin>>n;
	for(int i=1,c=1;i<=n;i++,c++)
	{
		for(int j=1;j<n+i;j++)
		{
			if(j<=n-i)
			cout<<" ";
			else if((j==n-i+1)||(j==n+i-1))
			cout<<c;
			else
			cout<<"0";
		}
		cout<<endl;
	}
    return 0;
}
