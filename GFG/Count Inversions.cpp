class Solution {
  public:
    long long merge(vector<int> &arr,int low,int mid,int high){
        vector<int> temp;
        int left = low;
        int right = mid+1;
        long long invcount=0;
        
        
        while(left<=mid && right<=high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                invcount+= (mid-left+1);
                right++;
            }
        }
        
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
            
        }
        
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
            
        }
        
        for(int i = low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        
        return invcount;
        
        
        
    }
    
    long long mergesort(vector<int> &arr,int low,int high){
        
        if(low>=high){
            return 0;
        }
        
        int mid = low + (high-low)/2;
        
        long long invcount = 0;
        
        invcount += mergesort(arr,low,mid);
        invcount += mergesort(arr,mid+1,high);
        invcount +=merge(arr,low,mid,high);
        
        return invcount;
    }
  
    int inversionCount(vector<int> &arr) {
        
        return mergesort(arr,0,arr.size()-1);
    }
};