#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    string s;
    cin >> t;
    bool hasil;

    for (int i = 0; i < t; i++) {
        hasil = true;
        cin >> s;
        int len = s.length();

        for (int j=0; j < s.length(); j++) {
            if (s[j] == 'a' || s[j] == 'i' || s[j] == 'u' || s[j] == 'e' || s[j] == 'o') {
                if (j+2 >= len || s[j+1] != 'g' || s[j+2] != s[j]) {
                    hasil = false;
                    break;
                }
                j+=2;
            }
        }
         if (hasil) cout << "Begenagar\n";
         else cout << "Sagalagah\n";
    }
}