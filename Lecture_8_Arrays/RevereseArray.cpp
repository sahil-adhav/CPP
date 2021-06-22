#include<iostream>
using namespace std;

void reverseArray(int input[], int n){
    int temp, start = 0, end = n - 1;
    while (start < end)
    {
        temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start ++;
        end --;
    }
}

void printArray(int input[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
}

int main()
{
    int input [10] = {1, 2, 3, 4, 5, 6};
    reverseArray(input , 6);
    printArray(input, 6);
    return 0;
}