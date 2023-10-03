#include<iostream>
#include <windows.h>
using namespace std;

int main(){
    int Result=0;
    char playAgain;
    int playQuiz(void);                //Prototype
    play:
    Result = playQuiz();
    cout<<"Your total score is "<<Result<<endl;;

    if(Result>=12){
        cout<<"Congratulations!!, You are pass"<<endl;
        cout<<""<<endl;
        cout<<"Do you want to play QUIZ again y or n?"<<endl;
        cin>>playAgain;
        if(playAgain=='y' || playAgain=='Y') {
            goto play;
        }
        else{
            cout<<"Thank you to play Quiz!"<<endl;
        }
    }
    else{
        cout<<" You are fail"<<endl;
    }
}

int playQuiz(){
    char c;
    char UserOption;
    int score=0;
    playInsideFunction:
    cout<<"-------------------------------- Welcome to Quiz Game ------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"----------------------------- Please follow the given instructions -----------------------"<<endl;
    cout<<""<<endl;
    cout<<"Rule 1 : Quiz contains total 10 questions"<<endl;
    cout<<"Rule 2 : You will given 1 marks for each correct answer"<<endl;
    cout<<"Rule 3 : There will be no negative marking"<<endl;
    cout<<"Rule 4 : Each question carry 2 marks"<<endl;
    cout<<"Rule 5 : Please press s to start the quiz"<<endl;
    cout<<"Rule 6 : Please select option a, b, c, d"<<endl;
    cout<<"Rule 7 : If you score greater than 12, you will pass the quiz"<<endl;

    cin>>c;
    if(c=='s' || c=='S'){
        cout<<""<<endl;
        cout<<"Q1. Identify the correct extension of the user-defined header file in C++?"<<endl;
        cout<< " (a) .cpp   (b) .hg   (c) .h    (d) .hf   "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='c' || UserOption=='C'){
            score+=2;
        }
        else{
        score+=0;
        }   

        cout<<""<<endl;

         cout<<"Q2. C++ uses which approach?"<<endl;
        cout<<" (a) right-left  (b) Top-down  (c) left-right  (d) bottom-up "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='d' || UserOption=='D'){
            score+=2;
        }
        else{
        score+=0;
        }  

        cout<<""<<endl;

         cout<<"Q3. Identify the incorrect constructor type?"<<endl;
        cout<<" (a) Friend Constructor  (b) Default Constructor  (c) Parametrized Constructor  (d) Copy Constructor "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='a' || UserOption=='A'){
            score+=2;
        }
        else{
        score+=0;
        } 

        cout<<""<<endl;

         cout<<"Q4. Which of the following data type is supported in C++ but not in C?"<<endl;
        cout<<" (a) int  (b) bool  (c) double  (d) float "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='b' || UserOption=='B'){
            score+=2;
        }
        else{
        score+=0;
        }   

        cout<<""<<endl;

         cout<<"Q5. Identify the correct syntax for declaring arrays in C++?"<<endl;
        cout<<" (a) array arr[10]   (b) array{10}   (c) int arr[10]   (d) int arr "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='c' || UserOption=='C'){
            score+=2;
        }
        else{
        score+=0;
        }   

        cout<<""<<endl;

         cout<<"Q6. goto can be classified into?"<<endl;
        cout<<" (a) label  (b) variable  (c) operator  (d) function "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='a' || UserOption=='A'){
            score+=2;
        }
        else{
        score+=0;
        }   

        cout<<""<<endl;

         cout<<"Q7. C++ language is a successor to which language?"<<endl;
        cout<<" (a) B  (b) C  (c) Java  (d) VB "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='b' || UserOption=='B'){
            score+=2;
        }
        else{
        score+=0;
        }   

        cout<<""<<endl;

        cout<<"Q8. Which feature of OOP indicates code reusability?"<<endl;
        cout<<" (a) Encapsulation  (b) Inheritance  (c) Polymorphism  (d) Abstraction "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='b' || UserOption=='B'){
            score+=2;
        }
        else{
        score+=0;
        }   

        cout<<""<<endl;

        cout<<"Q9. Which of the following is not a valid keyword in C++ language?"<<endl;
        cout<<" (a) while  (b) for  (c) switch  (d) do-while "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='d' || UserOption=='D'){
            score+=2;
        }
        else{
        score+=0;
        }  

        cout<<""<<endl; 

         cout<<"Q10. Adding a derived class to a base class requires fundamental changes to the base class?"<<endl;
        cout<<" (a) True (b) False "<<endl;
        cout<<"Answer : ";
        cin>>UserOption;
        if(UserOption=='b' || UserOption=='B'){
            score+=2;
        }
        else{
        score+=0;
        }   

        cout<<""<<endl;     
    }
    else{
        cout<<"You have enterd wrong value, Please enterd s "<<endl;
        goto playInsideFunction;
    }
    
    return score;
}