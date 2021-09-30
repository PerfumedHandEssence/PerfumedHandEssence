#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a[9];
    int mx = 0;
    int position = 0;
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
        if (a[i] > mx){
            mx = a[i];
            position = i+1;
        }
    }
    printf("%d\n%d", mx ,position);
}
