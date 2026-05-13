#include <iostream>
#include <vector>
using namespace std;

vector<int> fusion(const vector<int>& a, const vector<int>& b) {
    vector<int> c;
    size_t i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) c.push_back(a[i++]);
        else c.push_back(b[j++]);
    }
    while (i < a.size()) c.push_back(a[i++]);
    while (j < b.size()) c.push_back(b[j++]);
    return c;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
    vector<int> b = {2, 4, 6, 8, 10};
    vector<int> c = fusion(a, b);
    cout << "Tableau fusionné : ";
    for (int val : c) cout << val << " ";
    cout << endl;
    return 0;
}