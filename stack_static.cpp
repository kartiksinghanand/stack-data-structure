#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

void push(int data);
void pop();
void display();

int a[10];
int top=-1;


int main()
{
    int ch,x;
    while(1)
    {cout<<"\nselect an option"
        <<"\n1.push \n2.pop \n3.display the stack \n4.exit                  your choice: ";

        cin>>ch;
        switch(ch)
        {
            case 1:{cout<<"enter the data: "; cin>>x;push(x); break;}
            case 2: pop(); break;
            case 3: {display();break;}
            case 4: exit(1); break;
            default:cout<<"                                                 invalid choice\n";
        }
     }
}

void push(int data)
{
  if(top==-1)
  {
      a[0]=data;
      top=0;
      return;
  }
  top++;
  if(top>10){
    cout<<"                                                                stack is full\n";
    return;
  }
  else{
    a[top]=data;
    return;
  }
}

void pop()
{
    if(top==-1)
    {
        cout<<"                                                           stack is empty\n";
        return;
    }
    top--;
}

void display()
{
    int n=top;
    if(top==-1)
    {
        cout<<"                                                          stack is empty";
        return;
    }
    cout<<"                                                              stack is:";
    while(n!=-1)
    {cout<<a[n]<<", ";
       n--;}
       return;
}
