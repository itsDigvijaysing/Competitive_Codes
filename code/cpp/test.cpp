// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;
    
//     while(t--){
//         int n, q;
//         cin >> n >> q;
        
//         vector<vector<long long>> M(n, vector<long long>(n, 0));
//         for(int r = 0; r < n; r++){
//             for(int c = 0; c < n; c++){
//                 cin >> M[r][c];
//             }
//         }
        
//         vector<vector<long long>> S(n+1, vector<long long>(n+1, 0));
//         vector<vector<long long>> Sr(n+1, vector<long long>(n+1, 0));
//         vector<vector<long long>> Sc(n+1, vector<long long>(n+1, 0));
        
//         for(int r = 1; r <= n; r++){
//             long long current_S = 0;
//             long long current_Sr = 0;
//             long long current_Sc = 0;
//             for(int c = 1; c <= n; c++){
//                 long long val = M[r-1][c-1];
//                 current_S += val;
//                 current_Sr += val * r;
//                 current_Sc += val * c;
                
//                 S[r][c] = S[r-1][c] + current_S;
//                 Sr[r][c] = Sr[r-1][c] + current_Sr;
//                 Sc[r][c] = Sc[r-1][c] + current_Sc;
//             }
//         }
        
//         string output_buffer;
//         output_buffer.reserve(q * 20);
//         for(int i = 0; i < q; i++){
//             int x1, y1, x2, y2;
//             cin >> x1 >> y1 >> x2 >> y2;
            
//             long long S_sub = S[x2][y2] - S[x1-1][y2] - S[x2][y1-1] + S[x1-1][y1-1];
//             long long Sr_sub = Sr[x2][y2] - Sr[x1-1][y2] - Sr[x2][y1-1] + Sr[x1-1][y1-1];
//             long long Sc_sub = Sc[x2][y2] - Sc[x1-1][y2] - Sc[x2][y1-1] + Sc[x1-1][y1-1];
            
//             int W = y2 - y1 + 1;
//             long long sum_val = (long long)W * (Sr_sub - (long long)x1 * S_sub) + (Sc_sub - (long long)(y1-1) * S_sub);
            
//             output_buffer += to_string(sum_val) + ' ';
//         }
        
//         cout << output_buffer << '\n';
//     }
    
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// void readMatrix(vector<vector<long long>>& matrix, int size) {
//     for (int i = 0; i < size; ++i) {
//         for (int j = 0; j < size; ++j) {
//             cin >> matrix[i][j];
//         }
//     }
// }

// void computePrefixSums(const vector<vector<long long>>& matrix, vector<vector<long long>>& sumMatrix, vector<vector<long long>>& rowSumMatrix, vector<vector<long long>>& colSumMatrix, int size) {
//     for (int i = 1; i <= size; ++i) {
//         long long rowSum = 0, rowWeightedSum = 0, colWeightedSum = 0;
//         for (int j = 1; j <= size; ++j) {
//             long long value = matrix[i-1][j-1];
//             rowSum += value;
//             rowWeightedSum += value * i;
//             colWeightedSum += value * j;

//             sumMatrix[i][j] = sumMatrix[i-1][j] + rowSum;
//             rowSumMatrix[i][j] = rowSumMatrix[i-1][j] + rowWeightedSum;
//             colSumMatrix[i][j] = colSumMatrix[i-1][j] + colWeightedSum;
//         }
//     }
// }

// long long querySum(const vector<vector<long long>>& sumMatrix, const vector<vector<long long>>& rowSumMatrix, const vector<vector<long long>>& colSumMatrix, int x1, int y1, int x2, int y2) {
//     long long totalSum = sumMatrix[x2][y2] - sumMatrix[x1-1][y2] - sumMatrix[x2][y1-1] + sumMatrix[x1-1][y1-1];
//     long long rowWeightedSum = rowSumMatrix[x2][y2] - rowSumMatrix[x1-1][y2] - rowSumMatrix[x2][y1-1] + rowSumMatrix[x1-1][y1-1];
//     long long colWeightedSum = colSumMatrix[x2][y2] - colSumMatrix[x1-1][y2] - colSumMatrix[x2][y1-1] + colSumMatrix[x1-1][y1-1];

//     int width = y2 - y1 + 1;
//     return (long long)width * (rowWeightedSum - (long long)x1 * totalSum) + (colWeightedSum - (long long)(y1-1) * totalSum);
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int testCases;
//     cin >> testCases;

//     while (testCases--) {
//         int matrixSize, queries;
//         cin >> matrixSize >> queries;

//         vector<vector<long long>> matrix(matrixSize, vector<long long>(matrixSize, 0));
//         readMatrix(matrix, matrixSize);

//         vector<vector<long long>> sumMatrix(matrixSize + 1, vector<long long>(matrixSize + 1, 0));
//         vector<vector<long long>> rowSumMatrix(matrixSize + 1, vector<long long>(matrixSize + 1, 0));
//         vector<vector<long long>> colSumMatrix(matrixSize + 1, vector<long long>(matrixSize + 1, 0));

//         computePrefixSums(matrix, sumMatrix, rowSumMatrix, colSumMatrix, matrixSize);

//         string outputBuffer;
//         outputBuffer.reserve(queries * 20);

//         for (int i = 0; i < queries; ++i) {
//             int x1, y1, x2, y2;
//             cin >> x1 >> y1 >> x2 >> y2;

//             long long result = querySum(sumMatrix, rowSumMatrix, colSumMatrix, x1, y1, x2, y2);
//             outputBuffer += to_string(result) + ' ';
//         }

//         cout << outputBuffer << '\n';
//     }

//     return 0;
// }

// Above H




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &i : v) cin >> i;

//     vector<bool> used(200001, false); // To track if a number is already used
//     vector<int> freq(200001, 0); // To track occurrences of each number
//     int nextUnused = 1; // Smallest unused positive integer

//     // Mark the numbers in the input as used
//     for (int i : v) {
//         used[i] = true;
//     }

//     // Output result
//     for (int i : v) {
//         if (freq[i] == 0) {
//             // Number is not repeated yet
//             cout << i << " ";
//             freq[i]++;
//         } else {
//             // Find the smallest unused positive integer
//             while (used[nextUnused]) {
//                 nextUnused++;
//             }
//             cout << nextUnused << " ";
//             used[nextUnused] = true; // Mark it as used
//         }
//     }

//     return 0;
// }