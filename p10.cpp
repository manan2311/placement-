#include <iostream>
using namespace std;
int main()
{
int  n;
cout << "Enter number of rows:  ";
cin >> n;
for(int i = 0; i < n; i++)
{
for(int j = 0; j < n-i-1; j++)
{
cout << " ";
}
for(int j = 0; j <= i; j++)
{
cout << j+1;
}
cout << "\n";
}
return 0;
}