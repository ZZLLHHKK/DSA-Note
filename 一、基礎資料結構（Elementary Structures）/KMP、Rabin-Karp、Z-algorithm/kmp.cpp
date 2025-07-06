#include <bits/stdc++.h>
using namespace std;

vector<int> create(string p) {
    int len = 0;
    vector<int> lps(p.size(), 0);
    for (int i = 1; i < p.size(); ++i) {
        while (len > 0 && p[i] != p[len]) len = lps[len - 1];
        if (p[i] == p[len]) len++;
        lps[i] = len;
    }
    return lps;
}

int kmp(string t, string p, vector<int> &lps) {
    int j = 0; 
    for (int i = 0; i < t.size(); ++i) {
        while (j > 0 && t[i] != p[j]) j = lps[j - 1];
        if (t[i] == p[j]) j++;
        if (j == p.size()) return i - j + 1; // return initial spot
    }
    return -1; // Not found
}

int main() {
    string T = "ababcabcabababd", pattern = "ababd";
    vector<int> table = create(pattern);
    cout << kmp(T, pattern, table) << '\n'; 
}
