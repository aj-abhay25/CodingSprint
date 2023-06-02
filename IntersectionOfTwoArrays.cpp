class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
			sort(nums1.begin(), nums1.end());
			sort(nums2.begin(), nums2.end());
				
			int i = 0, j = 0;
	    vector<int> ans;
      int n = nums1.size();
      int m = nums2.size();
			set<int> s;

	    while(i<n && j<m){
		
		    if(nums1[i]==nums2[j]){
			    s.insert(nums1[i]);
			    i++;
			    j++;

		    }
 
		    else if(nums1[i] < nums2[j]){
			    i++;
		    }

		    else{
			    j++;
		    }

	    }

			for(auto i : s) ans.push_back(i);
	    return ans;

    }
};