#include <iostream>
using namespace std;

int main(){
    
    int n,target,sum=0;
    cout<<"Enter how many rows : ";
    cin>>n;
    int m;
    cout<<"Enter how many coloumn : ";
    cin>>m;
    int arry[n][m];
    cout<<"Enter elemnt in"<<n<<" rows "<<m<<" coloumn : " <<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arry[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
           sum=0;
        for(int j=0 ; j<m ; j++){
            sum+=arry[i][j];
        }
        cout<<i<<" = "<<sum<<endl<<endl;
     
    }
   
}