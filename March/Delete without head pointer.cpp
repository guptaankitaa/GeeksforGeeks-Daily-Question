class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
       Node* temp = del_node;
       temp->data = temp->next->data;
       temp->next = temp->next->next;
       
    }

};
