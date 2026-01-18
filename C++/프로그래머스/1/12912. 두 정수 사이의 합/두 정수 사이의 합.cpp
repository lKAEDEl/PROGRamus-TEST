#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    long long sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    long long answer = sum;
    return answer;
}