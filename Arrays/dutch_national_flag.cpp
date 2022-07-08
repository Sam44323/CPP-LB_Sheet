#include "../common_imports.h"

void DNF(int *arr, int n){
  int c0=0, c1=0, c2=0, counter = 0;
  for(int i = 0; i < n; i++){
    switch(arr[i]){
      case 0:
        c0++;
        break;
      case 1:
        c1++;
        break;
      case 2:
        c2++;
        break;
    }
  }

  while(c0 > 0) arr[counter++] = 0, c0--;
  while(c1 > 0) arr[counter++] = 1, c1--;
  while(c2 > 0) arr[counter++] = 2, c2--;

  cout << "Sorted array" << endl;

  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main(){
  int n, temp = 0;
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << endl;

  int arr[n];
  while(temp < n){
    int value;
    cout << "Enter the value: ";
    cin >> value;
    cout << endl;
    if(value > 2) cout << "Please enter a value between 0 and 2" << endl;
    else{
      arr[temp] = value;
      temp++;
    }

  }

  DNF(arr, n);

  return 0;
}
