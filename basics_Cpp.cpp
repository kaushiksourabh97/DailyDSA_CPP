// #include<bits/stdc++.h> // we use this to include all libs. that there exists
#include <iostream>
using namespace std;

int main()
{
    // to take "Hey Sourabh!" this full as input then Use getline method.
    string s;
    getline(cin, s);
    cout<<s;

    // program to take input age & print if u are adult or not.
    // int age;
    // cout << "enter age:";
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "you are an adult.";
    // }
    // else
    // {
    //     cout << "you are not an adult.";
    // }

    // Ask user to enter marks and tell his grade
     int marks;
     cout<<"enter ur marks:";
     cin>> marks;
     if (marks>=80 && marks<=100){
         cout<<"A";
     } else if (marks>=60){
         cout<<"B";
     } else if (marks<25){
         cout<<"F";
     }

    // Nested If else problem
    int age;
    cin >> age;
    if (age > 57)
    {
        cout << "Retriement Time";
    }
    else if (age >= 55)
    {
        cout << "eligible for job but retirement soon.";
    }
    else if (age >= 18)
    {
        cout << "eligible for job.";
    }
    else
    {
        cout << "not eligible for job.";
    }

    if (age > 57)
    {
        cout << "Retriement Time";
    }
    else if (age >= 18)
    {
        cout << "eligible for job";
        if (age >= 55)
        {
            cout << " but retirement soon.";
        }
    }
    else
    {
        cout << "not eligible for job.";
    }

    return 0;
}