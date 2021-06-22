#include<iostream>
using namespace std;

void print_1_to_n(int n){
    int a = 1;
    while(a <= n){
        cout << a << endl;  
        a++;
    }
}

int main()
{
    print_1_to_n(10);
    return 0;
}