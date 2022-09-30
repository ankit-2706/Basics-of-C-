
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~FINDING LARGEST OF INPUT NUMBERS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << " Input size of Array : " << endl;
    cin >> n;
   cout << endl ;
    int input[100];
   // cout << "Enter the numbers:" << endl;
    for(int i=0;i<n;i++){
         cout << "Enter the number  in  input [" << i << "] : " << " ";
        cin >> input[i];
    }
    //for(int i=0;i<n;i++){
       // cout << input[i];
    
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(input[i] > max ){
            max= input[i];
        }
    }
    cout << "The largest number is : " << max << endl;
    
    return 0;
}