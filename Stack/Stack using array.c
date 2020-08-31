#include <stdio.h>
#define n 3

void push (int);
void pop ();
void display ();

int stack[n], top = -1;

int main ()
{
  int ch, val;
  while (1)
    {
      printf ("\nEnter your choice:\n1.Insert\n2.Delete\n3.View\n4.Exit\n");
      scanf ("%d", &ch);
      switch (ch)
	{
	case 1:
	  printf ("\nEnter the value to insert\n");
	  scanf ("%d", &val);
	  push (val);
	  break;
	case 2:
	  pop();
	  break;
	case 3:
	  display ();
	  break;
	case 4:
	  exit (0);
	  break;
	default:
	  printf ("\nKindly enter a valid number\n");
	  break;
	}
    }
  return 0;
}

void push (val)
{
  if (top == n - 1)
    {
      printf ("\nInsertion is not possible because Stack is Full\n");
    }
  else
    {
      top++;
      stack[top] = val;
    }
}

void display ()
{
  if (top == -1)
    {
      printf ("\nStack is Empty\n");
    }
  else
    {
      for (int i = 0; i <= n; i++)
	{
	  printf ("%d ", stack[i]);
	}
    }
}

void pop()
{
    if (top == -1)
    {
      printf ("\nCant Delete because Stack is Empty\n");
    }
    else{
        printf("The Deleted element is %d",stack[top]);
        top--;
    }
}