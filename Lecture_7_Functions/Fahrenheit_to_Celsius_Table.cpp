#include<iostream>
using namespace std;

void printTable(int start, int end, int step){
    //Celsius Value = (5/9)*(Fahrenheit Value - 32)  
    int currentvalue = start;
    while(currentvalue <= end){
        int ans =  (int)((5.0/9) * (currentvalue - 32));
        cout << currentvalue << "\t" << ans << endl;
        currentvalue += step;
    }
}

int main(){
    int start, end, step;
    cin >> start >> end >> step;
    printTable(start, end, step);

}
