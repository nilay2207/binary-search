#include<bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> &arr, int n , int element)
{
  int low = 0;
  int high = n-1;
  while (low<=high)
  {
    int mid = (low+high)/2;
    if(arr[mid] == element)
    {
       return true;
    }
     
    else if (arr[mid]> element);
      
  }

  
  
}
int main()
{
  int n ;
  cout<<"Enter size ;";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter the array element ; ";
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int element;
  cout<<"enter element : ";
  cin>>element;
  int ans = binary_search(arr,n,element);
  cout<<"Element found "<<ans<<endl;
  return 0;
}
