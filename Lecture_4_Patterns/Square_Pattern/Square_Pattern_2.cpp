#include <iostream>
using namespace std;

int main()
{   
    int i, n;
    cout << "Enter the number: " << endl;
    cin >> n;

    i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}