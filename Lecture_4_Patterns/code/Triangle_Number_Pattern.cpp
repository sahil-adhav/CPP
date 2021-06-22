#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin >> n;

    i = 1;
    while(i <= n){
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}