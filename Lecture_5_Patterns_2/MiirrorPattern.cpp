#include <iostream>
using namespace std;

int main()
{
    int i, n, stars, spaces;
    i = 1;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    while(i <= n){
        spaces = 1;
        while(spaces <= (n - i)){
            cout << " ";
            spaces++;
        }
        stars = 1;
        while (stars <= i)
        {
            cout << "*";
            stars++;
        }
        cout << endl;
        i++;
    }
    return 0;
}