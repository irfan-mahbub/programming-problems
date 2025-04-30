#include <iostream>
using namespace std;

int main()
{
    string word;
    int count = 0;

    cout << "enter any word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        char c = word[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }

    cout << "number of vowels = " << count << endl;

    return 0;
}