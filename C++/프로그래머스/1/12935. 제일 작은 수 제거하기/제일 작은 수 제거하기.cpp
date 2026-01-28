#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;             
    int value = arr[0];
    int index = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < value)
        {
            value = arr[i];
            index = i;
        }   
    }
   arr.erase(arr.begin() + index);
   if(arr.size() == 0)
   {
       arr.push_back(-1);
   }

    return arr;
}

