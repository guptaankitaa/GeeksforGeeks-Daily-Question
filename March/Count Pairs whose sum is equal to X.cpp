class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        /*
        // BruteForce:- Time: O(N*M), Space: O(1) where N = length(head1), and M = length(head2) {TIME LIMIT EXCEEDED}
        int result = 0;
        struct Node *curr = head1;
        while(curr != NULL){
            struct Node *temp = head2;
            while(temp != NULL){
                if(curr->data + temp->data == x)
                    result++;
                temp = temp->next;
            }
            curr = curr->next;
        }
        return result; */
        
        // Optimal Solution:  Time: O(N+M), space: O(N) where N=length(head1) and M=length(head2)
        int result = 0;
        unordered_set<int> set;
        while(head1 != NULL){
            set.insert(head1->data);
            head1 = head1->next;
        }
        while(head2 != NULL){
            if(set.find((x - head2->data)) != set.end())
                result++;
            head2 = head2->next;
        }
        return result;
        
    }
};
