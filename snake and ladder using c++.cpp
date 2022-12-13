#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std; //so we can use 'cout<<"Hello World"<<endl;'in the stead of 'std::cout<<"Hello World"<<endl;' //first let us declare a few necessary functions
void board();//initialize function to draw the board
int check_progress();//initialize function to check game process
int roll_dice();//initialize function to roll dice
//we declare some variales
int roll;//holds the rolled value for the value
int computer_roll;//holds the rolled value of computer
int input;//variable to hold the rolled value for computer 
int progress;//holds the value for the progress
int player=0;
int computer=0;
//both player and computer at initial point 0
int squares[99];//for the 100 squares, computer right count from 0
int main ()//this is where it all goes down in c++
{
	srand(time(NULL) );//we need random numbers remember?
	string alert="";//to alert you for your trimpus and misfortunes
	string computer_alert="";//to alert you for computer trimpus and misfortunes
	cout<<"WELCOME! TO SNAKES AND LADDER GAME"<<endl;
	cout<<"Enter any number to roll dice,press 0 to quit\n\n"<<endl;
	cout<<"SNAKES\tLADDERS\n99-5\t4-36\n93-25/t8-28/n77-9/t35-67/n30-2/t45-66\n\n"<<endl;
	
	for(int i=1;i<=100;i++)//loop just make possible for us to give our squares values
	{
		squares[i]=1;
	}
	do //every game is in some sort of loop
	{
		cout<<"enter: ";
		cin>>input;
		
		roll=roll_dice();//player rolls dice 
		if((roll+player)>100)
		{
			player=player;//player has rolled a number that exceeds the end point player remains where they are
		}
		else
		{
			squares[player]=player;//overwrite the current position 
			player=player+roll;//move player to a new position
		}
		computer_roll=roll_dice();//computer roll dice
		if((computer_roll+computer)>100)
			{
			computer=computer;//computer has rolled a number that exceeds the end point player remains where they are
		}
		else
		{
			squares[computer]=computer;//overwrite the current position 
			computer=computer+roll;//move computer to a new position
		}
		
		switch(player)//it is snakes and ladders,numbers represnt snakes and ladder
		{
			case 99:
			player=5;
			alert="OOPS...  Unfortunately You drop onto a snake";
			break;
			
			case 93:
			player=25;
			alert="OOPS...  Unfortunately You drop onto a snake";
			break;
			
			case 77:
			player=9;
			alert="OOPS...  Unfortunately You drop onto a snake";
			break;
			
			case 52:
			player=6;
			alert="OOPS...  Unfortunately You drop onto a snake";
			break;
			
			case 30:
			player=2;
			alert="OOPS...  Unfortunately You drop onto a snake";
			break;
			
			case 92:
			player=8;
			alert="OOPS...  Unfortunately You drop onto a snake";
			break;
			
			case 90:
			player=15;
			alert="OOPS...  Unfortunately You drop onto a snake";
			break;
			
			case 45:
			player=66;
			alert="OOPS...  Luckly You climbed on a ladder";
			break;
			
			case 12:
			player=49;
			alert="OOPS...  Luckly You climbed on a ladder";
			break;
			
			case 35:
			player=67;
			alert="OOPS...  Luckly You climbed on a ladder";
			break;
			
			case 20:
			player=41;
			alert="OOPS...  Luckly You climbed on a ladder";
			break;
			
			case 10:
			player=28;
			alert="OOPS...  Luckly You climbed on a ladder";
			break;
			
			case 4:
			player=36;
			alert="OOPS...  Luckly You climbed on a ladder";
			break;
			
			default:
			alert="";
		}
		switch(computer)
		{
			case 99:
			player=5;
			alert="OOPS...  Unfortunately Computer drop onto a snake";
			break;
			
			case 93:
			player=25;
			alert="OOPS...  Unfortunately Computer drop onto a snake";
			break;
			
			case 77:
			player=9;
			alert="OOPS...  Unfortunately Computer drop onto a snake";
			break;
			
			case 52:
			player=6;
			alert="OOPS...  Unfortunately Computer drop onto a snake";
			break;
			
			case 30:
			player=2;
			alert="OOPS...  Unfortunately Computer drop onto a snake";
			break;
			
			case 92:
			player=8;
			alert="OOPS...  Unfortunately Computer drop onto a snake";
			break;
			
			case 90:
			player=15;
			alert="OOPS...  Unfortunately Computer drop onto a snake";
			break;
			
			case 45:
			player=66;
			alert="OOPS...  Luckly Computer climbed on a ladder";
			break;
			
			case 12:
			player=49;
			alert="OOPS...  Luckly Computer climbed on a ladder";
			break;
			
			case 35:
			player=67;
			alert="OOPS...  Luckly Computer climbed on a ladder";
			break;
			
			case 20:
			player=41;
			alert="OOPS...  Luckly Computer climbed on a ladder";
			break;
			
			case 10:
			player=28;
			alert="OOPS...  Luckly Computer climbed on a ladder";
			break;
			
			case 4:
			player=36;
			alert="OOPS...  Luckly Computer climbed on a ladder";
			break;
			
			deafault:
		    alert="";
		}
		squares[player]=200;//player's position shall be represented by the integer 200
		squares[computer]=300;//computer'position shall be represented by the integer 300
		if (input!=0)
		{
			cout<<"you rolled "<<roll<<"computer rolled"<<computer_roll<<endl;
			cout<<"Your position:"<<player<<endl;
			cout<<"computer position:"<<computer<<endl;
			cout<<alert<<endl;
			cout<<computer_alert<<endl;
			board();
			cout<<"SNAKES\tLADDERS\n99-5\t4-36\n93-25/t8-28/n77-9/t35-67/n30-2/t45-66\n\n";//so the player knows which is a snake and that which is ladder
			
		}
		
		progress=check_progress();
	}
	while (progress==0 && input!=0);
		if (squares[100]==200)
		{
			cout<<"||YOU WIN!||"<<endl;
		}
		else if(squares[100]==300)
		{
			cout<<"||Game Over Computer Wins!"<<endl;
		}
		else
		{
			cout<<"YOU QUIT"<<endl;
		}
		cin.get();
		cin.ignore();
				
 } 
 void board()//define the board drawing mechanism!
 {
 	cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
 		cout<<squares[100]<<"\t"<<squares[99]<<"\t"<<squares[98]<<"\t"<<squares[97]<<"\t"<<squares[96]<<"\t"<<squares[95]<<"\t"<<squares[94]<<"\t"<<squares[93]<<"\t"<<squares[92]<<"\t"<<squares[91]<<"\t"<<endl<<endl;
 		cout<<squares[81]<<"\t"<<squares[82]<<"\t"<<squares[83]<<"\t"<<squares[84]<<"\t"<<squares[85]<<"\t"<<squares[86]<<"\t"<<squares[87]<<"\t"<<squares[88]<<"\t"<<squares[89]<<"\t"<<squares[90]<<"\t"<<endl<<endl;
 		cout<<squares[80]<<"\t"<<squares[79]<<"\t"<<squares[78]<<"\t"<<squares[77]<<"\t"<<squares[76]<<"\t"<<squares[75]<<"\t"<<squares[74]<<"\t"<<squares[73]<<"\t"<<squares[72]<<"\t"<<squares[71]<<"\t"<<endl<<endl;
 		cout<<squares[61]<<"\t"<<squares[62]<<"\t"<<squares[63]<<"\t"<<squares[64]<<"\t"<<squares[65]<<"\t"<<squares[66]<<"\t"<<squares[67]<<"\t"<<squares[68]<<"\t"<<squares[69]<<"\t"<<squares[70]<<"\t"<<endl<<endl;
 		cout<<squares[60]<<"\t"<<squares[59]<<"\t"<<squares[58]<<"\t"<<squares[57]<<"\t"<<squares[56]<<"\t"<<squares[55]<<"\t"<<squares[54]<<"\t"<<squares[53]<<"\t"<<squares[52]<<"\t"<<squares[51]<<"\t"<<endl<<endl;
 		cout<<squares[41]<<"\t"<<squares[42]<<"\t"<<squares[43]<<"\t"<<squares[44]<<"\t"<<squares[45]<<"\t"<<squares[46]<<"\t"<<squares[47]<<"\t"<<squares[48]<<"\t"<<squares[49]<<"\t"<<squares[50]<<"\t"<<endl<<endl;
 		cout<<squares[40]<<"\t"<<squares[39]<<"\t"<<squares[38]<<"\t"<<squares[37]<<"\t"<<squares[36]<<"\t"<<squares[35]<<"\t"<<squares[34]<<"\t"<<squares[33]<<"\t"<<squares[32]<<"\t"<<squares[31]<<"\t"<<endl<<endl;
 		cout<<squares[21]<<"\t"<<squares[22]<<"\t"<<squares[23]<<"\t"<<squares[24]<<"\t"<<squares[25]<<"\t"<<squares[26]<<"\t"<<squares[27]<<"\t"<<squares[28]<<"\t"<<squares[29]<<"\t"<<squares[30]<<"\t"<<endl<<endl;
 		cout<<squares[20]<<"\t"<<squares[19]<<"\t"<<squares[18]<<"\t"<<squares[17]<<"\t"<<squares[16]<<"\t"<<squares[15]<<"\t"<<squares[14]<<"\t"<<squares[13]<<"\t"<<squares[12]<<"\t"<<squares[11]<<"\t"<<endl<<endl;
 		cout<<squares[01]<<"\t"<<squares[02]<<"\t"<<squares[03]<<"\t"<<squares[04]<<"\t"<<squares[05]<<"\t"<<squares[06]<<"\t"<<squares[07]<<"\t"<<squares[8]<<"\t"<<squares[9]<<"\t"<<squares[10]<<"\t"<<endl<<endl;
 	cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
 }
int roll_dice()//define the dice rolling machanism
{
	return rand()%(7-1)+1;//can only roll 1-6
}
int check_progress()//define the progress checking machanisim
{
	if (squares[100]==200 || squares[100]==300)
	{
		return 1;//game has ended... win! someone has
	}
	else
	{
		return 0;//game is still on, win no one has...
	}
}
