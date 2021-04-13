# include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the even no. of rows :";
	n = 10;
	int a = n / 2;
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n; j++)
		{

			/*if(i==0||i==n-1||j==0||j==n-1)
				cout<<"*";*/
			if (i + j <= a - 1 || j >= a + i)
				cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= i + 1 || j >= n - i)
				cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}