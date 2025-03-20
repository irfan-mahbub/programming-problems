#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "ENTER YOUR NUMBER: ";
    cin >> N;

    if (N % 3 == 0 && N % 5 == 0)
    {
        cout << "FizzBuzz" << "\n";
    }
    else if (N % 3 == 0)
    {
        cout << "Fizz" << "\n";
    }
    else if (N % 5 == 0)
    {
        cout << "Buzz" << "\n";
    }
    else
    {
        cout << N << "\n";
    }
    return 0;
}
