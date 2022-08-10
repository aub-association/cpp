#include <iostream>
using namespace std;
int main()
{ 
    double firstArr[] = {1, 2, 3, 4, 5};

    double secondArr[] = {1, 2, 3, 4, 5, 6};

    double evenMedian;

    evenMedian = ((firstArr[2] + secondArr[3]) / 2);

    cout << "Even Median= " << evenMedian << endl;

    return 0;
}
