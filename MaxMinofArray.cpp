#include <iostream>
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
		//function for finding minimum element of an array
		void min_array(){
			int minimum = arr1[0];
			for(int i = 0;i < size;i++){
				if(arr1[i] < minimum){
					minimum = arr1[i];
				}
			}
			cout<<"Minimum of array: "<<minimum<<endl;
		}
		//function for finding maximum element of an array
		void max_array(){
			int maximum = arr1[0];
			for(int i = 0;i < size;i++){
				if(arr1[i] > maximum){
					maximum = arr1[i];
				}
			}
			cout<<"Maximum of array: "<<maximum<<endl;
		}
};
int main(){
	//creating object of class Array
	Array a1;
	a1.createArray();
	a1.min_array();
	a1.max_array();
}
