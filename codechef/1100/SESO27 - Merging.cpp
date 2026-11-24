#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& first, const vector<int>& second) {
    int n = first.size();
    int m = second.size();
    vector<int> mergedArray;
    mergedArray.reserve(n + m);  // Reserve space for the merged array

    int i = 0, j = 0;

    // Merge the arrays while both have elements remaining
    while (i < n && j < m) {
        if (first[i] <= second[j]) {
            mergedArray.push_back(first[i]);
            i++;
        } else {
            mergedArray.push_back(second[j]);
            j++;
        }
    }

    // If any elements are left in first, add them to mergedArray
    while (i < n) {
        mergedArray.push_back(first[i]);
        i++;
    }

    // If any elements are left in second, add them to mergedArray
    while (j < m) {
        mergedArray.push_back(second[j]);
        j++;
    }

    return mergedArray;
}

int main() {
    int n, m;
    cin >> n;
    vector<int> first(n);
    for (int i = 0; i < n; i++) {
        cin >> first[i];
    }

    cin >> m;
    vector<int> second(m);
    for (int i = 0; i < m; i++) {
        cin >> second[i];
    }

    vector<int> mergedArray = mergeSortedArrays(first, second);
    for (int i = 0; i < mergedArray.size(); i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}