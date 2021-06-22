    #include <iostream>
    using namespace std;
    
    int main()
    {
        int n;
        cin >> n;
        int currRow = 1;
        while(currRow <= (n/2)+1){
            int spaces = 1;
            while(spaces <=(n/2)+1 - currRow){
                cout << " ";
                spaces++;
            }
            int currCol = 1;
            while(currCol <= (2*currRow) - 1){
                cout << "*";
                currCol++;
            }
            cout << endl;
            currRow++;
        }
        currRow = 1;
        while(currRow <= n/2){
            int spaces = 1;
            while(spaces <= currRow){
                cout << " ";
                spaces++;
            }
            int currCol = 2*((n/2) - currRow + 1) - 1;
            while (currCol >= 1)
            {
                cout << "*";
                currCol--;
            }
            cout << endl;
            currRow++;
        }
        return 0;
    }