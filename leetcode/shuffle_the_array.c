

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int i, *p=NULL;
    p = (int*) malloc(sizeof(int)*numsSize);
    *returnSize = numsSize;
    for(i=0;i<n;i++){
        *(p+i*2) = *(nums+i);
        *(p+i*2+1) =  *(nums+i+n);
    }
    return p;
}