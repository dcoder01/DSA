int add(Node * temp){
    if(temp==NULL){
        return 1;

    }
    int carry=add(temp->next);
    temp->data +=carry;
    if(temp->data>=10){
        temp->data=0;
        return 1;

    }
    return 0;

}
Node *addOne(Node *head)
{
    // Write Your Code Here.
    int carry =add(head);
    if(carry==1) {
        Node * newHead= new Node(1);
        newHead->next=head;
        return newHead;

    }
    return  head;
}
