//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ FINDING nCr VALUE  BY FACTORIAL~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>
using namespace std;

int factorial (int n){

int ans= 1;
int i=1;
while(i<=n){

    ans=ans*i;
    i++;



}
 return ans;

}

int main(){

    int n,r;
    cout <<"Enter values of n and r" << endl;
    cin >> n >> r;
     int fact_n = factorial(n);
     int fact_r = factorial(r);
     int fact_n_r = factorial(n-r);

    int output= fact_n/(fact_r*(fact_n_r));
    
    cout << output << endl;




}