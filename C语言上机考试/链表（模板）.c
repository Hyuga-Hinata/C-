#include <stdio.h>

"�������к���"
"�����ṹ"


int main()
{
	Node * listHead;
	ListHead = createLinkedList("����");
	displayLinkedList(listHead);   //��ӡ�����
	
	
	//����
	int insertValue = 0;
	scanf("%d",& insertValue);
	listHead = insertNodeByValue(listHead,insertValue);
	
	//ɾ��
	int delValue;
	scanf("%d",&delValue);
	listHead = deleteNodeByValue(listHead,delValue);
	while(listHead != NULL)
	{
		Node * temp;
		temp = listHead;
		listHead = listHead->next;
		free(temp);
	}
	
	return 0;
}

void displayLinkedList(Node * head)
{
	if(head == NULL)
	{
		printf("this linked list empty\n");
		return ;
	}
	
	Node * pNode;
	int i = 1;
	printf("this linked list is :\n");
	for ( pNode = head; pNode != NULL; pNode = pNode->next)
	{
		printf("No.%d: address = %p, value = %4d, next = %p \n",
		i,pNode, pNode->value,pNode->next);
		i++;
	}
	printf("\n");
}
