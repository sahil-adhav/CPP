int i, n, star, spaces;
    i = 1;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    while(i <= n){
        spaces = 1;
        while(spaces <= (n - i)){
            cout << " ";
            spaces++;
        }
        star = 1;
        while (star <= i)
        {
            cout << "*";
            star++;
        }
        star = i - 1;
        while(star >= 1){
            cout << "*";
            star--;
        }
        cout << endl;
        i++;
    }
    return 0;