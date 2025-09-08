#include <iostream>
using namespace std;
//function to move the negative and positive elements
void move(int arr1[],int size){
	int l = 0,r = size - 1;
	while(l <= r){
		if(arr1[l] < 0 && arr1[r] > 0){
			l++;
			r--;
		}
		else if(arr1[l] < 0 && arr1[r] < 0){
			l++;
		}
		else if(arr1[l] > 0 && arr1[r] > 0){
			r--;
		}
		else{
			swap(arr1[l],arr1[r]);
			l++;
			r--;
		}
	}
}

int main(){
	int n;
	//taking size of the array as input from user
	cout<<"Enter number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i = 0;i < n;i++){
		cin>>arr[i];
	}
	//calling the function move
	move(arr,n);
	//outputting the new array
	cout<<"Array after moving negative numbers at beginning and positive numbers at end: "<<endl;
	for(int i = 0;i < n;i++){
		cout<<arr[i]<<" ";
	}
}	
