//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~```LINEAR SEARCH```````~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include<iostream>
using namespace std;
    int linearsearch(int input[] , int val , int n){
    for(int i=0;i<n;i++){
        if(input[i]==val){
           return i;
        }
    }
    return -1;
    }
    int main(){  
    int n;
    cout << "Enter the total value of number:" << endl;
    cin >> n;
    int input[100];
    cout << "Enter the numbers:" << endl;
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    int val;
    cout << "Enter the value to be searched:" << endl;
    cin >> val;
    cout << endl;
    cout << linearsearch(input , val , n) << endl;
    return 0;
}