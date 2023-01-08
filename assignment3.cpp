#include <iostream>
using namespace std;

int main () 
{
    int n = 0;

    do {
        cout<<"Enter N: ";
        cin>>n;

        //printout every other number
        for (int i = 1; i <=n; i +=2){
            cout <<i;
            //printout a comma after a number but not the last one.
            if(i < n-1){
                cout << ",";
            }
        }


            cout <<"\n";
    } while(0 <n);

    cout<<"Goodbye!";
    return 0;    
    
}