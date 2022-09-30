//~~~~~~~~~~~~~~~~~~~~~~~~```````REVERSE OF A STRING``````````~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;
int length(char input[]){      // Function for finding length;
    int count = 0;
    for (int i = 0; input[i] != '\0' ;  i++)
    {
     count++;
    }
    return count;
}
void reversestring( char input[]){   // Function for  reversing the string...
    int len = length(input);
    int i = 0 , j = len -1;
    while(i < j)
    {
        char temp = input[i];   // swaping i & j ...
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

int main() {
char input[100];
    cout << "Enter the string" << endl;
    cin.getline (input , 100 );
    reversestring(input );       // calling reverse function...
    cout << input << endl;
    return 0;
}