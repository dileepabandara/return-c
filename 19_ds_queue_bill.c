// Developed by Dileepa Bandara

#include<stdio.h>

int i, j;
float discount, newBill;

struct queue{
    int arr[5];
    int front;
    int rear;
}qu;

void enqueue(float bill){
    qu.rear++;
    qu.arr[qu.rear] = bill;
}

int dequeue(){
    int out;
    out = qu.arr[qu.front];
    qu.front++;
    return out;
}

void calculate(){
    for(i=qu.front; i<3; i++){
        discount = qu.arr[i]*0.05;
        newBill = qu.arr[i] - discount;
        printf("%f", newBill);
        dequeue();
    }
    printf(qu.arr[i]);

}

int main(){
    qu.front = 0;
    qu.rear = -1;

    for (i=1; i<=5; i++){
        float bill;
        printf("Enter Bill Amount: ");
        scanf("%f", &bill);
        enqueue(bill);
    }
    //display();
    calculate();
}
