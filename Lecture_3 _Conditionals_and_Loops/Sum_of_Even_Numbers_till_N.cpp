#include <iostream>
using namespace std;

int main()
{

    int num, N;
    int sum = 0;

    cin >> N;

    num = 1;
    while (num <= N)
    {
        if (num % 2 == 0)
                sum = sum + num;
                num ++;    
    }

    cout << sum;
    

    return 0;
}
