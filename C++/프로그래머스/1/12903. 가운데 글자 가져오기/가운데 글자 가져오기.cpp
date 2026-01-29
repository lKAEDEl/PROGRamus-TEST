#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int len = s.length();
    
    // 길이가 홀수일 때
    if (len % 2 == 1) {
        return string(1, s[len / 2]);
    }
    // 길이가 짝수일 때
    else {
        return s.substr(len / 2 - 1, 2);
    }
}
