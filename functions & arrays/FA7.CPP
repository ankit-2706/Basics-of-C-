//~~~~~~~~~~~~~~~~~~~~~~~~``````SELECTION SORT```````````````~~~~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

void selectionsort(int input[], int n){
    for(int i = 0 ; i < n-1 ; i++){
        // find min element in the array......
        int min = input[i] , minIndex = i ;
        for(int j  = i+1 ; j < n ; j++){
            if(input[j] < min){
               min = input[j] ;
              minIndex =j;
           }
        }
      // swap...
      int temp = input[i];
      input[i] = input[minIndex] ;
      input[minIndex] = temp ;
        }
    }

    int main(){  
    int n;
    cout << "Enter the size of an Array:" << endl;
    cin >> n;
    int input[100];
    cout << "Enter the numbers:" << endl;
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    selectionsort(input, n);
  for(int i =0 ; i < n ; i++){
      cout << input[i] << " ";
  }      
    return 0;
    }