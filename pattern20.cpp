# include<iostream>
using namespace std;
int main()
{
	int n;
	cout << " enter the no. of rows :";
	cin >>n;
	for (int i=1;i<=n;i++)
	{
		
		for (int j = 1; j <=n-i; j++)
		{
			cout << "  ";
		}
		for (int l = 1; l <= i; l++)
		{
			cout << l << " ";
		}
		for (int k = i - 1; k >= 1; k--)
		{
			cout << k << " ";
		}
		cout << endl;
	}
}