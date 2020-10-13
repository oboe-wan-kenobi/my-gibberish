#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main() {
  
	string a; 
	// string is a data type. So, each variable has a data type. int (number without a decimal), bool (true or false), string (text in double quotes), float (number with decimal, always followed by an f, so like float i = 0.9f), double (float but two times bigger) byte (small number), short (bigger than byte, smaller than everything else), long (bigger than int)

	cout << "DO YOU WANT TO PLAY A GAME?" << endl;
	//output, whatever is in between the <<s will be outputted to the console

	cin >> a;
	//input, whatever is typed into the console before the enter key is next pressed will be stored in the variable specified after the >>

	string listOfGames[6] = { "CHESS", "CHECKERS", "BACKGAMMON", "POKER", "THEATERWIDE BIOTOXIC AND CHEMICAL WARFARE", "GLOBAL THERMONUCLEAR WARFARE" };
	//listOfGames is an array. Think of an array like one of those elementary school cubbies where each kid has his own cubby. Each string literal ("hello") has its own cubby

	//mwahahaha i added back the space because it's easier to read
	if  (a == "yes") {
	 
		for (int game = 0; game < 6; game++) {

			//variable++ is the same as variable = variable + 1;
			//or variable += 1;

			cout << listOfGames[game] << "\n";

		}
		//in this for loop, we defined the int games, which is how many games the loop has couted. Then, it'll loop until games is equal to or greater than 6. Every time the loop runs, it'll add one to the int games

	} else if (a == "YES") {

  	for (int game = 0; game < 6; game++) {

			cout << listOfGames[game] << "\n";
 
		}

	} if (a == "Yes") {

 		for (int game = 0; game < 6; game++) {

   		cout << listOfGames[game] << "\n";

		}

	} if (a == "no") {
 
 		cout << "Go die in a hole. \n\nDo something much less interesting than play my fun games";

	} if (a == "NO") {
 
	 	cout << "Go die in a hole. \n\nDo something much less interesting than play my fun games";
 
	} if (a == "nO") {
 
 		cout << "Go die in a hole. \n\nDo something much less interesting than play my fun games";
 
	} if (a == "No") {
 
 		cout << "Go die in a hole. \n\nDo something much less interesting than play my fun games";
 
	}

  return(0);

}
