#include <string>
#include <vector>

using namespace std;

int solution(string s) {
   int booho = 1;
    int result = 0;
    int index = 0;
    
    if (s[0] == '-')
    {
        booho = -1;
        index = 1;
    }
    else if(s[0] == '+'){
        index = 1;
    }
    
    for(int i = index; i < s.length(); i++)
    {

    result = result * 10 + (s[i] - '0');
    }
    return result * booho;
}