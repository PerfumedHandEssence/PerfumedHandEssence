// https://school.programmers.co.kr/learn/courses/30/lessons/147355

#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    bool isOk;
    for (int i = 0; i < t.length()-p.length()+1; i++)
    {
        isOk = true;
        
        for (int j = 0; j < p.length() && isOk; j++)
        {

            if (t[i+j] == p[j])
            {
                if (j == p.length()-1 && isOk)
                {
                    answer++;
                }
                continue;
            }
            else if (t[i + j] > p[j])
            {
                isOk = false;
            }
            else {
                answer++;
                break;
            }
            if (j == p.length() && isOk)
            {
                answer++;
            }
        }

    }

    return answer;
}
