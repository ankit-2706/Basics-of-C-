//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SUM OF AN ARRAY~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include<iostream>
using namespace std;
int main(){
    int n;
   cout << " Input size of Array : " << endl;
    cin >> n;
    int input[100];
    //cout << "Enter the numbers:" << endl;
    for(int i = 0; i<n ; i++){
              cout << "Enter the number  in  input [" << i << "] : " << " ";
        cin >> input[i];
    }
    int sum =0;                  //It is the total sum ...
    for(int i=0; i < n ; i++){
        sum = sum + input[i];   
    }
    cout << "The sum of  numbers is :" << sum;
    return 0;
}




    
