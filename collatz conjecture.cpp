#include<iostream>
using namespace std;
int collatz(int num){
    int next;
    if(num == 1) cout << "END";
    if(num % 2){
        next = num*3+1;
        cout << num << "*3+1="<< next << endl;
    }
    else{
        next = num / 2;
        cout << num << "\2=" << next << endl;
    }
    return collatz(next);
}

int main(){
    int a;
    cin >> a;
    int collatz(a);
    return 0;
}