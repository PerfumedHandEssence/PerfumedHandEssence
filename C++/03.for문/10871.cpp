#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a>>b;

    int in;
    for (int i = 0; i < a; i++) {
        cin >> in;
        if (in < b)
            cout << in << " ";
    }
}


/*동적으로 배열할당하기
#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int* array = new int[a];
    for (int i = 0; i < a; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < a; i++)
        if (array[i] < b)
            cout << array[i] << " ";
}
*/
