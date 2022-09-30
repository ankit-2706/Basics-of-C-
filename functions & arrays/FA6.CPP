// ~~~~~~~~~~~~~~~~~~~~~~~````````BINARY SEARCH````````~~~~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
    int binarysearch(int input[] , int x , int n){
    int start = 0 , end = n-1 ;
    while(start <= end){
        int mid = (start + end)/2;
        if(input[mid]==x){
            return mid+1 ;
        }
        else if(x < input[mid]){ 
            end = mid - 1;
        }
        else {
            start = mid +1 ;
    } 
     }
     return -1;
    }
    
    int main(){  
    int n;
    cout << "Enter the size of an Array:" <<" " ;
    cin >> n;
    int input[100];
    cout << endl ;
    for(int i=0;i<n;i++){
        cout << " Enter the elements of input [" << i << "] : " << " " ;
        cin >> input[i];
    }
     cout << endl ;

    int x;
    cout << "Enter the value to be searched:" << endl;
    cin >> x ;

    cout << binarysearch(input , x , n) << endl;
    return 0;
}