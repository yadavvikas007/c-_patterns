# include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the no. of rows :";
	cin >> n;
		for (int i = 1; i <= n; i++)
		{
			int c = 1;
			for (int j = 1; j <= i; j++)
			{
				if (j == 1 || j == i||i==n)
					cout << c;
				else
					cout << " ";
				c++;

			}
			cout << endl;
		}
}