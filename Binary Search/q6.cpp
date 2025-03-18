
#include<iostream>
using namespace std;
int  indTarget(int nums[], int target){
    int s = 0;
    int e = 4;
    int m = s + (e - s)/2;
    int pivot = 0;
    int b = -1;
    while(s<=e){
        if((nums[m] <nums[m-1]) && (nums[m] < nums[m-1])){
            pivot = m;
            break;
        }
        else if(nums[m]>nums[m+1]){
            s = m + 1;
        }
        else{
            e = m;
        }
        m = s + (e - s)/2;
    }

    if(target > nums[pivot] && target < nums[4]){
        s = pivot;
        e = 4;
        int m = s + (e - s)/2;
        while(s<=e){
            if(nums[m]==target){
                b = m;
                break;
            }
            else if(target > nums[m]){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
            m = s + (e - s)/2;
        }
        
    }
    else if(target == nums[pivot]){
        return pivot;
    }
    else{
        s = 0;
        e = pivot-1;
        int m = s + (e - s)/2;
        while(s<=e){
            if(nums[m]==target){
                b = m;
                break;
            }
            else if(target > nums[m]){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
            m = s + (e - s)/2;
        }
    }
    return b;
}
int main(){
    int nums[5] = {4, 5, 1, 2, 3};
    int target = 2;
    cout << indTarget(nums, target);

    return 0;
}

