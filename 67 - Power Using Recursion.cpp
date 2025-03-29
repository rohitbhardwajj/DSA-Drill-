#include <iostream>
using namespace std;

int powr(int base , int power) {
 
 if(power==0) return 1; 
    int ans= base * powr(base ,power-1);
    return ans;
}

int main() {
    int base;
    cout << "Enter base : ";
    cin >> base;
    int power;
    cout << "Enter power : ";
    cin >> power;
    

    cout<<powr(base,power);
    
   

    return 0;
}


// approach--------------2



// #include <iostream>
// using namespace std;

// int powr(int base , int power) {
 
//  if(power==0) return 1; 
//  if(power==1) return base;
//     int ans= powr(base,power/2);
    
//     if(power%2==0) {
//         return ans* ans;
//     }else{
//         return base*ans*ans;
//     }
    
// }

// int main() {
//     int base;
//     cout << "Enter base : ";
//     cin >> base;
//     int power;
//     cout << "Enter power : ";
//     cin >> power;
    

//     cout<<powr(base,power);
    
   

//     return 0;
// }

