#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int i=1;
    while(i<=N){
        int j=1;
        while(j<=((N-i)+1)){
            cout << j;
            j += 1;
        }
        j = j-1;
        int k=N;
        while(k>j){
            cout << "*";
            k = k - 1;
        }
        int m=1;
        while(m<=(i-1)){
            cout << "*";
            m = m + 1;
        }
        int l=(N-i)+1;
        while(l>=1){
            cout << l;
            l -= 1;
        }
        cout << " " << endl;
        i = i + 1;
    }
}