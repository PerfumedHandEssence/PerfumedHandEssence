#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    cin.ignore();
    char c[81] = {0};
    for (int j = 0; j < N; j++) {
        cin.getline(c, 80);
        int sum = 0;
        int count = 1;
        for (int i = 0; i < 81; i++) {
            if (c[i] == 0) break;
            if (c[i] == 'O') {
                sum += count;
                count++;
            }
            else if (c[i] == 'X') {
                count = 1;
            }
            else break;
        }
        cout << sum<<'\n';
        for (int k = 0; k < 81; k++)c[k] = 0;
    }
}
