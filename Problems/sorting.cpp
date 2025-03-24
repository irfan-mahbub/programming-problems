#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> names(3);
    for (int i = 0; i < 3; i++) {
        cin >> names[i];
    }
    sort(names.begin(), names.end());
    for (auto name : names) {
        cout << name << "\n";
    }    
}