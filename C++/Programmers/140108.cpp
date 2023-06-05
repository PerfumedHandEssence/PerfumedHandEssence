//https://school.programmers.co.kr/learn/courses/30/lessons/140108

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char cX1 = ' ';
    int nX1 = 0, nX2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (cX1 == ' ')
        {
            cX1 = s[i];
            nX1++;
            continue;
        }
        if (cX1 == s[i])
        {
            nX1++;
        }
        if (s[i] != cX1)
        {
            nX2++;
            if (nX1 == nX2)
            {
                answer++;
                cX1 = ' ';
                nX1 = 0;
                nX2 = 0;
            }
        }
    }
    if (nX1 !=0)
    {
        answer++;
    }



    return answer;
}
