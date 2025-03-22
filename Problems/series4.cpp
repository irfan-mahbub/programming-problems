#include <iostream>
using namespace std;

int seriesSum(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }
    return sum;
}
int main()
{
    int n;
    cout << "ENTER THE VALUE OF n: ";
    cin >> n;
    int result = seriesSum(n);
    cout << "THE SUM OF THE SERIES IS: " << result << endl;
    return 0;
}
