#include <iostream>
using namespace std;
int main()
{
    int n, num[100], sum = 0;

    cout << "pls enter how many numbers u want to enter: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter number " << i + 1 << ": ";
        cin >> num[i];

        if (num[i] > 0)
        {
            sum += num[i];
        }
    }

    cout << "sum of positive numbers = " << sum << endl;

    return 0;
}