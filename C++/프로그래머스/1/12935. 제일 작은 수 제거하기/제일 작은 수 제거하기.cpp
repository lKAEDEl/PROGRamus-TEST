#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
  
    if (arr.size() == 1) {
        return {-1};
    }

    
    int minValue = *min_element(arr.begin(), arr.end());

    vector<int> answer;

   
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != minValue) {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}
