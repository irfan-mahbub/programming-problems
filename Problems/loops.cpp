#include <iostream>

using namespace std;

int getSeriesSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}


int main()
{
    int n;
    cin >> n;
    int sum = getSeriesSum(n);
    cout << sum << "\n";
    return 0;
}
