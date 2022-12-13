#include <iostream>
#include <ctime>
#include<cstdlib>
#include<iomanip>
char winloss(int,int);
void rules();
using namespace std;
int main()
{
string name ;
int coins , bidcoins, loop;
int rnumber;
char choice,purch;
int guess;
void cursorpoint();
srand(time(0));
cout<<setw(100)<<" *****************************************************************************************\n";
system ("color 6");
cout<<setw(100)<<"*****************************************************************************************\n";
cout<<setw(100)<<"* GGGGGGGGGGGGGG     UUU        UUU    EEEEEEEEEEEEEE      SSSSSSSSSSSSS  SSSSSSSSSSSSS *\n";
cout<<setw(100)<<"* GGGGGGGGGGGGGG     UUU        UUU    EEEEEEEEEEEEEE      SS         SS  SS         SS *\n";
cout<<setw(100)<<"* GGG         GG     UUU        UUU    EEE                 SS             SS            *\n";
cout<<setw(100)<<"* GGG                UUU        UUU    EEE                 SS             SS            *\n";
cout<<setw(100)<<"* GGG                UUU        UUU    EEE                 SS             SS            *\n";
cout<<setw(100)<<"* GGG                UUU        UUU    EEEEEEEEEEEEEE      SSSSSSSSSSSSS  SSSSSSSSSSSSS *\n";
cout<<setw(100)<<"* GGG      GGGGG     UUU        UUU    EEEEEEEEEEEEEE      SSSSSSSSSSSSS  SSSSSSSSSSSSS *\n";
cout<<setw(100)<<"* GGG      G  GG     UUU        UUU    EEE                            SS             SS *\n";
cout<<setw(100)<<"* GGG         GG     UUU        UUU    EEE                            SS             SS *\n";
cout<<setw(100)<<"* GGGGGGGGGGGGGG     UUU        UUU    EEE                 SS         SS  SS         SS *\n";
cout<<setw(100)<<"* GGGGGGGGGGGGGG     UUUUUUUUUUUUUU    EEEEEEEEEEEEEE      SSSSSSSSSSSSS  SSSSSSSSSSSSS *\n";
cout<<setw(100)<<" *****************************************************************************************\n";
cout<<setw(100)<<"*****************************************************************************************\n";
cout<<setw(100)<<"*             GGGGGGGGGGGGGG     AAAAAAAAAAAAAA MMMMMMMMMMMMMMMM   EEEEEEEEEEEEEE       *\n";
cout<<setw(100)<<"*             GGGGGGGGGGGGGG     AAA        AAA MMMMMMMMMMMMMMMM   EEEEEEEEEEEEEE       *\n";
cout<<setw(100)<<"*             GGG         GG     AAA        AAA MM     WW     MM   EEE                  *\n";
cout<<setw(100)<<"*             GGG                AAA        AAA MM     WW     MM   EEE                  *\n";
cout<<setw(100)<<"*             GGG                AAA        AAA MM     WW     MM   EEE                  *\n";
cout<<setw(100)<<"*             GGG                AAAAAAAAAAAAAA MM     WW     MM   EEEEEEEEEEEEEE       *\n";
cout<<setw(100)<<"*             GGG      GGGGG     AAAAAAAAAAAAAA MM     WW     MM   EEEEEEEEEEEEEE       *\n";
cout<<setw(100)<<"*             GGG      G  GG     AAA        AAA MM     Ww     MM   EEE                  *\n";
cout<<setw(100)<<"*             GGG         GG     AAA        AAA MM     WW     MM   EEE                  *\n";
cout<<setw(100)<<"*             GGGGGGGGGGGGGG     AAA        AAA MM     WW     MM   EEE                  *\n";
cout<<setw(100)<<"*             GGGGGGGGGGGGGG     AAA        AAA MM     WW     MM   EEEEEEEEEEEEEE       *\n";
cout<<setw(100)<<" *****************************************************************************************\n";
cout<<setw(100)<<"*****************************************************************************************\n";
cout<<"\nENTER THE PLAYER NAME:";
cin>>name;
cout<<"ENTER THE NUMBER OF COINS YOU HAVE TO PLAY WITH:";
cin>>coins;
//system("cls");
do{
rules();
cout<<"\nWelcome "<<name<<"\nAre You ready to play?";
cout<<"\nEnter The Number Of Coins You Are Going To Invest:   ";
do
{

cin>>bidcoins;
if(bidcoins>coins)
{
cout<<"\nYou Can't Play With More Than deposited Coins"<<"\nRe-Enter The Ammount:";
}
}while(bidcoins>coins);
do
{
	cout<<"\nGuess Number Between 1 And 10: ";
	cin>>guess;
		if(guess>10||guess<1)
			cout<<"\nNumber Should Be Between 1 To 10"<<"\nGuess Number Again:";
}while((guess>10||guess<0));
	int r=rand();
	int number=1+(r%10);
	char ch=winloss(guess,number);    //function caal

if(ch=='w')
{
	cout<<"\nHurrh You won "<<bidcoins*10<<" Coins";
	coins=coins+10*bidcoins;
}
else

{
	cout<<"\nSorry You Loose "<<bidcoins<<"coins";
	coins=coins-bidcoins;
}
	cout<<"\nThe winning number was  "<<number;
	cout<<"\nYour Remaining coins are "<<coins<<endl;
if(coins==0)
{
	//cout<<"Do you want to play again or you want to exit???";
	//goto ss;
	cout<<"\nSorry You Do Not Have Enough Coins To Play";
	
}
	
	cout<<"\nIf You Want To Play Again Press Y And if you want To Exit Press n: ";

	cin>>choice;
	
	system ("cls");
}while(choice=='Y'||choice=='y');

cout<<"\n######################################################################################";
cout<<"\nThanks For Playing Game";
cout<<"\nYour Current coins Are: "<<coins;
cout<<"\n######################################################################################";
return 0;


}
void rules()
{
cout<<setw(150)<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t      WELCOME TO GAME";
cout<<setw(120)<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\tGAME RULES";
cout<<setw(120)<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"1. CHOOSE NUMBER BETWEEN 1 TO 10"<<"\n2. WINNING AMOUNT WILL BE 10 TIMES OF BID AMOUNT"<<"\n3. LOOSS AMOUNT WILL BE BID AMMOUNT "<<"\n4. YOU CAN LEAVE GAME AT ANY TIME";
cout<<setw(100)<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
}
char winloss(int a , int b)   //function caal

{
	if(a==b||b==a)
	return 'w';
	else
	return 'l';	
}
void cursorpoint()
{
}
