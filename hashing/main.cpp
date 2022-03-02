#include <iostream>

using namespace std;

struct node{
    int data;
    struct node * next;
};

int hashing(int key){
    int index = key%10;
    return index;
}

void sortedInsert(struct node **HT,int x ){
    struct node *p=*HT,*t,*q=NULL;
    t = new node;
    t->data= x;
    t -> next=NULL;
    if(*HT == NULL){
        *HT=t;
    }
    else{
        while(p && p->data>x){
                q=p;
                p=p->next;
        }
        if(p==*HT){
             t->next=*HT;
            *HT=t;
        }
        else{
            t->next=q->next;
            q->next =t;

        }
    }
}


void Insert(struct node * HT[],int key){
    int index = hashing(key);

    sortedInsert(&HT[index],key);
}
void Search(struct node * HT[],int key){
    int index= hashing(key);

    struct node *t= HT[index];
    int flag=0;
    while(t){
            flag=0;
        if(t->data==key){
            flag =1;
            printf("\n\t\t%d Found !!",key);
            break;
        }
        t=t->next;

    }
    if(flag==0){
    printf("\n\t\t%d NOT found",key);
}



}
int main()
{
    int n=10;
    struct node *HT[n];
    for(int i=0;i<n;i++){
        HT[i]=NULL;
    }
    cout<<"Inserting 15\n";
    Insert(HT,15);
    cout<<"Inserting 20\n";
    Insert(HT,20);
    cout<<"Inserting 54\n";
    Insert(HT,54);
    cout<<"Inserting 64\n";
    Insert(HT,64);
    cout<<"Inserting 25\n";
    Insert(HT,25);
    cout<<"Inserting 5 \n";
    Insert(HT,5);
//    cout<<"HT[10]"
    cout<<"searching 5";
    Search(HT,5);
    Search(HT,12);
    return 0;
}
