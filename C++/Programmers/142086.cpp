//https://school.programmers.co.kr/learn/courses/30/lessons/142086

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int arr[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

    for (int i = 0; i < s.length(); i++)
    {
        if (arr[s[i] - 97] == -1)
        {
            answer.push_back(-1);
            arr[s[i] - 97] = 0;
        }
        else
        {
            answer.push_back(arr[s[i] - 97]);
            arr[s[i] - 97] = 0;
        }

        for (int j = 0; j < 26; j++)
        {
            if (arr[j] != -1)
            {
                arr[j]++;
            }
        }

    }




    return answer;
}
