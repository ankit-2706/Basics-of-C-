//~~~~~~~~~~~~~~~~~~~~~~~~`````````````BUBBLE SORT`````````````~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

void bubblesort(int input[], int n){
    for (int j = 0; j < n-1; j++){ //FOR OVERALL PROCESS....
    for(int i = 0 ; i < n-1 ; i++){ //FOR INDEXING....
        if (input[i] > input[i+1]){
          int temp = input[i];  //SWAP..
          input[i] = input[i+1];
          input[i+1] = temp ;
        }
    }
    }
}
    int main(){  
    int n;       //TAKING ARRAY INPUT....
    cout << "Enter the total value of number:" << endl;
    cin >> n;
    int input[100];
    cout << "Enter the numbers:" << endl;
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    bubblesort(input, n);
    for (int i = 0; i < n; i++) // for showing output.....
    {
     cout << input[i] << " " ;
    }
    return 0;
    }