//stack implementation using linked list

#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

struct node{
int info;
struct node* link;
};

struct node *top=NULL;

void display();
void push(int data);
void pop();

int main()
{
    int ch,x,n,a=0,p;
    while(1)
    {cout<<"\nselect an option"
        <<"\n1.push \n2.pop \n3.display the stack \n4.exit ";

        cin>>ch;
        switch(ch)
        {
            case 1:{cout<<"enter the data: "; cin>>x;push(x); break;}
            case 2: pop(); break;
            case 3: {display();break;}
            case 4: exit(1); break;
            default:cout<<"invalid choice\n";
        }
     }
}

void push(int data)
{
    struct node* temp,*ptr=top;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=data;
  if(top==NULL)
  {
    temp->link=NULL;
    top=temp;
    return;
  }
  else{
    temp->link=top;
    top=temp;
  }
}

void display()
{
  struct node* ptr=top;
  if(top==NULL)
  {
      cout<<"stack is empty\n"; return;
  }
  else {
   while(ptr->link!=NULL)
   {
    cout<<ptr->info<<", ";
    ptr=ptr->link;
   }
   cout<<ptr->info;
      }
}

void pop()
{
    struct node* ptr=top;
    if(top==NULL)
    {
        cout<<"stack is empty\n";
        return;
    }
    else{
        ptr=ptr->link;
        top->link=NULL;
        free(top);
        top=ptr;
        return;
            }
}
