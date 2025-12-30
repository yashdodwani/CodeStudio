#include<stack>
bool isPalindrome(Node *head)
{
        Node*fast = head;
        Node*slow = head;
        stack<int> st;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            st.push(slow->data);
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next==NULL){
            slow=slow->next;
        }
        else{
            st.push(slow->data);
            slow=slow->next;
        }
        while(slow!=NULL){
            if(slow->data!=st.top()){
                return false;
            }
            st.pop();
            slow=slow->next;
        }
        return true;
}
