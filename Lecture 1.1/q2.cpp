#include<bits/stdc++.h>
using namespace std;
 int main(){

    int num1, num2; 
    cout << "Enter the first number: ";  
    cin >> num1;  

    cout << "Enter the second number: ";  
    cin >> num2; 
   
  int arr[100] = {0};
  int  count = 0 ;
 
  for (int i = num1; i <= num2; i++) {  
        if (i % 400 == 0) {  
            arr[count++] = i;   
        }  
        else if (i % 100 == 0) {  
            continue;  
        }  
       if (i % 4 == 0) {  
            arr[count++] = i;
        }  
    }  

    cout << "The array is: ";  
    for (int i = 0; i < count; i++)  
        cout << arr[i] << " ";

    return 0;

 }  