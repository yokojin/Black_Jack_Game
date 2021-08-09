// Black_jack.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
#include <map>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <windows.h>
#include <stdio.h>
#include <random>
using namespace std;
class Deck {
private:
vector<int>NumbersCards; //1-52 cards
vector<int>TestCardhands;
map <int, string> myDeck; //Array Map (key and value)
int counTCarD{52};// Size Map
int sizeVect{52}; // Size Vector
int IgoTCard{0}; //Number Card which i got
int numerCa{0};
int TestNmBER{0};
string suitCard{""}; //Suit Card
string Shearts = "♥";
string Sdimonds = "♦";
string Sclubs = "♣";
string Sspades = "♠";
public:	
	//Constructor Deck Default	
	Deck() {		
		numerCa=0;
		suitCard= "";
		NumbersCards.reserve(sizeVect);
		for (int i = 1; i <=sizeVect; i++) {
			NumbersCards.push_back(i);
		}		
		setRandom();
		for(int i=1; i<= counTCarD; i++){		
			if(i<=13){
				if(i==1){				 
					myDeck.insert(pair<int, string>(i, Shearts + " ACE   "));
				}
				if(i==2){					
					myDeck.insert(pair<int, string>(i, Shearts + " 2     "));					
				}
				if (i == 3) {					
					myDeck.insert(pair<int, string>(i, Shearts + " 3     "));
				}
				if (i == 4) {					
					myDeck.insert(pair<int, string>(i, Shearts + " 4     "));
				}
				if (i == 5) {
					myDeck.insert(pair<int, string>(i, Shearts + " 5     "));
				}
				if (i == 6) {
					myDeck.insert(pair<int, string>(i, Shearts + " 6     "));
				}
				if (i == 7) {
					myDeck.insert(pair<int, string>(i, Shearts + " 7     "));
				}
				if (i == 8) {
					myDeck.insert(pair<int, string>(i, Shearts + " 8     "));
				}
				if (i == 9) {
					myDeck.insert(pair<int, string>(i, Shearts + " 9     "));
				}
				if (i == 10) {
					myDeck.insert(pair<int, string>(i, Shearts + " 10    "));
				}
				if(i==11){
					myDeck.insert(pair<int, string>(i, Shearts + " Jack  "));				
				}
				if (i == 12) {
					myDeck.insert(pair<int, string>(i, Shearts + " Queen "));
				}
				if (i == 13) {
					myDeck.insert(pair<int, string>(i, Shearts + " King  "));
				}				
			}
			else if(i<=26){
				if (i == 14) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " ACE   "));
				}
				if (i == 15) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " 2     "));
				}
				if (i == 16) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " 3     "));
				}
				if (i == 17) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " 4     "));
				}
				if (i == 18) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " 5     "));
				}
				if (i == 19) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " 6     "));
				}
				if (i == 20) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " 7     "));
				}
				if (i == 21) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " 8     "));
				}
				if (i == 22) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " 9     "));
				}
				if (i == 23) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " 10    "));
				}
				if (i == 24) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " Jack  "));
				}
				if (i == 25) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " Queen "));
				}
				if (i == 26) {
					myDeck.insert(pair<int, string>(i, Sdimonds + " King  "));
				}			
			}
			else if(i<=39){
				if (i == 27) {
					myDeck.insert(pair<int, string>(i, Sclubs + " ACE   "));
				}
				if (i == 28) {
					myDeck.insert(pair<int, string>(i, Sclubs + " 2     "));
				}
				if (i == 29) {
					myDeck.insert(pair<int, string>(i, Sclubs + " 3     "));
				}
				if (i == 30) {
					myDeck.insert(pair<int, string>(i, Sclubs + " 4     "));
				}
				if (i == 31) {
					myDeck.insert(pair<int, string>(i, Sclubs + " 5     "));
				}
				if (i == 32) {
					myDeck.insert(pair<int, string>(i, Sclubs + " 6     "));
				}
				if (i == 33) {
					myDeck.insert(pair<int, string>(i, Sclubs + " 7     "));
				}
				if (i == 34) {
					myDeck.insert(pair<int, string>(i, Sclubs + " 8     "));
				}
				if (i == 35) {
					myDeck.insert(pair<int, string>(i, Sclubs + " 9     "));
				}
				if (i == 36) {
					myDeck.insert(pair<int, string>(i, Sclubs + " 10    "));
				}
				if (i == 37) {
					myDeck.insert(pair<int, string>(i, Sclubs + " Jack  "));
				}
				if (i == 38) {
					myDeck.insert(pair<int, string>(i, Sclubs + " Queen "));
				}
				if (i == 39) {
					myDeck.insert(pair<int, string>(i, Sclubs + " King  "));
				}
				
			}
			else if(i<=52){
				if (i == 40) {
					myDeck.insert(pair<int, string>(i, Sspades + " ACE   "));
				}
				if (i == 41) {
					myDeck.insert(pair<int, string>(i, Sspades + " 2     "));
				}
				if (i == 42) {
					myDeck.insert(pair<int, string>(i, Sspades + " 3     "));
				}
				if (i == 43) {
					myDeck.insert(pair<int, string>(i, Sspades + " 4     "));
				}
				if (i == 44) {
					myDeck.insert(pair<int, string>(i, Sspades + " 5     "));
				}
				if (i == 45) {
					myDeck.insert(pair<int, string>(i, Sspades + " 6     "));
				}
				if (i == 46) {
					myDeck.insert(pair<int, string>(i, Sspades + " 7     "));
				}
				if (i == 47) {
					myDeck.insert(pair<int, string>(i, Sspades + " 8     "));
				}
				if (i == 48) {
					myDeck.insert(pair<int, string>(i, Sspades + " 9     "));
				}
				if (i == 49) {
					myDeck.insert(pair<int, string>(i, Sspades + " 10    "));
				}
				if (i == 50) {
					myDeck.insert(pair<int, string>(i, Sspades + " Jack  "));
				}
				if (i == 51) {
					myDeck.insert(pair<int, string>(i, Sspades + " Queen "));
				}
				if (i == 52) {
					myDeck.insert(pair<int, string>(i, Sspades + " King  "));
				}				
				
			}
		}			
	}	
	//Random mix map
	void setRandom(){	
		random_device new_R1;
		mt19937 g(new_R1());
		shuffle(NumbersCards.begin(), NumbersCards.end(), g);			
	}
	void setNumberCard(int nC) {
		numerCa = nC;
	}
	void setSuitCard(string sC) {
		suitCard = sC;
	}
	//Get Card
	int getCardFromDeck() {	
		if (NumbersCards.empty()) {
			//cout << "Deck is empty" << endl;
			for (int i = 1; i <= sizeVect; i++) {
				NumbersCards.push_back(i);
			}
			setRandom();
		}
		else {
			IgoTCard = NumbersCards.back();
			TestCardhands.push_back(IgoTCard);
			DeleteCard();
		}							
		for (auto it = myDeck.begin(); it!=myDeck.end(); it++) {			
		     if (it->first == IgoTCard) {								
				 int N= it->first;
				 setNumberCard(N);           
				 string S= it->second;
				 setSuitCard(S);
				break;
			 }				
		}						 		
		return IgoTCard;
	}
	void WhatHands(){
		for( int i=0;  i <TestCardhands.size(); i++){									
				SetConsoleOutputCP(866);
				SetConsoleCP(866);
				cout << "\n";
				cout << "\t" << char(218) << setfill(char(196)) << setw(13) << char(196) << char(191) << "\n";
				cout << "\t" << char(179);
				SetConsoleOutputCP(65001);
				SetConsoleCP(65001);
				for(auto it=myDeck.begin(); it!=myDeck.end(); it++){				
					if(TestCardhands[i]==it->first)
				cout << it->second;
				}
				SetConsoleOutputCP(866);
				SetConsoleCP(866);
				cout << "     " << char(179) << endl;
				cout << "\t" << char(179) << "\t      " << char(179) << "\n";
				cout << "\t" << char(179) << "\t      " << char(179) << "\n";
				cout << "\t" << char(179) << "\t      " << char(179) << "\n";
				cout << "\t" << char(179) << "\t      " << char(179) << "\n";
				cout << "\t" << char(179) << "\t      " << char(179) << "\n";
				cout << "\t" << char(179) << "\t      " << char(179) << "\n";
				cout << "\t" << char(179);
				SetConsoleOutputCP(65001);
				SetConsoleCP(65001);
				for (auto it = myDeck.begin(); it != myDeck.end(); it++) {
					if (TestCardhands[i] == it->first)
						cout << it->second;
				} 
				SetConsoleOutputCP(866);
				SetConsoleCP(866);
				cout << "     " << char(179) << "\n";
				cout << "\t" << char(179) << "\t      " << char(179) << "\n";
				cout << "\t" << char(192) << setfill(char(196)) << setw(13) << char(196) << char(217) << "\n";
				SetConsoleOutputCP(65001);
				SetConsoleCP(65001);
		}				
}
	int getNumberCard(){	
		return numerCa;
	}	
	string getSuitC(){	
	  return suitCard;
	}
	//Erase Card of Deck
	void DeleteCard(){		
		NumbersCards.pop_back();				
	}
	void DeletCoHanD(){
		TestCardhands.clear();
	
	}
	//Show Deck;
	void ShowCard() {

		/*int X = getNumberCard();
		string Y = getSuitC();
		PicCard(X, Y);*/

		//Checking containers VECTOR AND MAP ////////////////////////////////////////////////////////////////////////////////
		
		//if (NumbersCards.empty()){
		//	cout << "Vector is empty" << endl;
		//}
		//for (int i = 1; i < NumbersCards.size(); i++) {
		//	
		//	cout << NumbersCards[i] << " " << endl;
		//}
		//for (auto it = myDeck.begin(); it != myDeck.end(); it++) {
		//	cout << it->first << " : " << it->second << endl;
		//}
		//
		//  
		//for (auto it = myDeck.begin(); it != myDeck.end(); it++) {						  
		//		
		//	
		//	
		//	cout << it->first << " : " << it->second << endl;
		//}									
	}
};
int Score(int  CardNum){		
	if (CardNum == 11 || CardNum == 24 || CardNum == 37 || CardNum == 50){
		CardNum = 10;
		return CardNum;
	}
	if (CardNum == 12 || CardNum == 25 || CardNum == 38 || CardNum == 51){
		CardNum = 10;
		return CardNum;
	}
	if(CardNum == 13 || CardNum == 26 || CardNum == 39 || CardNum == 52){			
			CardNum=10;
		return CardNum;
	}
	if(CardNum == 2 || CardNum == 15 || CardNum == 28 || CardNum == 41){
		CardNum = 2;
		return CardNum;
	}
	if (CardNum == 3 || CardNum == 16 || CardNum == 29 || CardNum == 42) {
		CardNum = 3;
		return CardNum;
	}
	if (CardNum == 4 || CardNum == 17 || CardNum == 30 || CardNum == 43) {
		CardNum = 4;
		return CardNum;
	}
	if (CardNum == 5 || CardNum == 18 || CardNum == 31 || CardNum == 44) {
		CardNum = 5;
		return CardNum;
	}
	if (CardNum == 6 || CardNum == 19 || CardNum == 32 || CardNum == 45) {
		CardNum = 6;
		return CardNum;
	}
	if (CardNum == 7 || CardNum == 20 || CardNum == 33 || CardNum == 46) {
		CardNum = 7;
		return CardNum;
	}
	if (CardNum == 8 || CardNum == 21 || CardNum == 34 || CardNum == 47) {
		CardNum = 8;
		return CardNum;
	}
	if (CardNum == 9 || CardNum == 22 || CardNum == 35 || CardNum == 48) {
		CardNum = 9;
		return CardNum;
	}
	if (CardNum == 10 || CardNum == 23 || CardNum == 36 || CardNum == 49) {
		CardNum = 10;
		return CardNum;
	}
	if (CardNum == 1 || CardNum == 14 || CardNum == 27 || CardNum == 40 ) {
		CardNum = 11;
		return CardNum;		
	}
}
class Game_BJ{
private: 
	Deck koloda;	
	int numberCardPoints{ 0 };
	int sum{ 0 };
	char cH{ 0 };
	char choice{0};
	int digitForWhileC{0};
public:		
	int ShoeGame_BJ(){
		while(true){		
			ShowStartMenu();
			bool V = true;
			while(V){
				cin >> cH;
				cin.ignore();
				switch (cH) {
				case '1': {
					V = false;
					break;
				}
				case '2': {
					return 0;
				}
				}
			}		
			while(true){			
				cout << "If You want to take a card PLEASE press 1: ";
				cin >> choice;
				cin.ignore();
				switch (choice) {
				case '1': {
					system("cls");
					if(digitForWhileC==2){					
						koloda.getCardFromDeck();
						koloda.ShowCard();
						numberCardPoints = Score(koloda.getNumberCard());
						if (numberCardPoints != 11) {
							sum += numberCardPoints;
						}
						if (numberCardPoints == 11) {
							if (sum < 11) {
								sum += 11;
							}
							else {
								sum++;
							}
						}														
					}
					while(digitForWhileC<2){

					koloda.getCardFromDeck();
					koloda.ShowCard();
					numberCardPoints = Score(koloda.getNumberCard());
					//suiTcarD =koloda.getSuitC();
					if (numberCardPoints != 11) {
						sum += numberCardPoints;
					}
					if (numberCardPoints == 11) {
						if (sum < 11) {
							sum += 11;
						}
						else {
							sum++;
						}
					}
					digitForWhileC++;
					}
					koloda.WhatHands();
					break;
				}
			    }
				if (sum == 21) {
					cout << "Black Jack you WINNER" << endl;
					cout << "Points: " << sum << endl;
					Sleep(2000);
					koloda.DeletCoHanD();
					sum = 0;
					digitForWhileC=0;
					break;
				}
				if (sum > 21) {
					cout << "Enumeration you LOSE " << endl;
					cout << "Points: " << sum << endl;
					Sleep(2000);
					koloda.DeletCoHanD();
					digitForWhileC = 0;
					sum = 0;
					break;
				}						
		    }			
		}						
	}
	void ShowStartMenu(){
		system("cls");
		cout << "\t\t\tCard Game Black Jack\n" << endl;
		cout << "\t\tStart: "<<"Press 1" << endl;
		cout << "\t\tExit: "<<"Press 2" << endl;	
	};	
};
int main()
{						
	Game_BJ FirstGame;
	FirstGame.ShoeGame_BJ();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл