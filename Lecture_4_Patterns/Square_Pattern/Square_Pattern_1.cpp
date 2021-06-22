#include <iostream>
using namespace std;

int main()
{   
    int i, n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;

    i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}