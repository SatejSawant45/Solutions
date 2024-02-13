#include<bits/stdc++.h>
using namespace std;


int partitionArray(int input[], int start, int end) 
{
   int i=start , j=end;
   int pivot = input[start];
   while(i<j)
   {
      while(input[i]<=pivot && i<=end-1)
      {
         i++;
      }
      while(input[j]>=pivot && j>=start+1)
      {
         j--;
      }
      if(i<j)
      {
      swap(input[i],input[j]);
      }
   }

   swap(input[j],input[start]);
   return j;
	
}

void quickSort(int input[], int start, int end) 
{
   if(start<end)
   {
 

   int index = partitionArray(input,start,end);

   quickSort(input, start, index-1);
   quickSort(input, index+1,end);
   }
   
}


int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    

    cout << "The sorted vector is" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}