#include "menu.h"
#include "splash.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	system("mode 175");
	system("Color 1A");
	system("cls");

	//http://www.kammerl.de/ascii/AsciiSignature.php
	string art = "";
	
	art += ">=>                                             >=>                                   >=>>=>                       >=>                          \n";
	art += ">=>                                             >=>                                 >=>    >=>                     >=>                          \n";
	art += ">=> >==>>==>  >=>     >=>   >==>    >==>>==>  >=>>==>    >=>     >> >==> >=>   >=>   >=>       >=>   >=>  >===>  >=>>==>   >==>    >===>>=>>==> \n";
	art += ">=>  >=>  >=>  >=>   >=>  >>   >=>   >=>  >=>   >=>    >=>  >=>   >=>     >=> >=>      >=>      >=> >=>  >=>       >=>   >>   >=>   >=>  >>  >=>\n";
	art += ">=>  >=>  >=>   >=> >=>   >>===>>=>  >=>  >=>   >=>   >=>    >=>  >=>       >==>          >=>     >==>     >==>    >=>   >>===>>=>  >=>  >>  >=>\n";
	art += ">=>  >=>  >=>    >=>=>    >>         >=>  >=>   >=>    >=>  >=>   >=>        >=>    >=>    >=>     >=>       >=>   >=>   >>         >=>  >>  >=>\n";
	art += ">=> >==>  >=>     >=>      >====>   >==>  >=>    >=>     >=>     >==>       >=>       >=>>=>      >=>    >=> >=>    >=>   >====>   >==>  >>  >=>\n";
	art += "                             						  >=>                   >=>                                             \n";


	cout << art;
	cin.get();
	splashScreen();
	mainMenu();
	return 0;
}
