#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
     int GCD = gcd(n, m);
    int LCM = (n * m) / GCD;
    
    answer.push_back(GCD);
    answer.push_back(LCM);
    
    return answer;
}