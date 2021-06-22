#include<iostream>
using namespace std;

int main()
{
    int sum[10];
    int n;
    cin >> n; //
    for (int i = 0; i < n; i++)
    {
        cin >> sum[i];
    }
    cout << "Array" << endl;  
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << endl;
    }
    cout << "Sum of given array: " << endl;
    int sumArray;
    sumArray = 0;
    for (int i = 0; i < n; i++)
    {
        sumArray += sum[i];   
    }
    cout << sumArray;
    return 0;
}