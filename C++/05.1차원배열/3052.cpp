#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int array[42] = {};
    int A;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        cin >> A;
        A %= 42;
        //배열 42개 다쓰는
        if (array[A] == 0) {
            array[A]++;
            count++;
        }
        /* 배열 10개만쓰는
        for (int i = 0; i < 10; i++) {
            cin >> A;
            A %= 42;
            array[i] = A;
            for (int j = 0; j <= i; j++) {
                if (j == i) {
                    count++;
                    break;
                }
                if (A == array[j]) break;
            }
        }
        */
    }
    printf("%d", count);        
}
