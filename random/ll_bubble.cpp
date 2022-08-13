#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *bubble(Node *head)
{
	if (head == NULL)
	return head;

	int len=0;
	Node *ptr=head, *temp = NULL, *brake = NULL;
	
	while(ptr!=NULL)
	{
		len++;
		ptr=ptr->next;
	}

	Node *st = new Node(-1);
	st->next = head;

	for (int i=0;i<len;i++)
	{

		for (ptr = st; ptr->next->next != brake; ptr = ptr->next)
		{ 
			if ((ptr->next->next->data) < (ptr->next->data))
			{
				temp = ptr->next->next;
				ptr->next->next = temp->next;
				temp->next = ptr->next;
				ptr->next = temp;
			}
		}
		brake = ptr->next;
		cout<<brake->data<<",";
	}
	head = st->next;
	return head;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		head = bubble(head);
		print(head);
	}

	return 0;
}