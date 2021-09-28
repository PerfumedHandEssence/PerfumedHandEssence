#include<iostream>
using namespace std;

int main() {
  //빠른입출력?
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int N;
    int a, b;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> a >> b;
        cout << a + b<<"\n";
    }
}
