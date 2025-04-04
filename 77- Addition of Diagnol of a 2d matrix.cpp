#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter row ";
    cin>>n;
    int** arr = new int*[n];
    int sum=0;
    for(int i=0 ; i<n ; i++){
        arr[i] = new int[n];
    }
    cout<<"Enter elemnt in a 2d array : "<<endl;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0 ; i<n ; i++){
        sum+=arr[i][i];
        if(i!=n-i-1){
            sum+=arr[i][n-i-1];
        }
    }
    
    cout<<sum;

    return 0;
}
