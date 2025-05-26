#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter Day Number:";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    case 5:
        cout << "friday";
        break;

    default:
        cout << "Invalid value";
        break;
    }

    // Arrays: 1D,2D
    int arr[5];
    cin >> arr[3];
    arr[3] -= 3;
    cout << arr[3] << endl
         << arr[2] << endl
         << arr[0];

    // 2D
    int a[3][5];
    a[1][4] = 55;
    cout << a[1][4] << a[2][6];

    // string
    string s = "sourabh";
    int len = s.length();
    int size = s.size();
    cout << len << endl
         << size;
    s[len - 1] = 's';
    cout << s;

    // for loop
    int i;
    for (i = 0; i < 25; i += 5)
    {
        cout << i << endl;
    }
    cout << i;

    return 0;
}