/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int i, *p = NULL;
    int v = numsSize*2;
    p = (int *)malloc(sizeof(int)*v);
    *returnSize = v;
    for(i=0;i<numsSize;i++){
        *(p + i) = *(nums + i);              // Fill first half
        *(p + i + numsSize) = *(nums + i);   // Fill second half
    }
    return p;
}