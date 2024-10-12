#include<iostream>
using namespace std;
int main(){
	int row,col;
	cout<<"enter your row and col"<<endl;
	cin>>row>>col;
	int arr[row][col];
	cout<<"enter your array elements "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"this is your array"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
