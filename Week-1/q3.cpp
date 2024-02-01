#include<iostream>
using namespace std;
int find (int[], int, int);
void linearSearch (int[], int, int, int);
int c = 0;
int main ()
{
  int n, m, k;
  cout<<"Enter the number of lists you want to enter: ";
  cin >> n;
  while (n != 0)
	{
	  cin >> m;
	  int a[m];
	  for (int i = 0; i < m; i++)
		{
		  cin >> a[i];
		}
	  cin >> k;
	  int f;
	  f = find (a, m, k);
	  if (f < 0)
		cout << "Not Preset" << c << endl;
	  n--;
	}
  return 0;
}

int find (int a[], int m, int k)
{
  c++;
  if (a[0] == k)
	{
	  cout << "Present" << endl;
	  return 0;
	}
  else
	{
	  int i = 1;
	  while (i < m && a[i] <= k)
		{
		  i = i * 2;
		}
	  linearSearch (a, i / 2, m, k);
	}
  return 0;
}

void linearSearch (int a[], int c, int b, int k)
{
  int flag = 0;
  for (int i = c; i < b; i++)
	{
	  c++;
	  if (a[i] == k)
		{
		  flag = 1;
		  cout << "Present"<<c;
		  break;
		}
	}
  if (flag == 0)
	cout << "Not Present";
}
