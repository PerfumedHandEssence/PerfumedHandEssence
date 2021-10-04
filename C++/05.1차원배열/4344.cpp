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

    for (int i = 0; i < N; i++) {
        int p;
        cin >> p;
        int arr[p];
        int sum = 0;
        for (int j = 0; j < p; j++) {
            cin >> arr[j];
            sum += arr[j];
        }
        double mid = double(sum) / double(p);
        int count = 0;
        
        for (int j = 0; j < p; j++) {
            if (double(arr[j]) > mid) count++;
        }
        cout << fixed;
        cout.precision(3);
        cout << ((double)count / double(p))*100 << "%\n";
    }
}
