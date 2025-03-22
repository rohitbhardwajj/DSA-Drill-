#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arry1[3] = {1, 3, 4};
    int arry2[2] = {3, 4};
    vector<int> ans;
    int i = 0, j = 0;

    while (i < 3 && j < 2) {  
        if (arry1[i] < arry2[j]) {
            i++;
        } else if (arry1[i] > arry2[j]) {
            j++;
        } else {
            ans.push_back(arry1[i]);
            i++;
            j++;
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
