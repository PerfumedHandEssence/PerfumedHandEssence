//https://school.programmers.co.kr/learn/courses/30/lessons/138477

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> vec;
    vec.push_back(score[0]);
    answer.push_back(vec[0]);
    for (int i = 1; i<score.size(); i++)
    {
        vec.push_back(score[i]);
        sort(vec.begin(), vec.end());
        if (vec.size() > k)
        {
            vec.erase(vec.begin());
        }
        answer.push_back(vec[0]);
    }
    
    answer;
    return answer;
}
