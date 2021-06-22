// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.


#include <iostream>

using namespace std;

int main()
{
    int S, E, W;
    float celsius, fahr;

    cin >> S >> E >> W;

    // fahr = S;

    while (S <= E)
    {
        celsius = (5.0/9.0) * (S - 32);
        cout << S<<"\t"<< (int)celsius<<endl;
        S+= W;
    }
       
    return 0;
}