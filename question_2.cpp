#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void printNGE(const vector<int>& arr) {
    stack<int> st;
    vector<int> nge(arr.size(), -1);

    for (int i = 0; i < arr.size(); ++i) {
        while (!st.empty() && arr[st.top()] < arr[i]) {
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " -> " << nge[i] << endl;
    }
}

int main() {
    vector<int> arr = {4, 5, 2, 25};
    printNGE(arr);
    return 0;
}