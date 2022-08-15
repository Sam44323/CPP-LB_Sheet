#include "../common_imports.h"

void selectionSort(int arr[], int len){
  int i = 0,j= 0, temp = 0;

  for(i = 0; i < len; i++){
    for(j = i + 1; j < len; j++){
      if(arr[i] > arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  cout << "Array in ascending order: " << endl;
  for(i = 0; i < len; i++){
    cout << arr[i] << " ";
  }
}

int main(){
  int n;

  cout << "Enter the length of the array: " << endl;
  cin >> n;
  
  int arr[n];

  cout << "Enter the elements of the array: " << endl;
  for (int i = 0; i < n;  i++){
     cin >> arr[i];
  }

  selectionSort(arr, n);
     
  return 0;
}
