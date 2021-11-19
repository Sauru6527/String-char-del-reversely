#include<stdio.h>
char ch[10];
void insert();
void display();
void delete_first();
void delete_last();
int rear = -1;
int front = -1;
int main()
{
	
   int choice;
   while(1)
   {
   	 puts("\n");
      puts(" 1 ::: INSERT ");
      puts(" 2 ::: DELETE FIRST ");
      puts(" 3 ::: DLETE LAST ");
      puts(" 4 ::: FRONT "); 
	  puts(" 5 ::: DISPLAY ");
	  puts(" 6 ::: REAR");
	  
	  printf("ENTER CHOICE  = ");
	  scanf(" %d",&choice);
	  
	  switch(choice)
	  {
	  	case 1:
	  		insert();
	  		break;
	  		
	  		case 2:
	  			delete_first();
	  			break;
	  			
	  			case 3:
	  				delete_last();
	  				
	  				case 4:
	  				//	front();
	  					break;
	  					
	  					case 5:
	  						display();
	  						break;
	  						
	  						case 6:
	  							//rear();
	  							break;
	  }
   }

	
	
	return 0;
}

void insert()
{

	{
		front++;
	      	{
	         	for(int i=front;i<10;i++)
	         	{
	         		fflush(stdin);
	         		printf("ENTER VALUE = ");
	         		scanf("%c",&ch[i]);
	         		fflush(stdin);
	         		rear++;
				 }
         	}	  
		}
		
	
	return;
}

void display()
{
	for(int i=front;i<=rear;i++)
	{
		printf(" %c",ch[i]);
		
	}
}

void delete_first()
{
	int temp1;
	temp1 = ch[front];
	front++;
	printf("%c = DELETED ..",temp1);
}


void delete_last()
{
	int temp;
	temp=ch[rear];
	rear--;
	printf("%c = DELETED ..",temp);
}




















