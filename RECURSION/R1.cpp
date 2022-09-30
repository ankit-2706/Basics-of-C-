//~~~~~~~~~~~~~~~~~~~~~~~~~~~````````FACTORIAL``````````~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){           // BASE CASE
        return 1;
    }

    int smalloutput= factorial(n-1);   // INDUCTION HYPOTHESIS(assumed)
    int output= n*smalloutput;         //INDUCTION STEP
    return output ;                     
}

int main(){
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    cout << factorial(n) ;

    return 0;
}