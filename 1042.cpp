#include<iostream>
#include<string>
using namespace std;
int main() {
    int l, i, a[256]={0}, m=0;
    char b;
    string c;
    getline(cin, c);
    l = c.length();
    for (i=0; i<l; i++) {
        if (c[i] <='Z' && c[i] >='A')
            c[i] = c[i]-'A'+'a';
        if (c[i] <='z' && c[i] >='a') {
            a[c[i]]++;
        }
    }
    for (i='a'; i<'z'; i++) {
        if (a[i] > m) {
            m = a[i];
            b = char(i);
        }
    }
    cout<<b<<" "<<m;
    return 0;
}

