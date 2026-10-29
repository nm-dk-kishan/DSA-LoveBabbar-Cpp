class Solution {
	public:
	int maxIndexDiff(vector<int>& arr) {
	    int n = arr.size();
	    
	    vector<int> leftMin(n);
	    vector<int> rightMax(n);
	    
	    leftMin[0] = arr[0];
	    for(int i=1;i<n;i++){
	        leftMin[i] = min(leftMin[i-1],arr[i]);
	        
	    }
	    
	    rightMax[n-1] = arr[n-1];
	    for(int j=n-2;j>=0;j--){
	        rightMax[j] = max(rightMax[j+1],arr[j]);
	    }
	    
	    int i=0,ans=0,j =0;
	    
	    while(i<n && j<n){
	        if(leftMin[i] <= rightMax[j]){
	            ans = max(ans,j-i);
	            j++;
	        }
	        else{
	            i++;
	        }
	    }
	    return ans;
	    
	    //OR
	    
	    
		// TLE ->
// 		int m = 0;
		
// 		for (int i = 0; i<arr.size(); i++) {
// 			for (int j = i + 1; j<arr.size(); j++) {
				
// 				if (arr[i] <= arr[j]) {
// 					int temp =  j-i;
					
// 					m = max(m, temp);
// 				}
				
// 			}
// 		}
// 		return m;
	}
};
