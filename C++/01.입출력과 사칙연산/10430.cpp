#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b)%c << endl;
    cout << ((a%c)+(b%c))%c << endl;
    cout << (a*b)%c << endl;
    cout << ((a%c)*(b%c))%c << endl;

/*  input : 5 8 4
    result: 1
            1
            0
            0
*/
}
