/* Help of this program we are learning how to remove duplicate element of given linked list.
Time complexity O(n^2)*/

/*include header file*/
#include<stdio.h>
#include<stdlib.h>


/*Structure of linked list*/
struct Node{

  int data;// linked list data
  struct Node*next;// pointer field

};

/* Function declaration section here */
void insert_data(struct Node**,int);
void show_data(struct Node*);
void remove_node(struct Node**);
void remove_duplicate(struct Node*);

/*Help of this function create new linked list node.
And there are inserted this element on end position of given linked list*/
void insert_data(struct Node**root,int value){

  /* create new memory block using malloc function. */
  struct Node*temp=NULL,*new_node=(struct Node*)malloc(sizeof(struct Node));

  /* check new create memory are allocate or not. */
  if(new_node)
  {

      /*Assign data and next pointer value to newly created node.*/
    new_node->data=value;
    new_node->next=NULL;

    if(*root==NULL){
      /*When linked list are empty. Insert first node*/
      *root=new_node;
    }
    else{
      /*When linked list are not empty*/

      /*linked list first node address assign on temp pointer*/
      temp=*root;

      /*This will loop find last node of exist linked list*/
      while(temp->next){
        /*move temp pointer on next memory block*/
        temp=temp->next;
      }

      /*assign this newly created node on end of list*/
      temp->next=new_node;

    }
  }
  else
  {
    /* When malloc function not create memory block then. */
    printf("\n Memory overflow please try again..!");
  }
}


/* Help of this function showing all element of single linked list */
void show_data(struct Node*temp){
  if(temp==NULL){
    /*linked list are empty*/
    printf("Empty linked List\n");
  }
  else
  {
    /*When linked list are not empty*/

    while(temp)
    {
      /*print linked list data*/
      printf("%d  \n",temp->data);

      /*move next memory block*/
      temp=temp->next;
    }

  }
}
/*Help of this function removing all linked list element.*/
void remove_node(struct Node**root){

  if(*root){

    struct Node*temp=*root;

    while(temp){

      /*Moving root pointer to on next memory block.*/
      *root=temp->next;

      /*before removing that linked node assign
       next pointer value are null.*/
      temp->next=NULL;

      /*Free linked list node element*/
      free(temp);

      temp=*root;
    }

  }
  else{
    /* When linked list is empty */
    printf("\n linked list is empty \n");
  }

}
/*Help of this function remove duplicate data element on given linked list*/

void remove_duplicate(struct Node*temp){

  struct Node*help=NULL,*find=NULL;
  while(temp){

    help=temp->next;
    find=temp;
    while(help){

          /*check similar node data on linked list*/
      if(help->data==temp->data){

        /*Break link*/
        find->next=help->next;

        help->next=NULL;
        /*free (remove) duplicate element*/
        free(help);

        help=find;
      }
      else{

        /*point help pointer*/
        find=help;
        /*move next memory block*/
        help=help->next;
      }
    }
    /*move next memory block*/
    temp=temp->next;
  }


}




int main(){
  /* start program execution are here */
    struct Node*root = NULL;




  int data;

    do{
        scanf("%d",&data);
        if(data>=0){
        insert_data(&root ,data);
        }
    }while (data>=0);


  printf("Linked list before removal of duplicates\n");
 /*show_data functions showing all nodes of linked list*/
  show_data(root);
  remove_duplicate(root);
    printf("Linked list after removal of duplicates\n");

  show_data(root);


  /*removing linked list node*/
  remove_node(&root);

  /*end execution*/
}
