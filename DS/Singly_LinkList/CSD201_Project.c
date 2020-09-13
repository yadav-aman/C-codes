//CSD201 Project: Voting System for Bihar Legislative Assembly Elections 2020 (Use of linked lists & string processsing)
//Team Members: Aman (1910110052), Aniket (1910110066), Naman (1910110250), Prashant (1910110284), Shagun (1910110363)

//Eligibility to vote: Voter's name should be in the electoral roll:

//Electoral Roll for Bihar Elections 2020 are as follows: (ID, NAME, DOB, SEX, FATHER'S NAME)  [Electoral data is secured, has to be typed only]

//This is just a case of hypothesis. Actual roll consists of lacs of voter data which is quite huge task to do for 5 of us :).

//BRND225001, Priya Choudhary, 23/07/1992, Female, Vinod Choudhary
//BRND225002, Nitish Kumar, 01/03/1951, Male, Ram Lakhan Singh
//BRND225003, Ramvilas Paswan, 04/03/1954, Male, Kishore Paswan
//BRND225004, Tejaswi Yadav, 18/08/1993, Male, Lalu Yadav
//BRND225005, Sushil Modi, 23/02/1959, Male, Lalit Modi
//BRND225006, Shyama Singh, 26/11/1952, Female, Nikhil Kumar
//BRND225007, Jagannath Mishra, 24/06/1942, Male, Rameshwar Mishra
//BRND225008, Rabri Devi, 01/01/1965, Female, Vishnu Jha
//BRND225009, Md. Alam Khan, 24/07/1987, Male, Md. Tanvir
//BRND225010, Shah Bano, 12/11/1985, Female, Kafeel Ahmed

//Password to admin panel= 11052001

//Rmarks: This system is case as well as format sensitive.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<unistd.h>

void lead();
void vote_bank();
void admin();
void vote();
void vote_feed();
void ex();
void wrong_data();
void correct_data();
void main_panel();

typedef struct voterInfo  //Creates voter's information
{
	char ID[15]; //10 digit alphanumeric voter ID
	char name[25]; //Voter's name
	char sex[5]; //M= Male; F= Female; O= Others
	char father_name[25]; //Father's name
	char DOB[15]; //Format DD/MM/YYYY
	struct voterInfo *next;
} node;

node *head;

//Initialization of global counters for data feeding process
int count1=0;
int count2=0;
int count3=0;
int count4=0;
int count5=0;

int main()
{
	system ("cls");
	
	printf ("\n\n");
	printf ("                                       Satyamev Jayate- Bharat Nirvachan Aayog\n\n");
	sleep (500);
	printf ("-----------------------------------------------------------------------------------------------------------------------\n\n");
	sleep (500);
	printf ("                      **************** WELCOME TO ELECTION COMMISSION OF INDIA ***************                 \n");
	sleep (500);
	printf ("                                               Bihar Division, Patna                                           \n\n\n");
	sleep (500);
	printf ("                  BIHAR VIDHAN SABHA NIRVACHAN 2020           BIHAR LEGISLATIVE ASSEMBLY ELECTIONS 2020         \n\n");
	sleep (500);
	printf ("                                  ECI presenting the first online voting system of India.                        \n\n\n");
	sleep (500);
    printf ("                                          Press M to enter the main panel !!!                                \n\n\n");//Case sensitive
    sleep (500);
	printf ("________________________________________________________________________________________________________________________\n\n\n");
	sleep (500);
	printf ("                                    � Copyright Election Commission of India                                    \n\n");
	sleep (700);
	printf ("\n\n                                                      ");
	sleep (1000);
	
	char ch;
	scanf ("%c", &ch);
	
	if (ch!=77)
	{ 
	  printf ("\n           INPUT ERROR");
	  sleep (1000);
	  printf ("\n\n        System Failure");
	  sleep (500);
	  
	  ex();
	  return 0;
    }
    
	else
	{
      printf ("\n\n                                                  LOADING.....                                                  \n");
      sleep (1000); //Delay of 1 sec= sleep(1000).
		
	  main_panel();
	}
	
}
	
void main_panel()
{
	system ("cls");
	
	printf ("\n\n\n\n\n\n\n\n");
	sleep (500);
	printf ("                    \t\t\t(1) VOTE YOUR CANDIDATE ........\n\n");
	sleep (500);
	printf ("                    \t\t\t(2) ENTER ADMIN PANEL ........\n\n");
	sleep (500);
	printf ("                    \t\t\t(3) CANDIDATE IN LEAD ........\n\n");
	sleep (500);
	printf ("                    \t\t\t(4) EXIT THE OVS........\n\n\n"); //OVS: Online Voting System
	printf ("              \t\t\tNOTE for voters: Press 1 to give your vote\n\n");
	
	int choice;
	printf ("                                                      ");
	scanf ("%d", &choice);
	
	if (choice==1)
	{
		vote_feed();
	}
	
    if (choice==2)
	{
		admin();
	}
	
	if (choice==3)
	{
		lead();
	}
	
	if (choice==4)
	{
		ex(); //Exit
	}
}

int count=0, cnt=0, R=3;

void vote_feed()
{
	node *temp;
	
	char ID[15], name[25], sex[5], father_name[25], DOB[15];
	
	system ("cls");
	
	printf ("\n\n\n\n\n");
	sleep (500);
	printf ("    NOTE: Please make sure that you're registered in the electoral roll (View Source Code)\n\n\n");
	sleep (1000);
	printf ("          Your ID will be blocked after %d unsuccessful attempts for 3 hrs!!!\n\n", R);
	sleep (1000);
	printf ("                     You're entering the data feeding panel\n");
	sleep (500);
	printf ("                                      .\n");
	sleep (500);
	printf ("                                      .\n");
	sleep (500);
	printf ("                                      .\n");
	sleep (500);
	printf ("               This process may take several seconds. Kindly, be patient\n");
	sleep (500);
	printf ("                                      .\n");
	sleep (500);
	printf ("                                      .\n");
	sleep (500);
	printf ("                                      .\n");
	sleep (500);
	printf ("                                 Did you know?\n\n");
	sleep (500);
	printf ("                   BIHAR: THE FIRST STATE TO WITNESS BOOTH CAPTURING\n");
	sleep (1000);
	printf (" The first instance of booth capturing in India was recorded in 1957 in the General Elections of that\n");
	printf ("                         year in Rachiyahi of Begusarai constituency.\n");
	sleep (1500);
	printf ("                                      .\n");
	sleep (500);
	printf ("                                      .\n");
	sleep (500);
	printf ("                                      .\n");
	sleep (500);
	printf ("                              Thanks for your patience.\n\n\n\n\n");
	sleep (500);
	printf ("                      ENTER VOTER ID (as per your EPIC):   ");
	gets (ID);
	gets (ID);
	printf ("                      ENTER NAME (as per your EPIC):   ");
	gets (name);
	printf ("                      ENTER DOB (as per your EPIC in DD/MM/YYYY format):   ");
	gets (DOB);
	printf ("                      ENTER GENDER (as per your EPIC as M/F/O):   ");
	gets (sex);
	printf ("                      ENTER FATHER'S NAME (as per your EPIC):   ");
	gets (father_name);
	
	temp= (node *)malloc(sizeof(node));
	
	strcpy (temp->ID, ID);
	strcpy (temp->name, name);
	strcpy (temp->DOB, DOB);
	strcpy (temp->sex, sex);
	strcpy (temp->father_name, father_name);
	
	temp->next = NULL;
	head=temp;
	
	while (temp!=NULL)
	{
		if ((strcmp(temp->ID, "BRND225001")==0 && strcmp(temp->name, "Priya Choudhary")==0 && strcmp(temp->DOB, "23/07/1992")==0 && strcmp(temp->sex, "F")==0 && strcmp(temp->father_name, "Vinod Choudhary")==0) ||
		
		(strcmp(temp->ID, "BRND225002")==0 && strcmp(temp->name, "Nitish Kumar")==0 && strcmp(temp->DOB, "01/03/1951")==0 && strcmp(temp->sex, "M")==0 && strcmp(temp->father_name, "Ram Lakhan Singh")==0) ||
		
		(strcmp(temp->ID, "BRND225003")==0 && strcmp(temp->name, "Ramvilas Paswan")==0 && strcmp(temp->DOB, "04/03/1954")==0 && strcmp(temp->sex, "M")==0 && strcmp(temp->father_name, "Kishore Paswan")==0) ||
		
		(strcmp(temp->ID, "BRND225004")==0 && strcmp(temp->name, "Tejaswi Yadav")==0 && strcmp(temp->DOB, "18/08/1993")==0 && strcmp(temp->sex, "M")==0 && strcmp(temp->father_name, "Lalu Yadav")==0) ||
		
		(strcmp(temp->ID, "BRND225005")==0 && strcmp(temp->name, "Sushil Modi")==0 && strcmp(temp->DOB, "23/02/1959")==0 && strcmp(temp->sex, "M")==0 && strcmp(temp->father_name, "Lalit Modi")==0) ||
		
		(strcmp(temp->ID, "BRND225006")==0 && strcmp(temp->name, "Shyama Singh")==0 && strcmp(temp->DOB, "26/11/1952")==0 && strcmp(temp->sex, "F")==0 && strcmp(temp->father_name, "Nikhil Kumar")==0) ||
		
		(strcmp(temp->ID, "BRND225007")==0 && strcmp(temp->name, "Jagannath Mishra")==0 && strcmp(temp->DOB, "24/06/1942")==0 && strcmp(temp->sex, "M")==0 && strcmp(temp->father_name, "Rameshwar Mishra")==0) ||
		
		(strcmp(temp->ID, "BRND225008")==0 && strcmp(temp->name, "Rabri Devi")==0 && strcmp(temp->DOB, "01/01/1965")==0 && strcmp(temp->sex, "F")==0 && strcmp(temp->father_name, "Vishnu Jha")==0) ||
		
		(strcmp(temp->ID, "BRND225009")==0 && strcmp(temp->name, "Md. Alam Khan")==0 && strcmp(temp->DOB, "24/07/1987")==0 && strcmp(temp->sex, "M")==0 && strcmp(temp->father_name, "Md. Tanvir")==0) ||
		
		(strcmp(temp->ID, "BRND225010")==0 && strcmp(temp->name, "Shah Bano")==0 && strcmp(temp->DOB, "12/11/1985")==0 && strcmp(temp->sex, "F")==0 && strcmp(temp->father_name, "Kafeel Ahmed")==0))
	
    	{
	      count++;
	      if (count>1)
	      {
	    	correct_data();
		    break;
	      }    
	     	vote();
        } 
    
        else
        {
    	  R--;
    	  cnt++;
    	
    	  if (cnt==3)
    	   {
    	    	wrong_data();
    	 	    break;
		   }
		 printf ("\n\n\n\n");
		 printf ("                           OOPS! VOTER NOT FOUND.\n\n");
		 sleep (300);
		 printf ("                        %d unsuccessful attemps left\n\n", R);
		 sleep (1000);
		 system ("pause");
		
		 main_panel();
	    }
	    
	    temp=temp->next;
    }
}
    
void vote()
{
	system ("cls");
	
	printf ("\n\n\n\n\n\n");
		printf ("\n\n");
	sleep (500);
	printf ("                       **************** LIST OF CANDIDATES ***************                 \n\n\n");
	sleep (1000);
	printf ("|------------------------------------------------------------------------------------------------------------|\n");
	sleep (500);
	printf ("|               Name of Candidate               Party                    Party Symbol                        |\n");
	sleep (500);
	printf ("|------------------------------------------------------------------------------------------------------------|\n");
	sleep (500);
	printf ("|           (1) Nitish Kumar                    NDA: JD(U) + BJP         Arrow                               |\n");
    sleep (500);
    printf ("|------------------------------------------------------------------------------------------------------------|\n");
	sleep (500);
	printf ("|           (2) Tejaswi Yadav                   UPA: RJD + INC + RLSP    Lantern                             |\n");
	sleep (500);
	printf ("|------------------------------------------------------------------------------------------------------------|\n");
	sleep (500);
	printf ("|           (3) Ramvilas Paswan                 LJP                      RGB Flag                            |\n");
	sleep (500);
	printf ("|------------------------------------------------------------------------------------------------------------|\n");
	sleep (500);
	printf ("|           (4) Pushpam Priya Choudhary         Plurals                  Flying Horse                        |\n");
	sleep (500);
    printf ("|------------------------------------------------------------------------------------------------------------|\n");
	sleep (500);
	printf ("|           (5)                                 NOTA                                                         |\n");
	sleep (500);
	printf ("|------------------------------------------------------------------------------------------------------------|\n\n\n\n");
	
	int choice, j;
	printf ("                 Select your candidate by their respective number:          \n");
	printf ("                                              \n\n");
	sleep (500);
	
	for (j=1; j<=1; j++)
	{
		scanf ("%d", &choice);
		
		if (choice==1)
		{
			count1++;
			printf ("                            You sucessfully voted for Nitish Kumar.");
			sleep (1000);
		}
		
		if (choice==2)
		{
			count2++;
			printf ("                            You sucessfully voted for Tejaswi Yadav.");
			sleep (1000);
		}
		
		if (choice==3)
		{
			count3++;
			printf ("                            You sucessfully voted for Ramvilas Paswan.");
			sleep (1000);
		}
		
		if (choice==4)
		{
			count4++;
			printf ("                         You sucessfully voted for Pushpam Priya Choudhary.");
			sleep (1000);
		}
		
		if (choice==5)
		{
			count5++;
			printf ("                                  You sucessfully opted for NOTA.");
			sleep (1000);
		}
		
		if (choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5)
		{
			printf ("\n               INVALID SELECTION");
			sleep (500);
			
			vote();
		}
	}
	
	int R;
	system ("cls");
	
	printf ("/n/n/n/n/n/n/n/n");
	printf ("                   Press 1 to see the candidate in lead  OR  0 to return to the main panel.\n\n");
	
	if (R=1)
	{
		lead();
	}
	
	if (R!=1)
	{
		main_panel();
	}
}

void admin()
{
	int pass;
	printf ("\n\n\n\n\n\n");
	printf ("                                 ADMIN PASSWORD:    ");
	scanf ("%d", &pass);
	{
	 if (pass!=11052001)
		{
		  printf ("\n\n\n                                  INVALID PASSWORD!\n\n");
		  sleep (500);
		  printf ("                                  Contact administrator.\n\n\n\n\n");
	    }
	
	else
		{
		  vote_bank();
	    }
    }
}

void vote_bank()
{
	system ("cls");
	
	printf ("\n\n\n\n\n\n");
	    sleep (500);
	printf ("   \t\t\t\tNitish Kumar (NDA)                : %d\n\n", count1);
		sleep (500);
	printf ("   \t\t\t\tTejaswi Yadav (UPA)               : %d\n\n", count2);
		sleep (500);
	printf ("   \t\t\t\tRamvilas Paswan (LJP)             : %d\n\n", count3);
		sleep (500);
	printf ("   \t\t\t\tPushpam Priya Choudhary (Plurals) : %d\n\n\n\n\n", count4);
	    sleep (1000);
	printf ("   \t\t\t\tNOTA                              : %d\n\n\n\n\n", count5);
	    sleep (1000);
	
	int a;
	printf ("\t\t\tPress 1 for main panel  OR  0 to exit the system.\n\n");
	printf ("\t\t\t              ");
	scanf ("%d", &a);
	
	if (a==1)
	{
		main_panel();
	}
	
	else
	{
		ex();
	}
	
}

void lead()
{
	system ("cls");
	
	printf ("\n\n\n\n");
	
	if (count1>count2 && count1>count3 && count1>count4 && count1>count5)
	{
		printf (" \t\t\t\tNitish Kumar (NDA) is leading with %d votes.\n\n", count1);
	}
		
	if (count2>count1 && count2>count3 && count2>count4 && count2>count5)
	{
		printf (" \t\t\t\tTejaswi Yadav (UPA) is leading with %d votes.\n\n", count2);
	}
		
	if (count3>count1 && count3>count2 && count3>count4 && count3>count5)
	{
		printf (" \t\t\t\tRamvilas Paswan (LJP) is leading with %d votes.\n\n", count3);
	}
		
	if (count4>count1 && count4>count2 && count4>count3 && count4>count5)
	{
		printf (" \t\t\t\tPushpam Priya Choudhary (Plurals) is leading with %d votes.\n\n", count4);
	}
	
	if (count5>count1 && count5>count2 && count5>count3 && count5>count4)
	{
		printf (" \t\t\t\t%d voters found all the candidates incompetent.\n\n", count5);
	}
	
	int a;
	printf ("   \t\t\t\tPress 1 for main panel  OR  0 to exit the system.\n\n");
	scanf ("%d", &a);
	
	if (a==1)
	{
		main_panel();
	}
	
	else
	{
		ex();
	}
}

void wrong_data()
{
	system ("cls");
	
	printf ("\n\n\n\n");
	printf ("   \t\t\t\tYOU'VE EXCEEDED INVALID DATA ATTEMPTS!\n\n");
	sleep(500);
	printf ("   \t\t\t\t VOTER ID HAS BEENLOCKED FOR 3 HRS.\n");
	sleep(500);
	printf ("   \t\t\t\t     CONTACT POLLING OFFICER.\n");
	sleep(1000);
	ex();
}

void correct_data()
{
	system ("cls");
	
	printf ("   \t\t\t\tVote registerd successfully.");
	printf ("   \t\t\t\t    Thanks for coming.");
	sleep (3000);
	
	ex();
}

void ex()
{
	system ("cls");
	
	printf ("\n\n                                     Closing OVS in...");
	sleep (1000);
	printf ("\n\n                                           3");
	sleep (1000);
	printf ("\n\n                                           2");
	sleep (1000);
	printf ("\n\n                                           1\n\n\n\n\n\n\n\n");
	sleep (500);
}
