#include<iostream>
using namespace std;
int main(){
int playQuiz(void); 
play:
int finalResult=0;
char playAgain;
finalResult=playQuiz();
cout<<"Your Total Score Is :"<<finalResult<<endl;
if(finalResult>=6){
	cout<<"Congratulations You Are Passed:"<<endl;
	cout<<"DO You Want To Attempt The Quiz Again: "<<endl;
	cin>>playAgain;
	if(playAgain=='Y'||playAgain=='y'){
	goto play;
}
else{
	cout<<"Thank You For Playing"<<endl;
	
}
	}
	
	else{
		cout<<"You Are Failed:"<<endl;
		cout<<"DO You Want To Attempt The Quiz Again: "<<endl;
	cin>>playAgain;
	if(playAgain=='Y'||playAgain=='y'){
		playQuiz();
}
else{
	cout<<"Thank You For Playing"<<endl;

	}
	
	}
}
				
int playQuiz(){
							        char c;
							        char option;
							        int score=0;
							    playInsideFuncation:
									cout<<"-----------Well Come To The Quiz Game----------"<<endl;
												cout<<"------Please Follow The Instruction-----"<<endl;
												cout<<"Step 1 : Quiz Contains Total 10 Question."<<endl;
												cout<<"Step 2 : You Will Given 1 Marks For each Right Answer."<<endl;
												cout<<"Step 3 : There Will Be No Negative Marking."<<endl;
												cout<<"Step 4 : Please Press S To Start The Quiz."<<endl;
												cout<<"Step 5 : Please Select Option A,B,C,D."<<endl;
												cout<<"Step 6 : If Your Score Is >=6, You Will Pass."<<endl;
												cin>>c;
							
								
									if(c=='s'||c=='S'){
										cout<<"Q1. What Is The Capital Of Pakistan"<<endl;
										cout<<"(A) Karachi (B) Lahore (C) Multan (D) Islamabad"<<endl;
										cin>>option;
										if(option=='D'||option=='d'){
											score=score+1;
										}
										else{
											score=score+0;
										}
										cout<<"Q2. Who Is The Prime Minister Of Pakistan"<<endl;
										cout<<"(A) Chaudhry Mohammad Ali (B) Huseyn Shaheed Suhrawardy (C) Ibrahim Ismail Chundrigar(D) Imran Khan"<<endl;
										cin>>option;
										if(option=='D'||option=='d'){
											score=score+1;
										}
										else{
											score=score+0;
										
									}
										cout<<"Q3. What Is The National Bird Of Pakistan"<<endl;
										cout<<"(A) The chukar (B) Parakeet (C) Eagle(D) Finches"<<endl;
										cin>>option;
										if(option=='A'||option=='a'){
											score=score+1;
										}
										else{
											score=score+0;
										}
										cout<<"Q4. What Is The National Animal Of Pakistan"<<endl;
										cout<<"(A) Panther (B) Markhor (C) Gorilla(D) Deer"<<endl;
										cin>>option;
										if(option=='B'||option=='b'){
											score=score+1;
										}
										else{
											score=score+0;
										}
										cout<<"Q5. What Is The National Flower Of Pakistan"<<endl;
										cout<<"(A) Panther (B) Lily (C) White jasmine (D) Deer"<<endl;
										cin>>option;
										if(option=='C'||option=='c'){
											score=score+1;
										}
										else{
											score=score+0;
										}
										cout<<"Q7. Who Is The Cheif Minister Of Sindh"<<endl;
cout<<"(A) Sir Ghulam Hussain Hidayat Ullah (B) Mir Bandeh Ali Khan Talpur (C) Murad Ali Shah  (D) Khan Bahadur Allah Bux Soomro"<<endl;
												cin>>option;
												if(option=='C'||option=='c'){
													score=score+1;
												}
												else{
													score=score+0;
												}
												cout<<"Q8. Who Is The  President  Of Pakistan"<<endl;
										cout<<"(A) Imran Khan (B) Sir Syed Khan (C) Arif Alvi(D) Sudheer Kumar"<<endl;
										cin>>option;
										if(option=='C'||option=='c'){
											score=score+1;
										}
										else{
											score=score+0;
										}
										cout<<"Q9. Who Is The  Leader Of Congress  Of Pakistan"<<endl;
										cout<<"(A) Imran Khan (B) Sir Syed Khan (C)Muhammad Ali Jinnah(D) Sudheer Kumar"<<endl;
										cin>>option;
										if(option=='C'||option=='c'){
											score=score+1;
										}
										else{
											score=score+0;
										}
										cout<<"Q10. What Is The  Name Of This Quiz Devloper"<<endl;
										cout<<"(A) Sudheer Kuamr (B) M.Aqsa (C)Aliya.K(D) M.Ameen"<<endl;
										cin>>option;
										if(option=='A'||option=='a'){
											score=score+1;
										}
										else{
											score=score+0;
										}
											}else{
												cout<<"You Have Entered Wrong Choice,Please Enter The S"<<endl;
												goto playInsideFuncation;
											}
											return score;
										}
