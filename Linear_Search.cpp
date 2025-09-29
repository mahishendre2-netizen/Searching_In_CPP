//Ananya Swadia
//24070123012

#include<iostream>
#include<vector>

class SearchArray{
    public:
    int linearSearch(const std::vector<int>& arr, int target){
        for(size_t i=0; i<arr.size();i++){
            if(arr[i]==target){
                return 1;
            }
        }
        return -1;
    }
};

int main (){
    std::vector<int> data={2,3,4,5,6,7,8,9,12,34,67};
    int targetValue=23;
    SearchArray searcher;
    int index = searcher.linearSearch(data,targetValue);
   
    if(index != -1){
        std::cout<<"Target "<<targetValue<<" found at index "<<index<<std::endl;
    }
    else {
        std::cout<<"Target "<<targetValue<<" not found in the array."<<std::endl;
    }
}

/* output 
Target 23 not found in the array.
*/
