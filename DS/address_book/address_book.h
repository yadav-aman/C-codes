#include<stdio.h>
#include<malloc.h>
#include<string.h>

typedef struct Node node;
typedef struct Book book;

struct Node{
    char *name;
    long *phone;
    char *email;
    struct Node *next;
};

// Function Prototypes
node* createNode(char*, long, char*);
node* createNodeFromInput();
node* deleteNode(node*);
void printNode(node*);

struct Book{
    struct Node *head;
    int size;
};

// Function Prototypes
book* initBook();
void pushEntry(book*, node*);
void insertEntryAt(book*, node*, int);
void insertEntry(book*, node*);
void deleteEntryAt(book *, int);
void deleteEntry(book *);
void deleteBook(book *);
void editEntry(book *);
void printBook(book*);


//----------------------------------------------------

//returns node containing data(from args)
node* createNode(char *name, long phone, char *email){
    node *new = (node *)malloc(sizeof(node));
    char *new_name = (char *)malloc(sizeof(char)*255);
    long *new_phone = (long *)malloc(sizeof(long));
    char *new_email = (char *)malloc(sizeof(char)*255);
    new_name = name;
    *new_phone = phone;
    new_email = email;
    new->name = new_name;
    new->phone = new_phone;
    new->email = new_email;
    new->next = NULL;
    return new;
}

//returns node containing data(from user input)
node* createNodeFromInput(){
    node *new = (node *)malloc(sizeof(node));
    char *name = (char *)malloc(sizeof(char)*255);
    long *phone = (long *)malloc(sizeof(long));
    char *email = (char *)malloc(sizeof(char)*255);
    printf("Enter name - ");
    scanf(" %[^\n]s", name); //used to take string input containing spaces
    printf("Enter phone number - ");
    scanf("%ld", phone);
    printf("Enter email - ");
    scanf("%s", email);
    new->name = name;
    new->phone = phone;
    new->email = email;
    new->next = NULL;
    return new;
}

//frees mem and returns NULL
node* deleteNode(node *temp){
    char* name = temp->name;
    long* phone = temp->phone;
    char* email = temp->email;
    free(name);
    free(phone);
    free(email);
    free(temp);
    return NULL;
}

void printNode(node *temp){
    printf("Name   - %s\n", temp->name);
    printf("Number - %ld\n", *(temp->phone));
    printf("Email  - %s\n\n", temp->email);
}

//---------------------------------------------------

//initialize book w/ size=0
book* initBook(){
    book *new = (book*) malloc(sizeof(book));
    new->head = NULL;
    new->size = 0;
    return new;
}

//inserts node at front
void pushEntry(book *list, node *entry){
    if(list->size == 0){
        list->head = entry;
        ++(list->size);
    }
    else{
        node *temp = list->head;
        entry->next = temp;
        list->head = entry;
        ++(list->size);
    }
}

//inserts node at 'position'
void insertEntryAt(book *list, node *entry, int position){
    if(position < 0 || position > list->size){
        printf("Cannot be inserted.\n");
        return;
    }
    else if(position == 0){
        pushEntry(list, entry);
        return;
    }
    else{
        int current_position = 0;
        node *temp = list->head;
        node *prev;
        //while(position--) could be used
        while(current_position != position){
            current_position++;
            prev = temp;
            temp = temp->next;
        }
        prev->next = entry;
        entry->next = temp;
        ++(list->size);
    }
}


//calculates position to insert(alphabetically and calls insertEntryAt(position)
void insertEntry(book *list, node *entry){
    if(list->size == 0){
        list->head = entry;
        ++(list->size);
    }
    else{
        node *temp = list->head;
        int position = 0;
        //todo case insensitive comparision
        while(strcmp(entry->name, temp->name) > 0){
            position++;
            temp = temp->next;
            if(temp == NULL){
                break;
            }
        }
        insertEntryAt(list, entry, position);
    }
}

//deletes node at position
void deleteEntryAt(book *list, int position){
    if(position < 0 || position > list->size){
        return;
    }
    else if(position == 0){
        node* temp = list->head;
        list->head = temp->next;
        temp = deleteNode(temp);
        --(list->size);
    }
    else{
        node *trav = list->head;
        node *prev;
        while(position--){
            prev = trav;
            trav = trav->next;
        }
        prev->next = trav->next;
        trav = deleteNode(trav);
        --(list->size);
    }
}


//deletes node of user's choice
void deleteEntry(book *list){
    if(list->size == 0){
        printf("No entries to delete.\n");
    }
    else{
        node *temp = list->head;
        int count = 0;
        int delete = 0;
        while(temp){
            printf("%d. %s\n", (count++)+1, temp->name);
            temp = temp->next;
        }
        printf("\nWhich entry to delete? : ");
        scanf("%d", &delete);
        delete = delete - 1;
        deleteEntryAt(list, delete);
        printf("\nEntry Deleted.\n");
    }
}

//deallocates each node of book
void deleteBook(book *list){
    if(list->size == 0){
        printf("Book is empty.\n");
    }
    else{
        node *trav = list->head;
        node *trav2;
        while(trav){
            trav2 = trav->next;
            deleteNode(trav);
            --(list->size);
            trav = trav2;
        }
        list->head = NULL;
        printf("Book deleted.\n");
    }

}

//edits node of user's choice
void editEntry(book *list){
    if(list->size == 0){
        printf("No entries to edit.\n");
    }
    else{
        node *temp = list->head;
        int count = 0;
        int edit = 0;
        while(temp){
            printf("%d. %s\n", (count++)+1, temp->name);
            temp = temp->next;
        }
        printf("\nWhich entry to edit? : ");
        scanf("%d", &edit);
        edit = edit - 1;
        node *new = createNodeFromInput();
        deleteEntryAt(list, edit);
        insertEntry(list, new);
    }
}

//prints book
void printBook(book *list){
    if(list->size == 0){
        printf("No entries.\n");
    }
    else{
        node *temp = list->head;
        printf("No. of entries - %d\n\n", list->size);
        int count = 0;
        while(temp){
            printf("--     %d     --\n", (count++)+1);
            printNode(temp);
            temp = temp->next;
        }
    }
}
