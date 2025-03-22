#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,target;

    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the target : ";
    cin>>target;
        int arry[n];
    
    for(int i=0 ; i<n ; i++){
        cin>>arry[i];
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arry[i]+arry[j]==target){
                cout<<arry[i]<<" + "<<arry[j]<<"="<<target <<endl;
            }
        }
    }
    
   

    return 0;
}
