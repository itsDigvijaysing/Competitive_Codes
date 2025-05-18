#include <iostream>
using namespace std;
 
int main()
{
    int w;
    std::cin >> w;
    if (w % 2 == 0 and w<=100 and w>=3)
    {
        cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}