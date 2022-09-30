//~~~~~~~~~~~~~~~~~```` SORTED ARRAY```````````````````````~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;

void mergeintoc (int arr1[], int n1, int arr2[],  int n2, int ans[]){
	int i = 0 , j = 0, k = 0; // intializing...
	while (i < n1 && j < n2){
	if (arr1[i] < arr2[j] ){
		ans[k] = arr1[i];
		k++;
		i++;
	}
	else{
		ans[k] = arr2[j];
		k++;
		j++;
	}
	}
	while ( i < n1){
	ans[k] = arr1[i];
	k++;
	i++;
	}
	while( j < n2){
		ans[k] = arr2[j];
		k++;
		j++;
	}
   }
    int main(){  
    int n1,n2;       //TAKING ARRAY INPUT....
    cout << "Enter the size  of array 1:" << " ";
	cin >> n1; 
	int ans[100];
	int arr1[100];
    cout << "Enter the numbers:" << endl;
    for(int i=0; i<n1 ;i++){
        cin >> arr1[i];
    }
    cout << "Enter the size of array 2:" <<" ";
    cin >> n2;
	int arr2[100];
    cout << "Enter the numbers:" << endl;
    for(int j=0; j< n2 ; j++){
        cin >> arr2[j];
    }
	
    mergeintoc( arr1, n1 , arr2, n2, ans );
    for (int i = 0 , j = 0; i < n1 && j < n2 ; i++ , j++) // for showing output.....
    {
     cout << arr1[i] << " " << arr2[j] << " " ;
	}
    return 0;
    } 