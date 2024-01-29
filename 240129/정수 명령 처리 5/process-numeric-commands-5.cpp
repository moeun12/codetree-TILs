#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int n, b;
    vector<int> lis;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == "push_back") {
            cin >> b;
            lis.push_back(b);
        } else if (a == "pop_back") {
            lis.pop_back();
        } else if (a == "size") {
            cout << lis.size() << endl;
        } else if (a == "get") {
            cin >> b;
            cout << lis[b - 1] << endl;
        }
    }
    return 0;
}