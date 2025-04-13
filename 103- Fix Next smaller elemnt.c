vector<int> nextSmallerElement(vector<int> &arr, int n) {
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        int next = -1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                next = arr[j];
                break; // pehla chhota element mil gaya
            }
        }
        ans.push_back(next);
    }

    return ans;
}
