#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int main()
{
  int Stack_Arr[MAX];
  int top = -1;
  int value ;
////////////////////////////////////
  void push(int data){
  if(top == MAX){
  printf("StackOverFlow");
  }else{
    top+=1;
    Stack_Arr[top] = data ;
  }
  }
//////////////////////////////////
    int pop(){
            int value ;
            if(top == -1){
            printf("Stack UnderFlow");
            exit(1);
            }else{
            value = Stack_Arr[top];
            Stack_Arr[top] = NULL;
            top = top -1 ;
            return value;
            }
    }
/////////////////////////////////
  for(int i = 0 ; i < MAX ; i++){
        printf("Enter Value Number %d :",i+1);
        scanf("%d",&value);
        push(value);
  }
  printf("top is : %d\n",top);

  for(int i = 0 ; i <= top ; i++){

  printf(" %d\n",Stack_Arr[i]);
  }
    printf("Value %d has been deleted :\n",pop());
  printf("/////////////////////////////\n");
    for(int i = 0 ; i <= top ; i++){

  printf(" %d\n",Stack_Arr[i]);
  }
    return 0;
}
