#include <bits/stdc++.h>

using namespace std;

int getTheAnswer() {
    return 42;
}

vector<int> readArrayInt(istream& in, unsigned long n) {
    vector<int> ar(static_cast<unsigned long>(n));
    for (int i = 0; i < n; ++i) in >> ar[i];
    return ar;
}