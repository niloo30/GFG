/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* addTwoNumbers(Node* l1, Node* l2) {

        Node* head = new Node(-1);
        int carry = 0;

        Node* temp = head;

        while (l1 || l2)
        {
            int val1 = 0;
            int val2 = 0;

            if (l1)
                val1 = l1->data;  // changed from val to data

            if (l2)
                val2 = l2->data;  // changed from val to data

            int sum = val1 + val2 + carry;
            temp->next = new Node(sum % 10);
            carry = sum / 10;

            temp = temp->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }

        if (carry)
            temp->next = new Node(1);

        return head->next;
    }

    Node* reverseList(Node* head) {
        
        Node* t = head;
        Node* prev = nullptr;
        if (head == nullptr || head->next == nullptr)
            return head;

        while (t->next)
        {
            Node* front = t->next;  // changed ListNode to Node
            t->next = prev;
            prev = t;
            t = front;
        }
        t->next = prev;
        return t;
    }

    Node* addOne(Node* head) {
        // Your Code here
        head = reverseList(head);
        Node* newLL = new Node(1);  // fixed name case

        head = addTwoNumbers(head, newLL);
        head = reverseList(head);
        return head;
        
        // return head of list after adding one
    }
};
