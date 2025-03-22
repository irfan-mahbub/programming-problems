#include <iostream>
#include <string>

using namespace std;

int main() {
  string S;
  cin >> S;

  int n = 0;
  for (int i = 3; i < 5; i++) {
    n = n*10+(S[i]-'0');
}
if(n>=1 && n<=349 && n!=316) {
  cout << S << "IS A VALID CONTEST ABBREVIATION " << endl;
} else {
  cout << S << "IS NOT A VALID CONTEST ABBREVIATION " << endl;
}
  return 0;
}
