#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {
    int count[26] = {0};
    if (s.length() != t.length())
        return false;

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0)
            return false;
    }
    
  return true;
 }

int main() {
    cout << isAnagram("note", "tone") << endl;
    cout << isAnagram("rat", "cat") << endl;
    return 0;
}

