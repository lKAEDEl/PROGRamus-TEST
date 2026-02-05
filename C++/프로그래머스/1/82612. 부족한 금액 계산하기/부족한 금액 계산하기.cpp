using namespace std;

long long solution(int price, int money, int count)
{
    long long totalcost = 0;
    
    for(int i = 1; i <= count; i++)
    {
        totalcost += price * i ;
    }
    if(money < totalcost)
    {
        return totalcost - money;
    }
    else
    {
        return 0;
    }
}