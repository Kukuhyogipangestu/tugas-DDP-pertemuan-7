#include<iostream>
using namespace std;

int main(){
	int n;
	int x;
	cout<<"masukkan kolom :";
	cin>>n;
	cout<<"masukkan baris :";
	cin>>x;
	for(int i=1;i<=n;i++){
		for(int j=x;j>=1;j--){
			cout<<"|__|";
		}
		cout<<endl;
	}
}
