#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int M;
        cin >> M;

        long long uxions = 1;
        long long growth = 1;

        for (int minute = 1; minute <= M; minute++)
        {
            if (minute % 2 == 0)
            {
                growth *= 2;
            }
            uxions += growth;
        }
        cout << uxions << endl;
    }
    
    return 0;
}
