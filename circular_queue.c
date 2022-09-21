#include<stdio.h>
#include<stdlib.h>
#define size 8

int queue[size];
int f = -1;
int r = -1;

void enqueue(int);
void dequeue();
void show();
void isEmpty();

int main()
{
  int ch,n;
  while(1)
  {
    printf("\n---Queue Menu----");
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.isEmpty");
    printf("\n4.Show");
    printf("\n5.Exit");
    printf("\nEnter your choice : ");
    scanf("%d", &ch);
    
    switch(ch)
    {
            case 1:
            	printf("Enter a integer : ");
            	scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                isEmpty();
                break;
            case 4:
                show();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\nInvalid Choice!");
     }
   }
 }
  
 void enqueue(int x)
 {
  if(f == -1 && r ==-1)
  {
    f++;
    queue[r] = x;
  }else{
    if(f == (r++)%size)
    {
      printf("queue overflow!");
    }else{
      r = (r++)%size;
      queue[r] = x;
    }
  }  
}

void dequeue()
{
  if(r == -1 && f == -1)
  {
    printf("\nQueue is Empty!");
  }
  else if(r == f)
  {
    f == -1;
    r == -1;
  }else{
    f = (f++)%size;
  }
}

void isEmpty()
{
  if(f == -1 && r == -1)
  {
    printf("\nQueue is Empty!");
  }else{
    printf("\nQueue is not Empty!");
  }
}

void show()
{
    int i, j;
    if(f == -1 && r == -1)
    {
        printf("\nQueue is Empty!");
    } else {
        for(i = f; i <= size; i++)
        {
        	j = i%size;
        	if(r == f)
        	{
        		printf("\n%d <- front & rear", queue[j]);
			}
        	else if(i == f)
        	{
        		printf("\n%d <- front",queue[j]);
			}
			else if(i == r)
			{
				printf("\n%d <- rear ",queue[j]);
			} 
			else
			{
            	printf("\n%d", queue[j]);
        	}
        }
  }
}  
