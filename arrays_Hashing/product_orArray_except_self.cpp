class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre_prod=1,post_prod=1;
        vector<int> prefix_prod,sufix_prod;
        for(int i=0;i<nums.size();i++){
            if (i!=0) pre_prod=pre_prod*nums[i-1];
            prefix_prod.push_back(pre_prod);
        }
        for(int i=nums.size()-1;i>=0;--i){
            if (i!=nums.size()-1) post_prod=post_prod*nums[i+1];
            sufix_prod.insert(sufix_prod.begin(),post_prod);
        }
        vector<int>res(nums.size());
        for(int n:prefix_prod) cout<<n<<" ";
        cout<<endl;
        for(int n:sufix_prod) cout<<n<<" ";
        for(int i=0;i<nums.size();i++) res[i]=prefix_prod[i]*sufix_prod[i];
        return res;
    }
};
//more optimized and cleaner code
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
    
//     int n = nums.size();
//     vector<int> pd2(n, 1);
//     vector<int> pd1(n, 1);
//     vector<int> result(n);
 
//     for (int i = 1; i < n; i++) {
//         pd1[i] = pd1[i-1] * nums[i-1];
//     }


    
//     for(int i = n-2; i >= 0; i-- ){
//         pd2[i] = pd2[i+1] * nums[i+1];
//     }


//     for(int i = 0; i < n; i++ ){
//         result[i] = pd1[i] * pd2[i];
//     }
//     return result;
    
//     }
// };
