#include<iostream>
using namespace std;

int main(){
    int N = 999, Even = 0 , Odd = 0;
    int Input[N] = {} ;
    int i = 0 ;
    while(i < N){
        cout << "Enter an integer: " ;
        cin >> Input[i] ;
        if(Input[i]==0){
            cout << "#Even numbers = " << Even << endl;
            cout << "#Odd numbers = " << Odd << endl;
            break;
        }else if(Input[i]%2 == 0){
            Even += 1;
        }else{
            Odd += 1;
        }
        i++ ;
    }
    return 0;
}