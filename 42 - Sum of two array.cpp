#include <iostream>
#include <vector>
#include <algorithm> // Reverse function ke liye zaroori hai
using namespace std;

int main()
{
    int arry[5] = {1, 2, 3, 4, 5};
    int arry2[5] = {10, 4, 5,100,5};
    vector<int> ans;
    
    int i = 4, j = 4, carry = 0;


    while (i >= 0 || j >= 0 || carry) {
        int sum = carry; 

        if (i >= 0) sum += arry[i]; 
        if (j >= 0) sum += arry2[j]; 

        ans.push_back(sum % 10); 
        carry = sum / 10; 

        i--; 
        j--; 
    }

    reverse(ans.begin(), ans.end());

   
    cout << "Sum: ";
    for (int num : ans) {
        cout << num;
    }
    cout << endl;

    return 0;
}
