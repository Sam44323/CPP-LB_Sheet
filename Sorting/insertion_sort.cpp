#include "../common_imports.h"

void insertionSort(int arr[], int len){}

int main(){
  int n;

  cout << "Enter the length of the array: " << endl;
  cin >> n;

  int arr[n];
  cout << "Enter the elements for the array: " << endl;
  for (int i = 0; i < n;  i++){
    cin >> arr[i];
  }

  insertionSort(arr, n);
  return 0;
}
