#include <vector>
#include <iostream>
//#include <bits/stdc++.h> 



class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = m -1;
        int j = n-1;
        int k = m+n-1;
        while(j>=0){
        if( i >= 0 && nums1[i] < nums2[j]){
            nums1[k--]= nums2[j--];
        }
        else{
            nums1[k--] = nums1[i--];
        }
        }
    }
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int> temp;
        int i = nums.size();
        int j = 0;
        int k = nums.size();
        while (j < i){
            if(nums[j] == val){
                nums.erase(nums.begin()+j);
                k--;
            }

        }
        return k;
    }

    void addit(int &test, int a,int b){

        test = a + b;

    }

};

int main(int argc, char const *argv[])
{   
    int test;
    int a = 5;
    int b = 7;
    Solution foo;
    std::vector<int> nums1({1,2,3,0,0,0});
    std::vector<int> nums2({2,5,6});

    /*Solution test;
    test.merge(nums1, 3, nums2, 3);
        for (int elem : nums1) {
        std::cout << elem << " ";
    }
    return 0;
    */
   foo.addit(test, a,b);
   std::cout  << test;

}
