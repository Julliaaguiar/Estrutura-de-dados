typedef struct QueueNode{
    char data;
    struct QueueNode* proximo;

}QueueNode;

void enqueue(QueueNode* * root, char data);
char dequeue(QueueNode* * root);
char peek (QueueNode* root);
int isEmpty( QueueNode * root);
void display(QueueNode * root);
