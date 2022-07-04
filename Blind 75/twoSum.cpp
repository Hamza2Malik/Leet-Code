#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target ){
    vector<int> ans;
    
    unordered_map<int,int> m;
    for(int i = 0;i<nums.size();i++){
        int diff = target - nums[i];
        if(m.find(diff) != m.end()){
            ans.push_back(m[diff]);
            ans.push_back(i);
        }
        m[nums[i]]= i;
    }
    return ans;
}

void twoSumPointer(int nums[], int target,int size ){
    int l = 0;
    int r = size - 1;

    
    while(l<r){
        if ((nums[l] + nums[r])==target )
        {
           cout<<l<<"   "<<r<<endl;
           break;
        }
        else if((nums[l] + nums[r])<target){
            l++;
        }
        else{
            r--;
        }
        
    }
   
 
}

int main(){

vector<int> a {1,2,3,5};

int target = 4;


// for (int i = 0; i < a.size(); i++)
//         cout << a[i] << " ";


int arr[]={1,2,3,5};
int size = sizeof(arr)/sizeof(arr[0]);
cout<<size;


twoSumPointer(arr,target,size);


}

