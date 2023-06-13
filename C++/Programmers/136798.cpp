https://school.programmers.co.kr/learn/courses/30/lessons/136798


#include <string>
#include <vector>
#include <math.h>

using namespace std;

int func(int n) {
    int ans = 2;

    for (int i = 2; i <= (int)pow(n,0.5) ; i++)
    {
        if (n/i == i && n%i==0)
        {
            ans++;
            break;;
        }
        else if (n%i==0)
        {
            ans+=2;
        }
    }
    return ans;
}

int solution(int number, int limit, int power) {
    int answer = 1;

    for (int i = 2; i <= number; i++)
    {
        int n = func(i);

        if (n>limit)
        {
            answer += power;
        }
        else
        {
            answer += n;
        }
    }



    return answer;
}
