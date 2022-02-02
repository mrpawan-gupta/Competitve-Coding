int findKthLargest(vector<int> &nums, int k)
{
    // Take a max heap
    priority_queue<int> maxQ;
    // Insert element
    // Element would be inserted in a manner that lagest element is at the top
    for (int i = 0; i < nums.size(); i++)
    {
        maxQ.push(nums[i]);
    }
    // Take out the element k-1 times and kth element will be the required element
    for (int i = 0; i < k - 1; i++)
    {
        maxQ.pop();
    }
    // return that element
    return maxQ.top();
}