#include <iostream>
using namespace std;

int main()
{
    int i ,j, n;
    cin >> n;

    i = 1;
    char ch = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << ch;
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
    
    return 0;
}