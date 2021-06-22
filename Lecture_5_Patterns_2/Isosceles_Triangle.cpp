#include <iostream>
using namespace std;

int main()
{
    int i, n, j, spaces;
    i = 1;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    while(i <= n){
        spaces = 1;
        while(spaces <= (n - i)){
            cout << " ";
            spaces++;
        }
        j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        j = i - 1;
        while(j >= 1){
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}