#include<iostream>
using namespace std;

void Count(char c)
{
    int count_of_characters = 0;
    int count_of_digits = 0;
    int count_of_whitespaces = 0;
    int count = 0;

    while(c != '$'){
        if(c >= 'a' && c <= 'z')
            count_of_characters++;
        else if(c >= '0' && c <= '9')
            count_of_digits++;
        else if(c == '\t' && c == '\n')
        count_of_whitespaces++;        
    }

    cout << count_of_characters << " " << count_of_digits << " " << count_of_whitespaces;
}

int main(){

    char c;
    c = cin.get();
    Count(c);
    return 0;
}