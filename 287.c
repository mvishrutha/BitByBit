int findDuplicate(int* nums, int numsSize) {
    int* seen = calloc(numsSize, sizeof(int));  
    for(int i=0;i<numsSize;i++){
        if (seen[nums[i]]==1){
            return nums[i];
        }
        seen[nums[i]]=1;
       
        
    }
return -1;
}
