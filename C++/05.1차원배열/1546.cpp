#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int A;
    cin >> A;
    int array[1001] = {};

    double max = 0.0;
    double sum = 0.0;

    for (int i = 0; i < A; i++) {
        cin >> array[i];
        if (array[i] > int(max))
            max = double(array[i]);    
    }
    for (int i = 0; i<A;i++)
        sum += double(array[i])/max*100;
    cout << sum / A;
}
