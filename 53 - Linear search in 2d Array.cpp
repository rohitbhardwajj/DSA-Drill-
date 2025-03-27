#include <iostream>
using namespace std;

int main(){
    
    int n,target;
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
    cout<<"Enter the element u want to search in 2d array : "<<endl;
    cin>>target;
    bool flag =false;
     for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arry[i][j]==target){
                cout<<"Present at row number "<<i<<" Coloumn number "<<j<<endl;
                flag=true;
                break;
                
            }
        }
    }
    if(flag==false){
        cout<<"Not present : ";
    }
}