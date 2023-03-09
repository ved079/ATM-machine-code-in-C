#include<stdio.h>
#include<string.h>
#include<time.h>
int main()
{
FILE*read;
int a,b,c,cash,note,pin,pin2,pin3,depo,balance=25000,amr,bal2,draw,note1,amon,num;
char d,name[100],string[100],n1[100]="atharva",n2[100]="vedant",n3[100]="gaurav",n4[100]="rohit",trans[100];
int newbal(int x, int y);
int newbal2(int x, int y);
int drawn(int x);
int drawn2(int x);
int drawn3(int x);
int drawn4(int m);
time_t t;   
time(&t);

printf("    _/ \_ Welcome to Gpay ATM _/ \_    \n");
printf("Please insert your card inside the machine |___________|\n");
printf("Processing........Card sucessfully scanned:\n");
printf("Please enter your good name\n");
gets(name);
printf("Please enter your ATM pin:\n");
scanf("%d",&pin);
do
{
printf("For various services press:\n|< 1 >  Check Balance     < 2 >  Deposit|\n|< 3 >  Withdraw          < 4 >  Transfer money|\n|< 5 >  Pin change        < 6 >  Account holder|\n\n");
scanf("%d",&a);

// for cheking balance
if(a==1)
{
printf("Your current savings balance is=%d\n",balance);	
}
// for money deposition
else if(a==2)
{
	printf("Enter the amount to be deposited=\n");
	scanf("%d",&depo);
	printf("%drs deposited successfully to your bank account\n",depo);
	printf("To check new balance press 1: \n");
	scanf("%d",&b);
	if(b==1)
	{
	 bal2= newbal(depo,balance);
	 printf("New balance is %d",bal2);
	}
	else
	{
		printf("Thank you visit again");
	}
}
// for money withdraw
else if(a==3)
{
 printf("Enter the amount to be withdrawn\nPlease only enter the amount in multiple of 500 or 100 or 50 or all 3 together no change amount is allowed\n");
 scanf("%d",&draw);
 if(draw<=balance)// to ask user for types of notes withdraw
 {
 printf("press\n|< 1 >  For 500rs notes|\n|< 2 >  For 100rs notes|\n|< 3 >  For 50rs notes|\n|< 4 >  For all notes|\n");
 scanf("%d",&c);
 if(c==1)
 {
    drawn(draw);
  	printf("To check new balance press 1: \n");
	scanf("%d",&b);
	if(b==1)
	{
	    bal2= newbal2(draw,balance);
	    printf("New balance is %d\n",bal2);
	}
	else
	{
		printf("Thank you visit again\n");
	}	
 }
 else if(c==2)
  {
    drawn2(draw);
  	printf("To check new balance press 1: \n");
	scanf("%d",&b);
	if(b==1)
	{
	    bal2= newbal2(draw,balance);
	    printf("New balance is %d\n",bal2);
	}
	else
	{
		printf("Thank you visit again\n");
	}	
 }
 else if(c==3)
  {
    drawn3(draw);
  	printf("To check new balance press 1: \n");
	scanf("%d",&b);
	if(b==1)
	{
	    bal2=newbal2(draw,balance);
	    printf("New balance is %d\n",bal2);
	}
}
else if(c==4)
  {
    drawn4(draw);
  	printf("To check new balance press 1: \n");
	scanf("%d",&b);
	if(b==1)
	{
	    bal2= newbal2(draw,balance);
	    printf("New balance is %d\n",bal2);
	}
	else
	{
		printf("Thank you visit again\n");
	}	
 }	
 }
else
{
	printf("Insufficent balance\n");
}

}
// for online money transfer
else if(a==4)
{
 printf("Amount to be transfered  ");
 scanf("%d",&amon);
 printf("Enter the UPI ID to transfer  ");
 scanf("%s",&trans);
 if(amon<=balance){
 printf("Transaction successful;\n");
 printf("Amount= %d\n",amon);
 printf("Debited from= %s\n",name);
 printf("Credited to= %s\n",trans);
 printf("Transaction status: Success\n");
 printf("Date and Time: %s\n", ctime(&t));
 printf("To check new balance press 1: \n");
	scanf("%d",&b);
	if(b==1)
	{
	    bal2= newbal2(amon,balance);
	    printf("New balance is %d\n",bal2);
	}
	else
	{
		printf("Thank you visit again\n");
	}
 }
 else
 {
     printf("Due to insufficent balance transaction has been cancled\nPlease try again\n");
}	
}
// for changing PIN 
else if(a==5)
{
    printf("Enter your old pin\n");
    scanf("%d",&pin2);
    if(pin2==pin)
    {   printf("Enter new pin\n");
        scanf("%d",&pin3);
        if(pin3==pin2||pin3==pin)
		{
			printf("You cannot set same pin again\n");
			
		}
		else
		{
			printf("Pin updated successfully");
		}
    }
    else
    {
        printf("Wrong existing pin entered\n");
    }
}
// for checking account holder details
else if(a==6)
{
	if(strcmp(name,n1)==0)
	{
	read=fopen("atharva.txt","r");
	if(read!=0)
	{
	while(fgets(string,100,read))
	{
	printf("%s",string);
	}
    }printf("\n");
	}
    else if(strcmp(name,n2)==0)
	{
	read=fopen("vedant.txt","r");
	if(read!=0){
	
	while(fgets(string,100,read))
	{
	printf("%s",string);
	}
    }printf("\n");
	}
    else if(strcmp(name,n3)==0)
	{
	read=fopen("gaurav.txt","r");
	if(read!=0){
	
	while(fgets(string,100,read))
	{
	printf("%s",string);
	}
    }printf("\n");
	}
    else if(strcmp(name,n4)==0)
	{
	read=fopen("rohit.txt","r");
	if(read!=0){
	
	while(fgets(string,100,read))
	{
	printf("%s",string);
	}
    }printf("\n");
	}
    else
	{
		printf("User is not matching try againg\n");
	}
	fclose(read);
	
}
else
{
	printf("Wrong choice entred\n");
}

    printf("\nDo you want to continue\nEnter y/n\n");
	fflush(stdin);
	scanf("%c",&d);
 

}
while(d=='y');

}
// functions for checking the balance
int newbal(int x, int y)
{
	int z=x+y;
	return z;
}
int newbal2(int x, int y)
{
	int z=y-x;
	return z;
}
//function for 500rs note withdraw...
int drawn(int x)
{
	int z;
	if(x%500==0 || x/500)
	{
		z=x/500;
		printf("Please collect %d of 500rs from the machine\n",z);
	}
	else
	{
		printf("Request denined due to withdrawn amount was less than 500rs\n");
		printf("Try again later :'(\n");
	}
	
}
//function for 100rs notes withdraw....
int drawn2(int x)
{
	int z;
	if(x%100==0 || x/100)
	{
		z=x/100;
		printf("Please collect %d of 100rs from the machine\n",z);
	}
	else
	{
		printf("Request denined due to withdrawn amount was less than 100rs\n");
		printf("Try again later :'(\n");
	}
	
}
//function for 50rs notes withdrawn......
int drawn3(int x)
{
	int z;
	if(x%50==0 || x/50)
	{
		z=x/50;
		printf("Please collect %d of 50rs from the machine\n",z);
	}
	else
	{
		printf("Request denined due to withdrawn amount was less than 50rs\n");
		printf("Try again later :'(\n");
	}
	
}
//function for all types of notes withdrawn......
int drawn4(int m)
{
	int k,q,e,t,i;
	k=m/500;
	q=m-k*500;
	e=q/100;
	t=q-(e*100);
	i=t/50;
	printf("Collect\n%d 500rs notes\n%d 100rs notes\n%d 50rs notes\n",k,e,i);
	
}
