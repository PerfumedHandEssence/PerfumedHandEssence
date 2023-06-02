//https://school.programmers.co.kr/learn/courses/30/lessons/181187
//두 원 사이의 정수쌍

//첫 답안 실패 시간초과

long long solution(int r1, int r2) {
    long long answer = 0;
    long long llr1 = r1 * r1;
    long long llr2 = r2 * r2;


    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            long long temp = i * i + j * j;
            if ((temp >=llr1) && (temp<=llr2))
            {
                answer++;
            }
        }
    }
    
    answer += (r1 - r2 + 1);
    answer *= 4;
    return answer;
}

