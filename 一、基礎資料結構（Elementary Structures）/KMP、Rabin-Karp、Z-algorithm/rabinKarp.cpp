#include <bits/stdc++.h>
using namespace std;

int64_t power(int b, int p) {
    int64_t res = 1;
    for (int i = 0; i < p; ++i)  
        res *= b; 
    return res;
}

int64_t calculation(string str, map<char, int> code) { //base for 10, avoid spurious hits
    int64_t s = str.size(), tmp = s - 1, res = 0;
    for (int i = 0; i < s; ++i) 
        res += code[str[i]] * power(10, tmp--);
    return res;
}

int rabin_Karp(string t, string p, map<char, int> code) {
    int64_t target = calculation(p, code), mod = power(10, p.size() - 1), rolling = calculation(t.substr(0, p.size()), code);
    for (int i = 0; i < t.size(); ++i) {
        if (rolling == target)
            return i;
        if (i < t.size() - p.size())
            rolling = (rolling % mod) * 10 + code[t[i + p.size()]];
    }
    return -1;
}

int main() {
    string T = "ababcabcabababd", pattern = "ababd";
    map<char, int> hashCode;
    for (int i = 0; i < 26; ++i) 
        hashCode['a' + i] = i + 1;
    cout << rabin_Karp(T, pattern, hashCode) << '\n'; 
}
