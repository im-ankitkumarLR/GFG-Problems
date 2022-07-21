#include "/Users/ankitkumar/Downloads/razaa/stdc++.h"

using namespace std;

int reversefunc(int arr[], int start, int last)
{

     if (start<=last)
     {
          int temp ;
          temp = arr[start];
          arr[start] = arr[last];
          arr[last] = temp;

          reversefunc(arr, start + 1, last - 1);
     }
}

int main()
{

     int arr[] = {2, 4, 5, 6, 7, 9, 8};

     int n = sizeof(arr) / sizeof(arr[0]);
      reversefunc(arr, 0, n-1);

     for (int i = 0; i< n; i++)
     {
          cout << arr[i] << " ";
     }

     cout<<endl;
}