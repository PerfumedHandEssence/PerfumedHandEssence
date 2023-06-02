#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <sstream>
#include <bitset>
using namespace std;


string to_binary(int num) {
    string s = "";
    while (num > 0) {
        if (num % 2 == 1) s = "1" + s;
        else s = "0" + s;
        num >>= 1;
    }
    return s;
}
vector<int> solution(string s) {

    int e = 1;
    int result = 0;
    for (int i = s.length()-1; i >=0; i--)
    {
        for (int j = 0; j<s.length()-i-1; j++)
        {
            e *= 2;
        }
        if (s[i]=='1')
        {
            result += e;
        }
        e = 1;
    }

    result;
    vector<int> answer;
    answer.push_back(0);
    answer.push_back(0);

    int max = 3;
    int now = 1;
    int temp = 0;
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);



    for (int i = 5; i <= 150000; i++)
    {
        temp = vec[now] + 1;
        vec.push_back(temp);
        if (temp == max)
        {
            vec.push_back(1);
            now = 1;
            max++;
            i++;
        }
        else {
            now++;
        }
    }
    answer;
    while (true) {
        temp = 0;
        if (vec[result] == 1) {

            answer[1]++;
            return answer;
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='0')
            {
                answer[1]++;
            }
            else {
                temp++;
            }
        }
        result = temp;
        s = to_binary(temp);
        answer[0]++;
    }

    
    return answer;
}
