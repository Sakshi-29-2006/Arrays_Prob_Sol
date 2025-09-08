#include <iostream>
#include <string>
using namespace std;
class Array{
	private:
		int arr1[20],size;
	public:
		//function for creating an array
		void createArray(){
			cout<<"Enter size of array: ";
			cin>>size;
			cout<<"Enter "<<size<<" elements: "<<endl;
			for(int i = 0;i < size;i++){
				cin>>arr1[i];
			}
		}
		//function for displaying an array
		void displayArray(){
			cout<<"<---ARRAY--->"<<endl;
			for(int i = 0;i < size;i++){
				cout<<arr1[i]<<" ";
			}
			cout<<endl;
		}
		//function for reversing an array
		void reverseArray(){
			cout<<"<---REVERSE ARRAY--->"<<endl;
			for(int i = size - 1;i >= 0;i--){
				cout<<arr1[i]<<" ";
			}
			cout<<endl;
		}
};
int main(){
	//creating object of the class Array
	Array a1;
	a1.createArray();
	a1.displayArray();
	a1.reverseArray();
}
