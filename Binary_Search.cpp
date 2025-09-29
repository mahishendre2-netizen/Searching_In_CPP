//Ananya Swadia
//24070123012

#include<iostream>
#include<vector>

class SearchArray{
    public:
    int binarySearch(const std::vector<int>& arr, int target){
        int low =0;
        int high=arr.size()-1;
       
        while(low<=high){
            int mid=low+(high-low)/2;
           
        if(arr[mid]== target){
            return mid;
        }
        else if (arr[mid]<target){
            low = mid +1;
        }
        else {
            high =mid-1;
        }
        }
        return -1;
    }
};
int main (){
    std::vector<int> data={2,3,4,5,6,7,8,9,12,34,67};
    int targetValue=2;
    SearchArray searcher;
    int index = searcher.binarySearch(data,targetValue);
   
    if(index != -1){
        std::cout<<"Target "<<targetValue<<" found at index "<<index<<std::endl;
    }
    else {
        std::cout<<"Target "<<targetValue<<" not found in the array."<<std::endl;
    }
}

/* output 
Target 2 found at index 0
*/
