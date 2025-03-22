
#include <iostream>
using namespace std;

long long calculatePower(int i)
{
    long long power = 1;
    for (int j = 1; j <= i; j++)
    {
        power *= i;
    }
    return power;
}

int main()
{
    int n;
    cin >> n;

    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += calculatePower(i);
    }

    cout << sum << "\n";

    return 0;
}
