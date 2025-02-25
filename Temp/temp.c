#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

// struct details{
//     int age;
//     int height;
//     int weight;
// };

// void printing(struct details* s){
//     printf("age %d\n",(*s).age);
//     printf("height %d\n",(*s).height);
//     printf("weight %d\n",s->weight);
// }

struct linked{
    int data;
    struct linked *next;
};

int main(){

    struct linked one;
    struct linked two;
    struct linked three;

    one.data=1;
    one.next=&two;
    two.data=2;
    two.next=&three;
    three.data=3;
    three.next=NULL;

    struct linked *node=&one;
    //(*node).next != NULL    or node->next != NULL they both are same
    // -> arrow means dereference
    while(node != NULL){
        printf("Current Node %d\n",node->data);
        node = node->next;
    }
    // struct details sus[100];
    // sus[0].age=15;
    // sus[0].height=165;
    // sus[0].weight=50;
    // printing(&sus[0]);
    // char* a1 = "Hello"; //Constant value somewhere in memory we can not change it
    // char a2[] ="World"; //Easy to change value just like array of char
    // // but as it don't know where to stop, it will do W,o,r,l,d,\0 so at \0 
    // // It will know we have to stop, Its null terminator basically
    // printf("%s",a1);
    // // a1[0]='N';
    // printf("%s",a2);
    // a2[0]='N';
    // printf("%s",a2);

    // int* dynamicArray =  malloc(sizeof(int)*10);
    // dynamicArray[0]=50;
    // dynamicArray[1]=45;
    // dynamicArray[2]=40;
    // dynamicArray[3]=30;
    // dynamicArray[4]=20;
    // dynamicArray[5]=10;

    // printf("%d\n",dynamicArray[4]);
    // free(dynamicArray);
    // dynamicArray=NULL;
    // printf("%d\n",dynamicArray[1]);


    // int input=3;
    // int* pinput = &input;
    // int arr1[input];
    // printf("Current size of arr1 %d\n",sizeof(arr1)/sizeof(int));
    // scanf("%d",&input);
    // int arr2[input];
    // printf("Current size of arr2 %d\n",sizeof(arr2)/sizeof(int));
    // printf("%p its initial address %d\n",pinput,*pinput);
    // input=5;
    // printf("%p its initial address %d\n",pinput,*pinput);
    return 0;
}
