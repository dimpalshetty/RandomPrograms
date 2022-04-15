#include<stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

int
isFull ()
{

  if (top == MAXSIZE)
    {
      return 1;
    }
  else
    {
      return 0;
    }

}

int
isEmpty ()
{
  if (top == -1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int
pop ()
{
  int data;

  if (!isEmpty ())
    {
      data = stack[top];
      top = top - 1;
      return data;
    }
  else
    {
      printf ("The stack is not empty");
    }

}

int
push (int data)
{
  if (!isFull ())
    {
      top = top + 1;
      stack[top] = data;

    }
  else
    {
      printf ("Stack is full");
    }

}

int
isDisplay ()
{
  //printf("top = %d\n", top);
  for (int i = top; i >= 0; i--)
    {				//1 2 3 4
      printf ("%d\n", stack[i]);
    }
}


int
main ()
{
  int options;
  printf ("The stack implentations");
  printf ("1. Push\n  2.Pop\n  3.Display\n");
  while (1)
    {
      printf ("Select operator");
      scanf ("%d", &options);

      switch (options)
	{
	case 1:
	  printf ("Enter the data to be pushed");
	  int data;
	  scanf ("%d", &data);
	  push (data);
	  break;

	case 2:
	  printf ("The data to be popped");
	  pop ();
	  break;

	case 3:
	  printf ("The display of stack\n");
	  isDisplay ();
	  break;
	}

    }
}
