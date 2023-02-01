#include<stdio.h>

int list (int max);
int isempty();
void makeEmpty();
void insert (int index,int item);
int remove(int index);
int getitem(int index);
void display();

void main(){
                int ch;
                int ele, pos;
                int ls[10];
                
                printf("\n-----linear list-------\n");
                printf(" 1. Insert\n 2. Delete\n 3. Display\n 4. GetItem\n 5. MakeEmpty\n 6. Exit");
                print("enter your choice");
                scanf("%d",&ch);
                
                switch(ch){
                                case 1:
                                                printf("enter the positon :");
                                                scanf("%d",&ch);
                }
}

int list (int max){
                maxsize=max;
                size=0;
                
}


