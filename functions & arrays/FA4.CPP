//~~~~~~~~~~~~~~~~~````````SWAPING ALTERNATE ELEMENTS``````````````~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
 void swape(int input[],int n){
     for(int i=0;i<n-1;i+=2){
         int temp = input[i];
         input[i] = input[i+1];
         input[i+1] = temp;
         cout << input[i];
     }
 }
int main(){               //DOUBT--------
    int n;
    cout << "Enter total value of no.:" << endl;
    cin >> n;
    int input[100];
    cout << " Enter the numbers:" << endl;
    for(int i=0; i< n; i++){
        cin >> input[i];
    }
 swape(input, n);
    return 0;
}