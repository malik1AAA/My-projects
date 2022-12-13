#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
#include <windows.h>
void Borders();
void result1();

void draw_grid();
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void displayline(int inttop,int intright, char* strline);
void draw_line(int n,char ch);
void gotoXY(int x, int y); 
void WaitKey();
void call();
void one();
void two();
void three();
void four();
void five();
void six();
void call();
void board();
void setwindow();

using namespace std;
int random,score;
int diceleft=50;
int sml=1;
char ch=sml;
char player1[]={178,'\0'};
int arr[10][10]={{100,99,98,97,96,95,94,93,92,91},
				{81,82,83,84,85,86,87,88,89,90},
				{90,79,78,77,76,75,74,73,72,71},
				{61,62,63,64,65,66,67,68,69,70},
				{60,59,58,57,56,55,54,53,52,51},
				{41,42,43,44,45,46,47,48,49,50},
				{40,39,38,37,36,35,34,33,32,31},
				{21,22,23,24,25,26,27,28,29,30},
				{20,19,18,17,16,15,14,13,12,11},
				{1,2,3,4,5,6,7,8,9,10}};

//---------------------------------------------------------
main()
{
	setwindow();
	board();
	draw_grid();
	score=0;
	int charcol=7+(score*5),charrow=35,newval;
	gotoXY(charcol,charrow);
	cout<<char(178);
	
	while (true)
	{
		
		gotoXY(3,40);
		cout<<"Press any key to Roll Dice " ;
		WaitKey();
		call();
		gotoXY(3,42);
		cout<<"Your Dice Number is : "<<random ;
		score+=random;
		switch(score)
		{
			case 98 :score=28;break;
			case 95 :score=24;break;
			case 92 :score=51;break;
			case 83 :score=19;break;
			case 73 :score=1;break;
			case 69 :score=33;break;
			case 64 :score=36;break;
			
			case 6 :score=27;break;
			case 23 :score=37;break;
			case 42 :score=72;break;
			case 56 :score=88;break;
			case 62 :score=91;break;
			case 80 :score=97;break;	
		}

		if ( score >100)
		{
		  score-=random;	
		}	
		if(score<=10)
		{
			gotoXY(charcol,charrow);
			cout<<" ";
			charcol=9+(score*5);
			charrow=35;
			gotoXY(charcol,charrow);
			cout<<player1;
		} 
		
	   else if(score<=20)
		{ 
			newval = score % 10;
			if (newval==0)
				newval = 10;
			gotoXY(charcol,charrow);
			cout<<" ";
			
			charcol=64-(newval*5);
			charrow=33;
			gotoXY(charcol,charrow);
			cout<<player1;
		}

	   else if(score<=30)
		{
			newval = score % 10;
			if (newval==0)
				newval = 10;
			gotoXY(charcol,charrow);
			cout<<" ";
			charcol=9+(newval*5);
			charrow=31;
			gotoXY(charcol,charrow);
			cout<<player1;
		} 

   		else if(score<=40)
		{ 
			newval = score % 10;
			if (newval==0)
				newval = 10;
			gotoXY(charcol,charrow);
			cout<<" ";
			charcol=64-(newval*5);
			charrow=29;
			gotoXY(charcol,charrow);
			cout<<player1;
		}

	   else if(score<=50)
		{
			int newval = score % 10;
			if (newval==0)
				newval = 10;
			gotoXY(charcol,charrow);
			cout<<" ";
			charcol=9+(newval*5);
			charrow=27;
			gotoXY(charcol,charrow);
			cout<<player1;
		} 

	   else if(score<=60)
		{ 
			int newval = score % 10;
			if (newval==0)
				newval = 10;
			gotoXY(charcol,charrow);
			cout<<" ";
			charcol=64-(newval*5);
			charrow=25;
			gotoXY(charcol,charrow);
			cout<<player1;
		}

	   else if(score<=70)
		{
			int newval = score % 10;
			if (newval==0)
				newval = 10;
			gotoXY(charcol,charrow);
			cout<<" ";
			charcol=9+(newval*5);
			charrow=23;
			gotoXY(charcol,charrow);
			cout<<player1;
		} 

	   else if(score<=80)
		{ 
			int newval = score % 10;
			if (newval==0)
				newval = 10;
			gotoXY(charcol,charrow);
			cout<<" ";
			charcol=64-(newval*5);
			charrow=21;
			gotoXY(charcol,charrow);
			cout<<player1;
		}

	   else if(score<=90)
		{
			int newval = score % 10;
			if (newval==0)
				newval = 10;
			gotoXY(charcol,charrow);
			cout<<" ";
			charcol=9+(newval*5);
			charrow=19;
			gotoXY(charcol,charrow);
			cout<<player1;
		} 

	   else if(score<=100)
		{ 
			int newval = score % 10;
			if (newval==0)
				newval = 10;
			gotoXY(charcol,charrow);
			cout<<" ";
			charcol=64-(newval*5);
			charrow=17;
			gotoXY(charcol,charrow);
			cout<<player1;
		}
		
		gotoXY(3,44);
		cout<<"Your Postion is : "<<score ;


		if (score==100)
		{
		 	break;
		}

    }
}


void draw_grid() 
 {
  int x,y,nrow,ncol;
  char topl[]={201,205,205,205,205,203,205,205,205,205,203,205,205,205,205,203,205,205,205,205,203,205,205,205,205,203,205,205,205,205,203,205,205,205,205,203,205,205,205,205,203,205,205,205,205,203,205,205,205,205,187,'\0'};
  char midl[]={204,205,205,205,205,206,205,205,205,205,206,205,205,205,205,206,205,205,205,205,206,205,205,205,205,206,205,205,205,205,206,205,205,205,205,206,205,205,205,205,206,205,205,205,205,206,205,205,205,205,185,'\0'};
  char bottoml[]={200,205,205,205,205,202,205,205,205,205,202,205,205,205,205,202,205,205,205,205,202,205,205,205,205,202,205,205,205,205,202,205,205,205,205,202,205,205,205,205,202,205,205,205,205,202,205,205,205,205,188,'\0'};
  nrow=16;
  ncol=10;
  gotoXY(ncol,nrow);
  cout<<topl<<endl;
  for(x=0;x<10;x++)
   {
   	for(y=0;y<10;y++)
   	 {
   	    if(y==0)
   	    {
   	     	++nrow;
   	     	gotoXY(ncol,nrow);
			cout<<char(186);
   	     }
   	    if (arr[x][y] <10)
			cout<<char(32)<<char(32)<<arr[x][y];
		else
			if (arr[x][y] <100)
				cout<<char(32)<<arr[x][y];
			else
				cout<<arr[x][y];
			
		cout<<char(32)<<char(186);
     }
    if (x<9)
		{
   	     	++nrow;
   	     	gotoXY(ncol,nrow);
			cout<<midl<<endl;
		}
     
   }
   	     	++nrow;
   	     	gotoXY(ncol,nrow);
   cout<<bottoml<<endl;
  }
void gotoXY(int x, int y) 
{ 
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}

void WaitKey()
{
   while (_kbhit()) _getch(); // Empty the input buffer
   _getch(); // Wait for a key
   while (_kbhit()) _getch(); // Empty the input buffer (some keys sends two messages)
}

   void call()
    {
        //srand (time(NULL));
        //int n;
        //n= rand();
       // n = 1 + n % 6;
		srand(time(0));
		random= (rand() % 6) + 1;       
		switch (random)
		{
         case 1:
            one();
			Sleep(40);
			two();
			Sleep(40);
			three();
			Sleep(40);
			four();
			Sleep(40);	
			five();
			Sleep(40);	
			six();
			Sleep(40);
		    one();
            break;
         case 2:
            one();
			Sleep(40);
			two();
			Sleep(40);
			three();
			Sleep(40);
			four();
			Sleep(40);	
			five();
			Sleep(40);	
			six();
			Sleep(40);
		    two();
            break;
         case 3:
            one();
			Sleep(40);
			two();
			Sleep(40);
			three();
			Sleep(40);
			four();
			Sleep(40);	
			five();
			Sleep(40);	
			six();
			Sleep(40);
		    three();
            break;
         case 4:
            one();
			Sleep(40);
			two();
			Sleep(40);
			three();
			Sleep(40);
			four();
			Sleep(40);	
			five();
			Sleep(40);	
			six();
			Sleep(40);
		    four();
            break;
         case 5:
            one();
			Sleep(40);
			two();
			Sleep(40);
			three();
			Sleep(40);
			four();
			Sleep(40);	
			five();
			Sleep(40);	
			six();
			Sleep(40);
		    five();
            break;
         case 6:
            one();
			Sleep(40);
			two();
			Sleep(40);
			three();
			Sleep(40);
			four();
			Sleep(40);	
			five();
			Sleep(40);	
			six();
			Sleep(40);
		    six();
            break;
         default:
                 cout<<"wrong";

        }       
    }  

/*void draw_dice(int num)
{
	int dicerow=23;
	char topdice[]={201,205,205,205,205,205,187,'\0'};
	char middice1[]={186,32,32,32,32,32,186,'\0'};
	char middice2[]={186,32,32,219,32,32,186,'\0'};
	char middice3[]={186,32,32,32,32,32,186,'\0'};
	char botdice[]={200,205,205,205,205,205,188,'\0'};
	
	if(num==1)
	{
		middice1[]={186,32,32,32,32,32,186,'\0'};
		middice2[]={186,32,32,219,32,32,186,'\0'};
		middice3[]={186,32,32,32,32,32,186,'\0'};
	}
	
	if(num==2)
	{
		middice1[]={186,32,32,32,32,32,32,186,'\0'};
		middice2[]={186,32,219,32,32,219,32,186,'\0'};
		middice3[]={186,32,32,32,32,32,32,186,'\0'};
			
	}
    
    displayline(21,++dicerow,topdice);
	displayline(21,++dicerow,middice1);
	displayline(21,++dicerow,middice2);
	displayline(21,++dicerow,middice3);
	displayline(21,++dicerow,botdice);	    
}

*/
void one()
{
	int dicerow=40;
	char topdice[]={201,205,205,205,205,205,205,187,'\0'};
	char middice1[]={186,32,32,32,32,32,32,186,'\0'};
	char middice2[]={186,32,32,219,219,32,32,186,'\0'};
	char middice3[]={186,32,32,32,32,32,32,186,'\0'};
	char botdice[]={200,205,205,205,205,205,205,188,'\0'};
	
    displayline(diceleft,++dicerow,topdice);
	displayline(diceleft,++dicerow,middice1);
	displayline(diceleft,++dicerow,middice2);
	displayline(diceleft,++dicerow,middice3);
	displayline(diceleft,++dicerow,botdice);	    
}

void two()
{
	int dicerow=40;
	char topdice[]={201,205,205,205,205,205,205,187,'\0'};
	char middice1[]={186,32,32,32,32,32,32,186,'\0'};
	char middice2[]={186,32,219,32,32,219,32,186,'\0'};
	char middice3[]={186,32,32,32,32,32,32,186,'\0'};
	char botdice[]={200,205,205,205,205,205,205,188,'\0'};
        
    displayline(diceleft,++dicerow,topdice);
	displayline(diceleft,++dicerow,middice1);
	displayline(diceleft,++dicerow,middice2);
	displayline(diceleft,++dicerow,middice3);
	displayline(diceleft,++dicerow,botdice);	    
}
void three()
{
    int dicerow=40;
	char topdice[]={201,205,205,205,205,205,205,187,'\0'};
	char middice1[]={186,32,32,32,32,32,219,186,'\0'};
	char middice2[]={186,32,32,219,32,32,32,186,'\0'};
	char middice3[]={186,219,32,32,32,32,32,186,'\0'};
	char botdice[]={200,205,205,205,205,205,205,188,'\0'};
        
    displayline(diceleft,++dicerow,topdice);
	displayline(diceleft,++dicerow,middice1);
	displayline(diceleft,++dicerow,middice2);
	displayline(diceleft,++dicerow,middice3);
	displayline(diceleft,++dicerow,botdice);	
        }
void four()
{
	int dicerow=40;
	char topdice[]={201,205,205,205,205,205,205,187,'\0'};
	char middice1[]={186,32,219,32,32,219,32,186,'\0'};
	char middice2[]={186,32,32,32,32,32,32,186,'\0'};
	char middice3[]={186,32,219,32,32,219,32,186,'\0'};
	char botdice[]={200,205,205,205,205,205,205,188,'\0'};
        
    displayline(diceleft,++dicerow,topdice);
	displayline(diceleft,++dicerow,middice1);
	displayline(diceleft,++dicerow,middice2);
	displayline(diceleft,++dicerow,middice3);
	displayline(diceleft,++dicerow,botdice);	    
}
void five()
{
    int dicerow=40;
	char topdice[]={201,205,205,205,205,205,205,187,'\0'};
	char middice1[]={186,219,32,32,32,32,219,186,'\0'};
	char middice2[]={186,32,32,219,219,32,32,186,'\0'};
	char middice3[]={186,219,32,32,32,32,219,186,'\0'};
	char botdice[]={200,205,205,205,205,205,205,188,'\0'};
        
    displayline(diceleft,++dicerow,topdice);
	displayline(diceleft,++dicerow,middice1);
	displayline(diceleft,++dicerow,middice2);
	displayline(diceleft,++dicerow,middice3);
	displayline(diceleft,++dicerow,botdice);	
        }
void six()
{
    int dicerow=40;
	char topdice[]={201,205,205,205,205,205,205,187,'\0'};
	char middice1[]={186,220,32,32,32,32,220,186,'\0'};
	char middice2[]={186,220,32,32,32,32,220,186,'\0'};
	char middice3[]={186,220,32,32,32,32,220,186,'\0'};
	char botdice[]={200,205,205,205,205,205,205,188,'\0'};
        
    displayline(diceleft,++dicerow,topdice);
	displayline(diceleft,++dicerow,middice1);
	displayline(diceleft,++dicerow,middice2);
	displayline(diceleft,++dicerow,middice3);
	displayline(diceleft,++dicerow,botdice);	
 }
void displayline(int inttop,int intright, char* strline)
{
	gotoXY(inttop,intright);
	cout <<strline;
    
}

void board()
{
  int boardrow=15,boardcol=80;	
  gotoXY(boardcol,++boardrow);
  draw_line(22,char(205));
  gotoXY(83,++boardrow);
  cout<<"SNAKE AT POSITION";
  gotoXY(boardcol,++boardrow);
  draw_line(22,char(205));
  gotoXY(boardcol,++boardrow);
  cout<<"From 98 to 28";
  gotoXY(boardcol,++boardrow);
  cout<<"From 95 to 24";
  gotoXY(boardcol,++boardrow);
  cout<<"From 92 to 51";
  gotoXY(boardcol,++boardrow);
  cout<<"From 83 to 19";
  gotoXY(boardcol,++boardrow);
  cout<<"From 73 to  1";
  gotoXY(boardcol,++boardrow);
  cout<<"From 69 to 33";
  gotoXY(boardcol,++boardrow);
  cout<<"From 64 to 36";
  gotoXY(boardcol,++boardrow);
  cout<<"";
  	
  gotoXY(boardcol,++boardrow);
  draw_line(22,char(205));
  gotoXY(83,++boardrow);
  cout<<"LADDER AT POSITION";
  gotoXY(boardcol,++boardrow);
  draw_line(22,char(205));
  gotoXY(boardcol,++boardrow);
  cout<<"From 6 to  27";
  gotoXY(boardcol,++boardrow);
  cout<<"From 23 to 37";
  gotoXY(boardcol,++boardrow);
  cout<<"From 42 to 72";
  gotoXY(boardcol,++boardrow);
  cout<<"From 56 to 88";
  gotoXY(boardcol,++boardrow);
  cout<<"From 62 to 91";
  gotoXY(boardcol,++boardrow);
  cout<<"From 80 to 97";


  
  /*cout<<"__________________________";
  cout<<"\n\t\t LADDER AT POSITION\n";
  cout<<"__________________________";
  cout<<"\n\tFrom  8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";
  cout<<"__________________________";
  cout<<endl;*/
}
void draw_line(int n,char ch)
{
for(int i=0;i<n;i++)
   cout<<ch;
}
void setwindow()
{
    SMALL_RECT rect;
    COORD coord;
    coord.X = 110; // Defining our X and
    coord.Y = 55;  // Y size for buffer.

    rect.Top = 0;
    rect.Left = 0;
    rect.Bottom = coord.Y-1; // height for window
    rect.Right = coord.X-1;  // width for window

    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE); // get handle
    SetConsoleScreenBufferSize(hwnd, coord);       // set buffer size
    SetConsoleWindowInfo(hwnd, TRUE, &rect);       // set window size
} 
