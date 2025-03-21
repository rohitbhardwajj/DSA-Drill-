#include <iostream>
using namespace std;

int main()
{
    int ans=0;
    int arry[5]={1,2,3,4,4};
    
    for(int i=0 ; i<5 ; i++){
        ans=ans^arry[i];
    }
    for(int i=0 ; i<5 ; i++){
        ans=ans^i;
    }
    cout<<ans;

    return 0;
}


// approach -2 

// #include <iostream>
// using namespace std;

// int main()
// {
//     int ans=0,count;
//     int arry[5]={1,2,3,3,4};
    
//    for(int i=0 ; i<5 ; i++){
//        count=0;
//        for(int j=0 ; j<5 ; j++){
//            if(arry[i]==arry[j]){
//                count++;
//                ans=arry[i];
//            }
//        }
//        if(count==2){
//            cout<<ans;
//            break;
//        }
       
//    }

//     return 0;
// }

// approach-3

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     int arry[5] = {1, 2, 3, 3, 4}; 
//     unordered_map<int, int> freq;
    
//     // Frequency count
//     for (int i = 0; i < 5; i++) {
//         freq[arry[i]]++;
//     }

//     int maxFreq = 0, ans = -1;
    
//     // Find the most frequent element
//     for (auto it : freq) {
//         if (it.second > maxFreq) {
//             maxFreq = it.second;
//             ans = it.first;
//         }
//     }

//     cout << ans; 
//     return 0;
// }
