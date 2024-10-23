#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void printFirstNegativeInteger(const vector<int>& arr, int k) {
    deque<int> dq;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) dq.push_back(i);

        if (i >= k - 1) {
            if (!dq.empty() && dq.front() < i - k + 1) dq.pop_front();
            cout << (dq.empty() ? 0 : arr[dq.front()]) << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr = {-8, 2, 3, -6, 10};
    int k = 2;
    printFirstNegativeInteger(arr, k);
    return 0;
}