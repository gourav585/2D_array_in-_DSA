#include<iostream>
using namespace std;
void searching(int arr[][100],int n ,int m,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                 cout << "Key found at position: (" << i << ", " << j << ")" << endl;
                 return;
            }
        }
    }
   cout<<"your key is not found"<<endl;
}
int main(){
    int n,m;
    cout<<"enter your row and col"<<endl;
    cin>>n>>m;
    int arr[100][100];
    cout<<"enter your elements in array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"this is your array elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key ;
    cout<<"enter your key"<<endl;
    cin>>key;
    searching(arr,n,m,key);
}
