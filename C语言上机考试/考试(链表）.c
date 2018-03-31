//���ղ��������ڴ沢�����ڴ�����ַ 
void* malloc (size_t);
//���յڶ�����������,��һ���������������ڴ棬������󷵻��ڴ�����ַ
void* calloc (size_t, size_t);
// ���յڶ������Ĵ�С���·����ڴ棬����ֵ����һ������ָ��
void* realloc(void*,size_t);

//һ��Ҫ��ס������ 
void free (void*);


int * iPtr;
int numNodes = 0;

scanf("%d",&numNodes);
iPtr = malloc(sizeof(int) * numNodes );

//


//����ı���
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

//����ı��� 
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

//����Ĵ���    ע�����ݼ��� 
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
//������������   �����֣��ޣ��� 
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

//��ӡ����δд�ֻ꣬д��ע��ط��� ����һ��Ҫȷ�������� 
void displayLinkedList(Node * head)
{
	if(head == NULL)
	{
		printf("this linked list empty\n");
		return ;
	}
}


//����Ĳ��� 
newNode = malloc(sizeof(Node));
newNode->value = xxx;
newNode->next = NULL;


newNode->next = previousNode->next;
previousNode->next = newNode;


//�������1      ���������ۣ��ޣ�ͷ���м� 
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

//�����ɾ��
//һ��Ҫ�ǵ�free   �����֣�ͷ���м䣬�� 
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
