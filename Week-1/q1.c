#include<iostream>
using namespace std;
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
    for(int i=0;i<m;i++)
    {
      if(k==a[m])
      { 
        count=1;
        cout<<"Number is present at: "<<i+1;
        break;
      }
    }
      if(count==0)
        cout<<"Number is not present"<<endl;
    n--;
  }
}
