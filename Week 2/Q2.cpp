#include<iostream>
using namespace std;
int func (int a[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
	{
	  for (int j = i + 1; j < n; j++)
		{
		  for (int k = j + 1; k < n; k++)
			{
			  if (a[i] + a[j] == a[k])
				{
				  cout << i + 1 << ", " << j + 1 << ", " << k + 1 << endl;
				  exit (0);
				}
			}
		}
	}
  cout << "Not Found"<<endl;
  return 0;
}

int main ()
{
  int n, m;
  cout << "Enter the number of arrays you want to enter: ";
  cin >> n;
  while (n!=0)
	{
	  cout << "Enter the size of array: ";
	  cin >> m;
	  int a[m];
	  cout << "Enter the elements" << endl;
	  for (int i = 0; i < m; i++)
		  cin >> a[i];
	  func (a, m);
	  n--;
	}
  return 0;
}
