#include <iostream>
using namespace std;
#include <climits>
#include <cmath>

int main(){
    
    // This is the optimal Solution
    
    int n;
    cin >> n;
    // Write your code here
    int largest=INT_MIN;
    int secondLargest = INT_MIN;
    
    for(int i=1;i<=n;i++){
        int temp;
        cin >> temp;
        
        if(temp>largest){
            secondLargest = largest;
            largest = temp;
        }else if(temp>secondLargest && temp<largest){
            secondLargest = temp;
        }
    }
    
    cout << secondLargest << endl;
}