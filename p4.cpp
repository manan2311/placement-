#include <iostream>
using namespace std;
int main()
{
int  i, j, n;
cout << "Enter number of rows:  ";
cin >> n;
for(i = 0; i < n; i++)
{
for(j = 0; j < i; j++)
{
cout << " ";
}
for(j = i; j < n; j++)
{
cout << "*";
}
cout << "\n";
}
return 0;
}