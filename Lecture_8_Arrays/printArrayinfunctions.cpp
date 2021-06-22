#include<iostream>
using namespace std;

void printArray(int input[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int input [100];
    cout << input << endl; 
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    printArray(input, n);
    return 0;
}