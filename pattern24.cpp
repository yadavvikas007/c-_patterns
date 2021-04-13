# include<iostream>
using namespace std;
int main()
{
	int n,s=1;
	cout << "enter the no. of rows :";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == i)
				cout << s;
			else
				cout << s << "*";
			s++;
		}
		cout << endl;
	}										//value of s is 11 now for n=4									
	for (int i = n ; i >= 1; i--)
	{    s-=i;
		for (int j = 1,a=s; j <= i; j++,a++)
		{   
			if (j == i)
				cout << a;
			else
				cout << a<< "*";
		}
		cout<<endl;
	}
}