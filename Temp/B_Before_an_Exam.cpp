#include<iostream>
using namespace std;

int main(){
    int d, sumTime;
    cin >> d >> sumTime;
    int minTime[d], maxTime[d];
    int minSum = 0, maxSum = 0;
    for(int i = 0; i < d; i++){
        cin >> minTime[i] >> maxTime[i];
        minSum += minTime[i];
        maxSum += maxTime[i];
    }
    if(sumTime >= minSum && sumTime <= maxSum){
        cout << "YES" << endl;
        int remainingTime = sumTime - minSum;
        for(int i = 0; i < d; i++){
            int time = min(maxTime[i], minTime[i] + remainingTime);
            cout << time << " ";
            remainingTime -= time - minTime[i];
        }
    }else{
        cout << "NO";
    }
    return 0;
}