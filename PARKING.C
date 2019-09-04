
#include<stdio.h>
// #include<conio.h>
int nob=0,noc=0,nor=0,nom=0,count=0,amount=0;

       /* Function decalartion */

int Menu();
void Bus();
void Car();
void Motorcycle();
void Riksha();
void ShowDetails();
void Delete();
	/*  main function start */
main()
{
  while(1)         /*  while loop used here for countineu the switch  case */
 {
   //clrscr();

   switch(Menu())
  {
   case 1:
	Bus();            /* Function call */
	break;
   case 2:
	Car();            /* Function call */
	break;
   case 3:
	Riksha();         /* Function call */
	break;
   case 4:
	Motorcycle();    /* Function call */
	break;
   case 5:
	ShowDetails();   /* Function call */
	break;
   case 6:
	Delete();        /* Function call */
	break;
   case 7:
//	exit(0);
   default :
	printf("\n Invalid choice");

  }
//  getch();
 }
}
int Menu()                            /* Menu()  Function define here  */
{ int ch;
  printf("\n1.Bus entry(50)");
  printf("\n2.Car entry(40)");
  printf("\n3.Riksha entry(30)");
  printf("\n4.Motorcycle entry(20)");
  printf("\n5.Show Details");
  printf("\n6.Delete");
  printf("\n7.Exit");
  printf("\n\nEnter your choice:");
  scanf("%d",&ch);
  return(ch);
}
void Bus()                            /* Bus() Function define here  */
{  printf("\n Entry succesful");
   nob++;
   count++;
   amount =amount+ 50;
}
void Car()                            /* Car() Function define here  */
{ printf("\n Entry succesful");
  noc++;
  count++;
  amount =amount + 40;
}
void Riksha()                         /* Riksha()  Function define here  */
{ printf("\n entry succesful");
  nor++;
  count++;
  amount= amount+30;
}
void Motorcycle()                     /* Motorcycle()  Function define here  */
{ printf("\n Entry succesful");
  nom++;
  count++;
  amount = amount+20;
}
void ShowDetails()                              /* Showdetails()  Function define here  */
{ printf("\nTotal vehical=%d",nob+noc+nor+nom);
  printf("\nNumber of bus=%d",nob);
  printf("\nNumber of car=%d",noc);
  printf("\nNumber of riksha=%d",nor);
  printf("\nNumber of motorcycle=%d",nom);
  printf("\nTotal amount=%d",amount);
}
void Delete()                                   /* Delete()  Function define here  */
{ nob=0;
  noc=0;
  nor=0;
  nom=0;
  amount=0;
  count=0;
}
