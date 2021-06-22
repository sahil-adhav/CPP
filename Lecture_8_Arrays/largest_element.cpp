#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int array[100];
    int n;
    cin >> n;
    cout << "Array" <<endl;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    cout << "Largest element " << max;
    return 0;
}