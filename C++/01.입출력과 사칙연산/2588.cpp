#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    cout << a *(b%10) << endl;
    cout << a * ((b%100)/10) << endl;
    cout << a * (b/100) << endl;
    cout << a * b;

/*  input : 472
*           385
    result: 2360
            3776
            1416
            181720
*/
}
