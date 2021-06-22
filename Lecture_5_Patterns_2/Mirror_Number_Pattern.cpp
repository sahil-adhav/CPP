#include <iostream>
using namespace std;

int main()
{
    int i,j,num, space;
    cout << "Enter the value of num: ";
    cin >> num;
    i = 1;
    while(i <= num){
        space = 1;
        while(space <= num - i){
            cout << " ";
            space++;
        }
        j = 1;
        while(j <= i){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}