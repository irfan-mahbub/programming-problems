#include <iostream>
using namespace std;

int main() {
    int n;
    string name[100];
    int attendence[100];

    cout << "enter number of students : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "enter name of student " << i + 1 << ": ";
        cin >> name[i];

        cout << "enter attendance (1 = present, 0 = absent): ";
        cin >> attendence[i];
    }

    int present = 0, absent = 0;

    cout << "\nabsent student name :";
    for (int i = 0; i < n; i++) {
        if (attendence[i] == 1) present++;
        else {
            absent++;
            cout << name[i] << endl;
        }
    }

    cout << "\ntotal present: " << present << endl;
    cout << "total absent: " << absent << endl;

    return 0;
}