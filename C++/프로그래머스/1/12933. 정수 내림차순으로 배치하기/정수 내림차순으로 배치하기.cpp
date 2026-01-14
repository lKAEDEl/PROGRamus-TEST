#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string a = to_string(n);
    
    sort(a.begin(), a.end(), greater<char>());
    
 
    
    long long answer = stoll(a);
    return answer;
}