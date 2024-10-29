#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
   long long odd = 0;
    for (int i = 0;i <n;i++) {
       long long num;
        cin >>num;
       sum +=num;

        if (num %2 != 0) {
            if (odd== 0 || num < odd) {
                odd= num;
            }
        }
    }

    if (sum % 2!=0 && odd > 0) {
        sum -=odd;
    }

    cout <<sum<< endl;
    return 0;
}
