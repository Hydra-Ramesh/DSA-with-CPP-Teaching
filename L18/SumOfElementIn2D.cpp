#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;

	cout<<"Enter the number of Row: ";
	cin>>n;
	cout<<"Enter the number of Column: ";
        cin>>m;
	int arr[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int sum=0;
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        cout<<arr[i][j]<<" ";
                }
		cout<<endl;
        }
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        sum+=arr[i][j];
                }
        }
	cout<<endl;
	cout<<"The sum of all Element is: "<<sum;
	return 0;
}
