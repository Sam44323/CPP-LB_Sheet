#include <iostream>
#include "../common_imports.h"

void negative_aggregator(int *arr, int length){
  int left = 0, right = length - 1;
  
  while(left < right){
    if (arr[left] < 0 && arr[right] < 0)
      left++;
     
    else if (arr[left]>0 && arr[right]<0)
    {
      int temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left++;
      right--;
    }
     
    else if (arr[left]>0 && arr[right] >0)
      right--;
    else{
      left++;
      right--;
    }
  }

  for(int i = 0; i < length; i++)
    cout << arr[i] << " ";
}

int main(){
  int n;
  cout << "Enter the length of the array: ";
  cin >> n;
  cout << endl;

  int arr[n];

  cout << "Enter the elements of the array" << endl;
  for(int i = 0; i < n; i++) cin >> arr[i];

  negative_aggregator(arr, n);

  return 0;
}
