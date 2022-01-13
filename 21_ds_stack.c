// Developed by Dileepa Bandara

#include<stdio.h>

int value, i, j;

struct stack{
    int arr[10];
    int top;
}st;

int main(){
    for (j=0; j<10; j++){
        st.top = -1;
        if((st.top)==9){
            printf("Stack is full");
        } else{
            st.top++;
            printf("Enter value");
            scanf("%d", &value);
            st.arr[st.top] = value;
        }
    }
    for(i=st.top; i>=0; i--){
            printf("%d", st.arr[i]);
    }
}
