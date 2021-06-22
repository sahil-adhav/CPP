// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
//     totalSalary = basic + hra + da + allow – pf
// where :
// hra   = 20% of basic
// da    = 50% of basic
// allow = 1700 if grade = ‘A’
// allow = 1500 if grade = ‘B’
// allow = 1300 if grade = ‘C' or any other character
// pf    = 11% of basic.
// Round off the total salary and then print the integral part only.
// Note: Try finding out a function on the internet to do so

#include <iostream>
using namespace std;



int computeSalary(int basic,  
                char grade)  
{  
    int allowance;  
    double hra, da, pf;  
  
    hra = 0.2 * basic;  
    da = 0.5 * basic;  
    pf = 0.11 * basic;  
  
    // Condition to compute the  
    // allowance for the person  
    if (grade == 'A') {  
        allowance = 1700;  
    }  
    else if (grade == 'B') {  
        allowance = 1500;  
    }  
    else {  
        allowance = 1300;  
    }  
    int gross;  
  
    // Calculate gross salary  
    gross = (basic + hra + da + allowance - pf);  
    return gross;  
}  
  
// Driver Code  
int main()  
{  
    int basic; 
    char grade;

    cin>>basic>>grade;  
  
    cout << computeSalary(basic, grade);  
} 