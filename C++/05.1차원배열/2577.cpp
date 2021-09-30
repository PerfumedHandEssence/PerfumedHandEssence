#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int array[10] = {0,0,0,0,0,0,0,0,0,0};
    int A, B, C;
    cin >> A >> B >> C;
    //scanf_s("%d %d %d", &A, &B, &C);
    int ans = A * B * C;

    while (ans > 0)
    {
        array[ans % 10]++;
        ans = ans / 10;
    }
    for (int i = 0; i <= 9; i++)
        printf("%d\n", array[i]);
}
