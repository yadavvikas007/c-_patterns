# include <iostream>
using namespace std;
int main()
{
	int n,i;
	cout << "enter the no. of rows :";
	cin >> n;
	for (i = 1; i <n; i++)
	{
		for (int j = 1; j < n + i; j++)
		{
			if (j == n - i + 1||j==n+i-1)
				cout << "*";
			else
				cout << " ";
		}cout <<endl;
	
	}
	if (i == n)
		for (int k = 1; k <= n; k++)
			cout << "* ";
}