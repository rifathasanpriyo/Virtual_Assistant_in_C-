#include<bits/stdc++.h>
#include<conio.h>
#include <unistd.h>
#include <stdio.h>
#include<ctime>
#include <windows.h>

using namespace std;

class loadingPage
{
public:
       void display()
       {
           cout<<"\n\n\n\n\n\t"<<"   Goriber Alexa Is Loading\n\n\t\tplease wait";
           for(int c=1; c<7; c++)
          {
           cout<<".";
           usleep(500000);

           }

       }
       void welcomePage()
       {
           time_t now= time(0);
           tm *time = localtime(&now);
           cout<<"\n\t\t    Welcome";
           if (time-> tm_hour < 12){
        cout<< "\n\t\tGood Morning.\n\t     I Am HERE TO HELP YOU "<<endl;
        string phrase = "Good   Morning     I Am HERE TO HELP YOU";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "\n\t\tGood Afternoon.\n\t     I Am HERE TO HELP YOU "<<endl;
        string phrase = "  Good   Afternoon    I Am HERE TO HELP YOU ";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "\n\t\tGood Evening.\n\t     I Am HERE TO HELP YOU "<<endl;
        string phrase = "     Good ,           Evening ,    I Am HERE TO HELP YOU";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
       }


};
class Alexa
{
public:
       string s1;
            STARTUPINFO startInfo = {0};
            PROCESS_INFORMATION processInfo = {0};
       void askQuestion()
       {
              cout<<"chat: ";
          getline(cin,s1);
       }
       void display()
       {
             cout<<"G.A: ";
              if(s1=="hi")
              {
         string phrase = "Hello,  How can I help you";
        cout<<"Hello.How can I help you"<<endl;
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
              }
              else if(s1=="who are you"||s1=="who you are"||s1=="tumi kae")
              {
       string phrase = " I am Goriber Alexa,  a virtual assistant, created by Rifat,  Hasan,  Priyo";
        cout<<"I am Goriber Alexa, a virtual assistant created by Rifat Hasan Priyo"<<endl;
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
              }
              else if(s1=="bye"||s1=="stop"||s1=="exit")
              {
                     cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
              }
              else if(s1=="time"||s1=="date")
              {
                     time_t now = time(0);
                 char *dt = ctime(&now);
                 cout<<"The date and time is "<<endl
                << dt <<endl;
                   string phrase = "The date and time is ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              }
              else if(s1=="open notepad")
              {
               cout<<"Opening Notepad......"<<endl;
                  string phrase = "Opening Notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
              }
              else if(s1=="youtube")
              {
                   cout<<"Opening Youtube......"<<endl;
                  string phrase = "Opening Youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              system("start https://www.youtube.com");
              }
              else if(s1=="google")
              {
                   cout<<"Opening Google......"<<endl;
                  string phrase = "Opening Google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              system("start https://www.google.com");
              }
              else if(s1=="nubcc page")
              {
                   cout<<"Opening ......"<<endl;
                  string phrase = "Opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              system("start https://www.facebook.com/nubccofficial");
              }
              else if(s1=="play a song"||s1=="play song"||s1=="song")
              {
                   cout<<"Opening ......"<<endl;
                  string phrase = "Opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              system("start https://www.youtube.com/watch?v=2lH1WEGZoD8");
              }
              else if(s1=="how are you")
              {
                     cout<<"I am Fine.How can i help you?"<<endl;
                    string phrase = "I am Fine,  How can i help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              }
              else if(s1=="how can i improve my coding skill"||s1=="improve my coding skill")
              {
                    cout<<"Practice Regularly\nBuild Real Projects\nLearn from Others\nSet Goals"<<endl;
                    string phrase = "Practice Regularly,   Build Real Projects,  Learn from Others,  Set Goals";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              }
              else if(s1=="thank you"||s1=="tnq")
              {
                   cout<<"You are most welcome"<<endl;
                    string phrase = "You are most welcome";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              }
              else if(s1=="facebook")
              {
                    cout<<"Opening ......"<<endl;
                  string phrase = "Opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              system("start https://www.facebook.com");
              }
              else if(s1=="you have any gf")
              {
                     cout<<"I don't have personal,feelings, or relationships"<<endl;
                    string phrase = "I don't have personal,   feelings,       or relationships";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              }
              else if(s1=="happy new year"||s1=="new year")
              {
                     cout<<"Happy New Year! Wishing you a year filled with joy, success, and great moments."<<endl;
                    string phrase = "Happy New Year, Wishing you a year filled with joy, success, and great moments.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
              }
       }
};
int main()
{

    Alexa user;
    loadingPage loading;
    loading.display();
     system("cls");
    loading.welcomePage();
    while(1)
    {

        cout<<endl;
        user.askQuestion();
        user.display();
    }

}
