#include <iostream>
using namespace std;

int main()
{
    int w;
    cout << "Enter the weight of the watermelon: ";
    cin >> w;

    if (w > 2 && w % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}