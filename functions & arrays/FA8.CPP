//~~~~~~~~~~~~~~~~~~~~~````SELECTION SORT(arranging in increasing order)`````````~~~~~~~~~~~~~~~~~~~

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
    int input[] = {2,3,9,8,7,4,6,0} ;
    selectionsort(input, 8);
  for(int i =0 ; i < 8 ; i++){
      cout << input[i] << " ";
  }      
    cout << endl;
    return 0;
    }