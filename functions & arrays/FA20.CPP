// ~~~~~~~~~~~~~~~~~~~~~~~````````BINARY SEARCH````````~~~~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
    int binarysearch(int input[] , int x , int n){
    int start = 0 , end = n-1 ;
    while(start <= end){
        int mid = (start + end)/2;
        if(input[mid]==x){
            return mid;
        }
        else if(x < input[mid]){ 
            end = mid -1;
        }
         else if {
            start = mid +1;
             return -1 ;
        }
       
           
    } 
    }
    
    int main(){  
    int n;
    cout << "Enter the size of the Array :" <<" ";
    cin >> n;
    cout << endl ;
    int input[100];
   // cout << "Enter the numbers:" << endl;
    for(int i=0;i<n;i++){
            cout << "Enter the element of input [" << i << "] :" << " " ;

        cin >> input[i];
    }
    cout << endl ;
    int x;
    cout << "Enter the value to be checked:" << endl;
    cin >> x ;
    cout << endl ;
    cout << "The  number" << " " << x << " " << "is present at index ( " <<" " << binarysearch(input , x , n)  << " " << ")" ;
    return 0;
}