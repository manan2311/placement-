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
for(int j = 0; j < 2*i + 1; j++)
{
cout << j+1;
}
cout << "\n";
}
for(int i = 0; i < n-1; i++)
{
for(int j = 0; j <= i; j++)
{
cout << " ";
}
for(int j = 0; j < 2*(n-1) - 2*i - 1; j++)
{
cout << j+1;
}
cout << "\n";
}
return 0;
}