//按照参数分配内存并返回内存区地址 
void* malloc (size_t);
//按照第二参数的类型,第一参数的数量分配内存，并置零后返回内存区地址
void* calloc (size_t, size_t);
// 按照第二参数的大小重新分配内存，并赋值给第一参数的指针
void* realloc(void*,size_t);

//一定要记住！！！ 
void free (void*);


int * iPtr;
int numNodes = 0;

scanf("%d",&numNodes);
iPtr = malloc(sizeof(int) * numNodes );

//


//链表的遍历
struct node{
	int value;
	struct node * next;
}; 
typedef struct node Node;

Node * pNode;
for ( pNode = head ; pNode != NULL; pNode = pNode->next )
{
	printf(" %4d ", pNode->value);
}

//链表的遍历 
Node *n1, *n2, *n3;
n1 = malloc(sizeof(Node));
n2 = malloc(sizeof(Node));
n3 = malloc(sizeof(Node));

n1->value = 10;
n1->next = n2;
n2->value = 20;
n2->next = n3;
n3->value = 30;
n3->next = NULL;

Node *pNode;
for( pNode = n1; pNode != NULL; pNode = pNode->next )
{
	printf(" %4d ", pNode->value);
}

free(n1);
free(n2);
free(n3);

//链表的创建    注意内容见下 
Node* creatLinkedList(int numNode );
void displayLinkedList(Node*);

int main()
{
	Node * listHead;
	int numNode;
	scanf("%d",&numNode);
	listHead = createLinkedList(numNode);
	displayLinkedList(listHead);
	
	return 0;
}
//函数创建链表   两部分：无，有 
Node* createLinkedList(int nSize)
{
	if(nSize < 1)
	{
		return  NULL;
	}
	
	Node *head, *previous, *current;
	head = malloc(sizeof(Node));
	head->value = 10;
	head->next = NULL;
	
	int i;
	previous = head;
	for ( i = 1 ; i < nSize; i++)
	{
		current = malloc(sizeof(Node));
		current->value = (i + 1 )*10;
		current->next = NULL;
		previous->next = current;
		previous = current;
	}
	return head;	
}

//打印链表（未写完，只写了注意地方） ！！一定要确定链表有 
void displayLinkedList(Node * head)
{
	if(head == NULL)
	{
		printf("this linked list empty\n");
		return ;
	}
}


//链表的插入 
newNode = malloc(sizeof(Node));
newNode->value = xxx;
newNode->next = NULL;


newNode->next = previousNode->next;
previousNode->next = newNode;


//插入代码1      分三个讨论：无，头，中间 
Node * insertNodeByValue(Node * head, int newValue)
{
	Node *newNode;
	newNode = malloc(sizeof(Node));
	newNode->value = newValue;
	newNode->next = NULL;
	
	if( head == NULL)
	{
		head = newNode;
		return head;
	}
	
	if(newValue < head->value)
	{
		newNode->next = head;
		head = newNode;
		return head;
	}
	
	int isFound = 0;
	Node *previous;
	Node *current;
	
	for ( previous = NULL, current = head; current != NULL;
	previous = current, current = current->next)
	{
		if(newValue < current->value )
		{
			previous->next = newNode;
			newNode->next = current;
			isFound = 1;
			break;
		}
	}
	
	if( !isFound )
	{
		previous->next = newNode; 
	}
	
	return head;
}

//链表的删除
//一定要记得free   三部分：头，中间，无 
Node* deleteNodeByValue(Node * head, int delValue )
{
	if(head == NULL)
	{
		printf("the linked list is empty\n");
		return NULL;
	}
	
	Node *temp;
	if(delValue == head->value )
	{
		temp = head;
		head = head->next;
		free(temp);
		return head;
	}
	int isFound = 0;
	Node *previous;
	Node *current;
	for(previous = NULL, current = head;current != NULL;
	previous = current, current = current->next)
	{
		if(delValue == current->value)
		{
			previous->next = current->next;
			free(current);
			isFound = 1;
			break;
		}
	}
	if(isFound)
	{
		printf("the input value is found and deleted.\n");
	}
	else
	{
		printf("the input value is not found.\n");
	}
	
	return head;
}
