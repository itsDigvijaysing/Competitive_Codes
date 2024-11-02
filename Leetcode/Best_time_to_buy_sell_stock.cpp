/* You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. 

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
*/



//Time Complexity exceeded error
// O(n^2) solution

/*
#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int n = 0; //final ans
    int max = prices[0];
    for(int i=0; i<prices.size()-1; i++){
        for(int j=i+1; j<prices.size(); j++){
            if(prices[j] - prices[i] > n){
                n = prices[j] - prices[i];
            }
        }
    }
    // cout<<n;
    return n;
}

int main(){
    cout<<"Best Time to Buy & Sell Stock\n";
    cout<<"Max profit will be: ";
    vector<int> prices = {7,1,5,3,6,4};
    cout<< maxProfit(prices);
    cout<<"\n";
    return 0;
}
*/


//Optimized solution
// O(n) solution

#include <iostream>
#include <vector>
#include <algorithm>

int maxProfit(std::vector<int>& prices) {
    if (prices.empty()) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
        // Update the minimum price if a lower one is found
        minPrice = std::min(minPrice, prices[i]);
        // Calculate profit if we sell at prices[i], and update maxProfit if it's larger
        maxProfit = std::max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

int main() {
    std::vector<int> prices = {10, 1, 7, 2, 5, 3, 6, 4};
    std::cout << "Maximum Profit: " << maxProfit(prices) << std::endl;
    return 0;
}
