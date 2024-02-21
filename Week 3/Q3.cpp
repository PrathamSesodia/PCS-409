#include <iostream>
using namespace std;
int partition(int a[],int l,int h)
{
    int p=a[h];
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(a[j]<=p)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}
void quick(int a[],int l, int h)
{
    if(l<h)
    {
      int p=partition(a,l,h);
      quick(a,l,p-1);
      quick(a,p+1,h);
    }
}
int dup(int a[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
         {
            if(a[j]==a[i])
             {
                 return 1;
             }
         }
         return 0;
}

int main()
{int n;
cout<<"Enter the limit of array: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cout<<"Enter element "<<i+1<<": ";
    cin>>a[i];
}
quick(a,0,n);
cout<<"Sorted array is: ";
for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
cout<<endl;
int z=dup(a,n);
if(z)
    cout<<"Yes";
else
    cout<<"No";
}
