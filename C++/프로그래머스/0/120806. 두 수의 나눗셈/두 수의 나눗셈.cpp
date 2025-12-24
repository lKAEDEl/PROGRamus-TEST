#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    double nanugi = (double)num1 / num2;
    int answer = nanugi * 1000;
    return answer;
}