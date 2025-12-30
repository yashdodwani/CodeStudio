/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    Node*fast = head;
    Node*slow = head;
    
    
    while(fast!=NULL && fast->next!= NULL){
        
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            Node*temp=slow->next;
            int cnt = 1;
            while(temp!=slow){
                cnt++;
                temp=temp->next;
            }
            
            return cnt;
        }
    }
    return 0;
}
