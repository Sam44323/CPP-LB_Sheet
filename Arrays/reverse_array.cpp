#include <iostream>
#include "../common_imports.h"

void reverseArray(int *arr, int start, int size)
{
    while (start < size)
    {
        int temp = arr[start];
        arr[start] = arr[size];
        arr[size] = temp;
        start++;
        size--;
    }

}

int main(){
  int n;
  cout << "Enter the length for the array: ";
  cin >> n;
  cout << endl;
  int arr[n];

  cout << "Enter the elements for the array: " << endl;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  reverseArray(arr, 0, n-1);

  cout << "Reversed Array: " << endl;
  for(int i = 0; i < n; i++){
    cout << arr[i] << endl;
  }

  return 0;
}
