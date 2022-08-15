#include "../common_imports.h"

void bubbleSort(int arr[], int len){}

int main(){
  int n;
  
  cout << "Enter the length of the array: " << endl;
  cin >> n;

  int arr[n];

  cout << "Enter the elements of the array: " << endl;
  for (int i= 0; i < n; i++)
    cin >> arr[i];

  bubbleSort(arr, n);
  return 0;

}
