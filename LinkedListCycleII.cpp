/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    Node *f = head, *s = head;
    while (f && f->next) {
        f = f->next->next;
        s = s->next;
        if (f == s) {
            Node *n = head;
            int i = 0;
            while (n != s) {
                n = n->next;
                s = s->next;
            }
            return n;
        }
    }
    return NULL;
}
