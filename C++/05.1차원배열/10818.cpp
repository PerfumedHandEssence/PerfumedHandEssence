#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int *a = new int[N];

    int top = -1000000;
    int bottom = 1000000;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (a[i] > top)
            top = a[i];
        if (a[i] < bottom)
            bottom = a[i];
    }
    printf("%d %d", bottom ,top);
}
