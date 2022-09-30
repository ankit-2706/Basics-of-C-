#include<iostream>
using namespace std;

int main(){

int n;
cout << "Enter n" << endl;
cin >> n;

bool divided = false;

for(int d = 2; d < n ; d++ ){

if(n % d == 0){
    divided = true;
}

}
if(divided){

cout << " Not Prime Number" << endl;

}
else {

    cout << "Prime Number" << endl;
}

}