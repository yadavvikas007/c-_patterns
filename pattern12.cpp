/*program to print this pattern:
    n=10
         0
        909
       89098
      7890987
     678909876
    56789098765
   4567890987654
  345678909876543
 23456789098765432
1234567890987654321
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n+i;j++)
        {
            if(j<=n-i)
                cout<<" ";
            else
            {
                if(j>n-i&&j<=n)
                    cout<<j%n;
                if(j>n)
                    cout<<n-(j%n);
            }
        }
        cout<<endl;
    }
    return 0;
}
