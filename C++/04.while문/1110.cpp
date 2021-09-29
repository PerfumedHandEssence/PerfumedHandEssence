#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;

    int ans = a;
    
    int newNum = a-1;

    int count = 0;
    while (newNum!=ans) {
        newNum = (a % 10) * 10 + (a / 10 + a % 10) % 10;
        count++;
        a = newNum;
    }
    cout << count;
}
