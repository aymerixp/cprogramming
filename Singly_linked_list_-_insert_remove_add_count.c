#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int				data;
	struct s_node	*next;
}					t_node;

t_node				*head;
int			count();

void		append(int num)
{
	t_node *temp;
	t_node *right;
	temp = (t_node *)malloc(sizeof(t_node));
	temp->data = num;
	right = (t_node *)head;
	while(right->next != NULL)
		right = right->next;
	right->next = temp;
	right = temp;
	right->next = NULL;
}

void		add(int num)
{
	t_node *temp;
	temp = (t_node *)malloc(sizeof(t_node));
	temp->data = num;
	if (head == NULL)
	{
		head = temp;
		head->next = NULL;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
}

void		addafter(int num, int loc)
{
	int		i;
	t_node	*temp;
	t_node	*left;
	t_node	*right;

	right = head;
	i = 1;
	while (i < loc)
	{
		left = right;
		right = right->next;
		i++;
	}
	temp = (t_node *)malloc(sizeof(t_node));
	temp->data=num;
	left->next = temp;
	left = temp;
	left->next = right;
}

void		insert(int num)
{
	int c;
	t_node *temp;

	c = 0;
	temp = head;
	if (temp == NULL)
		add(num);
	else
	{
		while (temp != NULL)
		{
			if(temp->data < num)
				c++;
			temp = temp->next;
		}
		if(c == 0)
			add(num);
		else if(c < count())
			addafter(num, ++c);
		else
			append(num);
	}
}

int			delete(int num)
{
	t_node *temp;
	t_node *prev;
	temp = head;
	while(temp != NULL)
	{
		if(temp->data == num)
		{
			if(temp == head)
			{
				head = temp->next;
				free(temp);
				return (1);
			}
			else
			{
				prev->next = temp->next;
				free(temp);
				return (1);
			}
		}
		else
		{
			prev = temp;
			temp = temp->next;
		}
	}
	return (0);
}

void		display(t_node *r)
{
	r = head;
	if(r == NULL)
	{
		return;
	}
	while(r != NULL)
	{
		printf("%d ",r->data);
		r = r->next;
	}
	printf("\n");
}

int			count()
{
	t_node *n;
	int c = 0;

	n = head;
	while(n != NULL)
	{
		n = n->next;
		c++;
	}
	return (c);
}

int			main(void)
{
	int i;
	int num;
	t_node *n;
	n = NULL;
	head = NULL;

	while(1)
	{
		printf("\nList Operations\n");
		printf("===============\n");
		printf("1.Insert\n");
		printf("2.Display\n");
		printf("3.Size\n");
		printf("4.Delete\n");
		printf("5.Exit\n");
		printf("Enter your choice : ");
		if(scanf("%d", &i) <= 0){
			printf("Enter only an Integer\n");
			exit(0);
		} else {
			switch(i)
			{
				case 1: printf("Enter the number to insert : ");
						 scanf("%d", &num);
						 insert(num);
						 break;
				case 2: if(head == NULL)
						{
							printf("List is Empty\n");
						}
						else
						{
							printf("Element(s) in the list are : ");
						}
						display(n);
						break;
				case 3: printf("Size of the list is %d\n",count());
						break;
				case 4: if(head == NULL)
							printf("List is Empty\n");
						else
						{
							printf("Enter the number to delete : ");
							scanf("%d", &num);
							if(delete(num))
								printf("%d deleted successfully\n",num);
							else
								printf("%d not found in the list\n",num);
						}
						break;
				case 5: return 0;
				default: printf("Invalid option\n");
			}
		}
	}
	return (0);
}
