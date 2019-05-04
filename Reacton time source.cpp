#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <cmath>
using namespace std;


double scorecheck(double yourscore )
{
	
	if(yourscore>=0 && yourscore<=250)
	{
		cout << "Whoah! You're FAST! 0_0 \n";	
	} 
	
	else if (yourscore< 600 && yourscore> 250)
	{
		cout << "Your reflexes are OK! :) \n";
	}
	
	else if(yourscore > 600)
	{
		cout << "You are soo BAD at this! XD \n";
	}
	
}


int randomizer()

{
	c:
	int diff = rand();
	if(diff>2){goto c;}
	
	return diff;
}


void instructions()

{
	cout <<"Just press ENTER to continue..."; sleep(1); getch(); system("cls");
	cout << "######################################\n\n";
	cout << "MASH LEGENDS is all about speed...\n\n\n\n\n";
	cout << "######################################"; sleep(1); getch(); system("cls");
	cout << "######################################\n\n";
	cout << "You're given a target number... \n\n"; cout << "Target: 20000\n\n"; sleep(1);
	cout << "\nAnd a timer...\n\n";

	
	double i = 0;	
	sleep(1);
	cout << "(Press UP key to Proceed)\n\n"; 
	
	
	
			while(true)
		{
			cout << i; i++; 
			
			cout <<"\r"; 
			
		if(GetKeyState(VK_UP)){system("cls"); break;}
			
		}
		
	
	cout << "######################################\n\n";
	cout << "Your job is to wait and MASH the desired\n";
	cout << "key when you think the timer matches the\n";
	cout << "TARGET NUMBER!\n\n\n";
	cout << "(Get ready for a trial!)\n\n"; 
	cout << "######################################\n\n";
		
		sleep(10);
		
		cout << "TARGET: 20000 (Press LEFT)\n\n";	
		
			i = 0;
			int x = 0;
			double mine;
			while(true)
		{
			cout << "COUNTER: " << i; i++; 
			
			cout <<"\r"; 
			
			if(GetKeyState(VK_LEFT)){mine = i; system("cls"); break;}
			
		}
		
		
		cout << "######################################\n\n";
		cout << "TARGET      : 20000\n";
		cout << "WHAT YOU GOT: " << mine;
		cout << "\n\n######################################\n\n";
	
	sleep(5);
}







int main()
{
	double target;
	double yourscore;
	int numdif = randomizer();
	
	
	if(numdif=2)
	{
		target = 30000;
	}
	else if(numdif=1)
	{
		target = 20000;
	}
	else if(numdif=0)
	{
		target = 40000;
	}
	
	
	
	
	int choice;
	
	cout << "######################################\n\n";
	cout << "    MASH iT! by A.R. Elangos\n";
	cout << "\n\n Play(1)\t\tInstructions(2)\n\n"; 
	cout << " Select:  "; cin >> choice;
	
	
	
	if(choice == 2) {system("cls"); instructions(); return main();}

	else if(choice == 1)
	
	{system("cls"); 
	
	// the game thread...
	
	double counter = 0;
	double yourcount;
	
	cout << "######################################\n\n";
	cout << "Let's see how fast you are! \nPress enter to START!\n\n";
	cout << "\n\n\n######################################\n\n";
	getch(); system ("cls");
	
	
	cout << "######################################\n\n";
	cout << "(Press SPACE to MASH it!)\n\nTARGET: " << target;
	cout << "\n\n\n";

	while(true)
	
		{
			cout << "\r";
			cout << "COUNTER: " << counter;
			counter++;
			
			if(GetAsyncKeyState(VK_SPACE))
				
				{
					
					yourcount = counter;
					system("cls");
					break;
				
				}
			
		}


		
	
	cout << "######################################\n\n\n";
	cout << "TARGET        : " << target;
	cout << "\nWHAT YOU GOT  : " << yourcount << endl;
	
	
	
	yourscore = target - yourcount;
	yourscore = abs(yourscore);
	
	cout << "DIFFERENCE    : " << yourscore << endl << endl;
	
	scorecheck(yourscore);
	
	
	cout << "\n\n######################################\n\n";
	
	
	
	
	return main();}
	
	
	}
