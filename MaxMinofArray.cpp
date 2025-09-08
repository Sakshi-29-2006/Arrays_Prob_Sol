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
		// function for finding minimum and maximum element of an array
	    void findMinMax() {
	        int min_ele, max_ele;
	        int i;
	
	        // If there are even number of elements
	        if (size % 2 == 0) {
	            if (arr1[0] < arr1[1]) {
	                min_ele = arr1[0];
	                max_ele = arr1[1];
	            } 
				else {
	                min_ele = arr1[1];
	                max_ele = arr1[0];
	            }
	            i = 2; // start from 3rd element
	        } 
			else {
	            // If there are odd number of elements
	            min_ele = max_ele = arr1[0];
	            i = 1; // we start from 2nd element
	        }
	
	        // Looping through pairs
	        while (i < size - 1) {
	            if (arr1[i] < arr1[i + 1]) {
	                if (arr1[i] < min_ele){
						min_ele = arr1[i];
					}	
	                if (arr1[i + 1] > max_ele){
						max_ele = arr1[i + 1];
					}
	            } 
				else {
	                if (arr1[i + 1] < min_ele){
						min_ele = arr1[i + 1];
					}
	                if (arr1[i] > max_ele){
						max_ele = arr1[i];
				}
	            }
	            i += 2; // move to next pair
	        }
	
	        cout << "Minimum of array: " << min_ele << endl;
	        cout << "Maximum of array: " << max_ele << endl;
	    }
};
int main(){
	//creating object of class Array
	Array a1;
	a1.createArray();
	a1.displayArray();
	a1.findMinMax();
}
}

