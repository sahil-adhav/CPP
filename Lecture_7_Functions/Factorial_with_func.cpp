#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    int i = 1;
    while (i <= n)
    {
        ans = ans * i;
        i++;
    }
    return ans;
}

int main()
{
    int n, r;
    cin>>n>>r;
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);
    int ans = factorial(n)/(factorial(r) * factorial(n-r));
    cout<<ans<<endl;
    return 0;
}