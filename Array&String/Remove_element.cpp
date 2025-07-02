#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int index=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[index]=nums[i];
            index++;
        }
       }
       return index;
    }
};



int main(){
    int n,val;
    cout<<"enter the no of elements"<<endl;
    cin>>n;

    vector <int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
  cout<<"enter the value to remove from the array "<<endl;
    cin>>val;

    Solution sol;

    int newlength=sol.removeElement(nums,val);

    

    for(int i=0;i<newlength;i++){
        cout<<nums[i]<<" ";
    }





}