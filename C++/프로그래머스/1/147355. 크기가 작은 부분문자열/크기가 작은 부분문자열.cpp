#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.length();
    long long target = stoll(p);

    for (int i = 0; i <= (int)t.length() - len; i++) {
        string sub = t.substr(i, len);
        long long num = stoll(sub);

        if (num <= target) {
            answer++;
        }
    }

    return answer;
}