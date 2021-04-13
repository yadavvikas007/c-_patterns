# include <iostream>
using namespace std;
int main()
{
	int n, s, c;
	cout << "enter the initial no. :";
	cin >> s;
	cout << "enter the peak value :";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << s;
		}
		cout << endl;
		s++;
	}
	for (int k = n - 1; k >= 1; k--)
	{
		for (int a = 1; a <= k; a++)
		{
			cout << s - 2;
		}
		cout << endl;
		s--;
	}
}