#include<iostream>
using namespace std;


int main(){

int i, j, k, n;
    
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
        	cout << " ";
        }
        for(k=1;k<(i*2);k++)
        {
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
  
}


