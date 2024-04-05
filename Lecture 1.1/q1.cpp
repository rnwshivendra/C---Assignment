#include <iostream>

using namespace std;

int main(){

  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  for(int i=0;i<size;i++){
     cout << "Type elements: ";
     cin >> arr[i];
  }

  for(int i=0;i<size;i++){
      if(arr[i]%2==0){
        cout << arr[i] << endl;
      }
  }


}