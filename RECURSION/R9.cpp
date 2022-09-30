//~~~~~~~~~~~~~~~~``````````ALL INDICES OF A NUMBER`````````````~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int all_indices(int a[],int n,int x){

}

    int main(){
    int n,x;
    cout << "Enter size of array:" << endl;
    cin >> n;
    int a[100];
    for (int i=0; i<n ; i++){
        cout << "Enter the elements at a["<<i<<"]: " ;
        cin >> a[i];
    }
    cout << "Enter the no. whose  1st index need to find/: " << endl;
    cin >> x;
    cout << all_indices(a,n,x);
   
    return 0;
}