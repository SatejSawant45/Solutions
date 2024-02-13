#include<bits/stdc++.h>
using namespace std;

class Node
{
 public:
    int data;
    Node* next;

    Node(int x)
    {
      data = x;
      next=NULL;

    }

};

void insert_end(Node* head,Node* p)
{
  Node* temp;
  temp = head;

  if(head == NULL)
  {
    cout<<"Node is empty";
    head = p;    
  }

  while(temp->next!=NULL)
  {
    temp=temp->next;
  }

  temp->next = p;
  p->next = NULL;

}

void print_list(Node* head)
{
   Node* temp = head;

   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }

}
int main()
{
  Node* head = new Node(10);

  int data;
  cin>>data;

  Node* p = new Node(data);

  insert_end(head,p);

  Node* p1 = new Node(8);
  insert_end(head,p1);
  print_list(head);



}