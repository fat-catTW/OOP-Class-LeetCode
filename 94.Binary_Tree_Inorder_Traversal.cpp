void recursive(struct TreeNode * ptr , int *arr, int* size)
{   
    if(ptr != NULL)
    {
        recursive(ptr -> left, arr, size);
        arr[(*size)++] = ptr -> val;
        recursive(ptr -> right, arr, size);
    }
}
int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* arr = (int*)malloc(100*sizeof(int));
    *returnSize = 0;
    recursive(root, arr, returnSize);
    return arr;
}