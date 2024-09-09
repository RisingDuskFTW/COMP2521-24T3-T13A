// Representation 1
struct node {
    int value;
    struct node *next;
};

int listLengthNode(struct node *list);


// Representation 2
struct node2 {
    int value;
    struct node2 *next;
};

struct list {
    struct node2 *head;
};

int listLengthList(struct list *list);
