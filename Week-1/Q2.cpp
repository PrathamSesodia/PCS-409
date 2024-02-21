#include<iostream>
using namespace std;
int z=0;
int binary(int,int,int,int[]);
int main()
{
  int n,m;
  cout<<"Enter the number of lists you want: ";
  cin>>n;
  while(n!=0)
  {
    cout<<"Enter the size of array: ";
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
      cin>>a[i];
    int k,count=0;
    cout<<"Enter the number you want to search: ";
    cin>>k;
    count=binary(0,m,k,a);
    if(count=0)
      cout<<"Not Present";
    else
      cout<<"Present and number of comparisions are: "<<z;
    n--;
  }
}

int binary(int n, int m, int k,int a[])
{
  z++;
if(a[m/2]==k)
  return 1;
else if(k<a[m/2])
{
  m=m/2 + 1;
  binary(n,m,k,a);
}
else if(k>a[m/2])
{
  n=m/2;
  binary(n,m,k,a);
}
return 0;
}
