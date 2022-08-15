#include "../common_imports.h"

void bubbleSort(int arr[], int len){
  int i = 0,j= 0, temp = 0;

  for(i = 0; i < len; i++){
    for(j = 0; j < len - 1; j++){
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
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
  for (int i= 0; i < n; i++)
    cin >> arr[i];

  bubbleSort(arr, n);
  return 0;

}
