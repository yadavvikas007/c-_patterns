#include <iostream>

using namespace std;

int main()
{
   	int n;
   	cout<<"enter the value of n";
   	cin>>n;
	for(int i=1,c=1;i<=n;i++,c=1)
	{
		for(int j=1;j<n+i;j++)
		{
			if(j<=n-i)
			cout<<" ";
			else
			{
			cout<<c;
		    c++;
			 }

		}
		cout<<endl;
	}

    return 0;
}
