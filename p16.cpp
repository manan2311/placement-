#include <iostream>
using namespace std;
int main()
{
int  n;
cout << "Enter number of rows:  ";
cin >> n;
 for(int i=1; i<=n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << " ";
        }   
        for(int j=1; j<=i; j++)
        {
            cout << j;
        }
        for(int j=i-1; j>=1; j--)
        {
            cout <<  j;
        }

        cout << "\n";
    }
 for(int i=n-1; i>=1; i--)
    {
        for(int j = i;j < n;j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++)
        {
            cout << j;
        }
        for(int j=i-1; j>=1; j--)
        {
            cout << j;
        }

        cout << "\n";
    }
return 0;
}