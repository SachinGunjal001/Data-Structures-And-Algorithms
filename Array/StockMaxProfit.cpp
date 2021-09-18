#include<bits/stdc++.h>
using namespace std;

int StockProfit(int price[], int start, int end)
{
    // if initial price is high there will be no profit
    if(end <= start){
        return 0;
    }
    int profit = 0;
    for(int i = start; i < end; i++){
        for(int j = i+1; j <= end; j++){
            if(price[j] > price[i]){
                //Current profit
                int CurrentProfit = price[j]-price[i] +
                    StockProfit(price, start, i-1) +
                    StockProfit(price, j+1, end);

                    //update highest profit
                    profit = max(profit, CurrentProfit);
            }
        }
    }
    return profit;
}

int main()
{
    int n;
    cout<<" Number of days which we find profit from stock: ";
    cin>>n;
    int price[n];
    cout<<"Enter the profit you got on that day: ";
    for(int i = 0; i < n; i++){
        cin>>price[i];
    }
    cout<<StockProfit(price, 0, n-1);
    return 0;
}
