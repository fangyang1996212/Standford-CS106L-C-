#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node *next;
};

/* 创建链表 */
node* create(int a[], const int n)
{
    node *p, *pre, *head; // pre 保存当前结点的前结点
    head = new node; // 创建头结点
    head->next = NULL; // 初始化头结点指针域为 NULL
    pre = head;
    
    for (int i=0; i < n; ++i) {
        p = new node; // 新建结点
        
        p->data = a[i]; // 将a[i]的值赋给数据域，也可以 scanf 输入
        p->next = NULL; // 新结点的指针域设为 NULL
        pre->next = p; // 前驱结点的指针域设为新结点的地址
        pre = p;
    }
    
    return head;
}

/* 反转链表 */
node* ReverseLinkList(node* head)
{
    if(head == NULL) return 0;
    node *pre = NULL;
    node *next = NULL;
    
    while (head) {
        next = head->next;
        head->next = pre;
        pre = head;
        head = next;
    }
    return pre;
}

/* 释放链表 */
void Delete_LinkList(node* head)
{
    node* next = NULL;
    while(head != NULL)
    {
        next = head->next;
        delete(head);
        head = next;
    }
}


/**************************************主函数*************************************************/
int main(int argc, char* argv[])
{
    int a[5] = {1,2,3,4,5};
    node* head = create(a, 5); // 新建一个链表把头指针赋给 head

    /**************************************反转前*************************************************/
    printf("反转前的链表：\n");
    node* L = head->next; // 从第一个结点开始有数据域
    while(L)
    {
        printf("%d ",L->data);
        L = L->next;
    }
    
    printf("\n");
 
    /**************************************反转后*************************************************/
    node* R = ReverseLinkList(head);
    printf("反转后的链表：\n");
       while(R->next)
       {
           printf("%d ",R->data);
           R = R->next;
       }

    printf("\n");

    Delete_LinkList(R);
    
    return 0;
}
