#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <stdbool.h>
using namespace std;
extern void secondfloordis();
int ticket=0;
int points=0;
int amount=20000;
string why="yes";
string want="yes",sect;
string seek="yes";
class section{
public:
    void layout(){
        cout<<"------------HAMLEY'S----------"<<endl;
        cout<<" _____________________________"<<endl;
        cout<<"|     |            |          |"<<endl;
        cout<<"|     |            |          |"<<endl;
        cout<<"|     |    NERF(N) |  LEGOS(L)|"<<endl;
        cout<<"|     |            |          |"<<endl;
        cout<<"|SOFT |||"<<endl;
        cout<<"| TOYS|                       |"<<endl;
        cout<<"| (ST)|        REMOTE         |"<<endl;
        cout<<"|     |       CONTROLS (RC)   |"<<endl;
        cout<<"|     |          __           |"<<endl;
        cout<<"|||  ||"<<endl;
    }

};
class customer{
    public:
    string toy;
    int num;
    string request="Y";
    int sum=0;
    void intro(){
    cout<<"Welcome to Hamley's!.....what would you like to buy?"<<endl;
    cin>>sect;
    }
    void shopping(){
    if (sect=="ST"){
        cout<<"Ok....please take a left and go straight and you will find the soft toys"<<endl;
        cout<<"Welcome to the soft toys area ..... what would you like to buy?"<<endl;
        string arr1[10][5]= {
            {"SL.No","\t"," TOYS","\t\t","   PRICE"},
            {" 1","\t","BALLU(B)","\t","   3500"},
            {" 2","\t","MICKEY MOUSE(M)","\t","   5000"},
            {" 3","\t","SIMBA(S)","\t","   4500"}
            };
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cout<<arr1[i][j];
            }
            cout<<""<<endl;
        }

    }
    else if (sect=="N"){
        cout<<"Ok....please go straight and you will find the Nerf guns on the left hand side"<<endl;
        cout<<"Welcome to the Nerf guns area ..... what would you like to buy?"<<endl;
        string arr1[10][5]= {
            {"SL.No","\t"," GUNS","\t\t","   PRICE"},
            {" 1","\t","SNIPER(S)","\t","   3500"},
            {" 2","\t","PISTOL(P)","\t","   5000"},
            {" 3","\t","ASUALT(A)","\t","   4500"}
            };
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cout<<arr1[i][j];
            }
            cout<<""<<endl;
        }

    }
    else if (sect=="L"){
        cout<<"Ok....please go straight and you will find the Lego toys on the right hand side"<<endl;
        cout<<"Welcome to the Lego area ..... what would you like to buy?"<<endl;
        string arr1[10][5]= {
            {"SL.No","\t"," TOYS","\t\t","   PRICE"},
            {" 1","\t","STADIUM(S)","\t","   3500"},
            {" 2","\t","BOAT(B)","\t","           5000"},
            {" 3","\t","CAR(C)","\t","           4500"}
            };
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cout<<arr1[i][j];
            }
            cout<<""<<endl;
        }

    }
    else if (sect=="RC"){
        cout<<"Ok....This is the RC area please tell me what would you like to buy?"<<endl;
        string arr1[10][5]= {
            {"SL.No","\t"," TOYS","\t\t","   PRICE"},
            {" 1","\t","CAR(C)","\t","           3500"},
            {" 2","\t","CHOPPER(CH)","\t","   5000"},
            {" 3","\t","PLANE(P)","\t","   4500"}
            };
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                cout<<arr1[i][j];
            }
            cout<<""<<endl;
        }

    }
    else{
        seek="yes";
    }
    }
    void buying(){

        if(sect=="ST"){
            cout<<"which toy would you like to buy?"<<endl;
            cin>>toy;
            while(request=="Y"){
                if(toy=="B"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*3500;
                cout<<"would you like to buy some other soft toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which soft toy would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="M"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*5000;
                cout<<"would you like to buy some other soft toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which soft toy would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="S"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*4500;
                cout<<"would you like to buy some other soft toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which soft toy would you like?"<<endl;
                    cin>>toy;
                }
            }
            }
            cout<<"Would you like to go to some other sect"<<endl;
            cin>>want;
            if(want=="yes"){
                cout<<"which section would you like to go to?"<<endl;
                cin>>sect;
                request="Y";
            }
            else{
                seek="no";
            }

        }
         else if(sect=="N"){
            cout<<"which toy would you like to buy?"<<endl;
            cin>>toy;
            while(request=="Y"){
                if(toy=="S"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*3500;
                cout<<"would you like to buy some other gun?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which gun would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="P"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*5000;
                cout<<"would you like to buy some other gun?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which gun would you like?"<<endl;
                    cin>>toy;
                }
            }
            if(toy=="A"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*4500;
                cout<<"would you like to buy some other gun?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which gun would you like?"<<endl;
                    cin>>toy;
                }
            }
            }
            cout<<"Would you like to go to some other sect"<<endl;
            cin>>want;
            if(want=="yes"){
                cout<<"which section would you like to go to?"<<endl;
                cin>>sect;
                request="Y";
            }

        }
         else if(sect=="L"){
            cout<<"which toy would you like to buy?"<<endl;
            cin>>toy;
            while(request=="Y"){
                if(toy=="S"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*3500;
                cout<<"would you like to buy some other lego toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which Lego would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="B"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*5000;
                cout<<"would you like to buy some other lego toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which Lego would you like?"<<endl;
                    cin>>toy;
                }
            }
            if(toy=="C"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*4500;
                cout<<"would you like to buy some other lego toy?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which Lego would you like?"<<endl;
                    cin>>toy;
                }
            }
            }
            cout<<"Would you like to go to some other sect"<<endl;
            cin>>want;
            if(want=="yes"){
                cout<<"which section would you like to go to?"<<endl;
                cin>>sect;
                request="Y";
            }

        }
         else if(sect=="RC"){
            cout<<"which toy would you like to buy?"<<endl;
            cin>>toy;
            while(request=="Y"){
                if(toy=="C"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*3500;
                cout<<"would you like to buy some other RC?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which RC would you like?"<<endl;
                    cin>>toy;
                }
            }
            else if(toy=="CH"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*5000;
                cout<<"would you like to buy some other RC?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which RC would you like?"<<endl;
                    cin>>toy;
                }
            }
            if(toy=="P"){
                cout<<"how many would you like?"<<endl;
                cin>>num;
                sum+=num*4500;
                cout<<"would you like to buy some other RC?"<<endl;
                cin>>request;
                if(request=="Y"){
                    cout<<"ok which RC would you like?"<<endl;
                    cin>>toy;
                }
            }
            }
            cout<<"Would you like to go to some other sect"<<endl;
            cin>>want;
            if(want=="yes"){
                cout<<"which section would you like to go to?"<<endl;
                cin>>sect;
                request="Y";
            }

        }
    }
    void cashing(){
    cout<<"your final Bill is:"<<sum<<endl;
    amount-=sum;
    cout<<"thank you for buying from Hamley's hope you liked our service"<<endl;}

};
extern void maindisplay(){
    cout<<"--------Welcome to TIMEZONE!!!------------"<<endl;
    cout<<"We opt for a card points system to play all the diverse games"<<endl<<endl;
    cout<<"The prices for the cards are:"<<endl;
    cout<<"Sr no.\t|\tPoints\t|\tPrice"<<endl;
    cout<<"1     \t|\t250   \t|\t$10  "<<endl;
    cout<<"2     \t|\t500   \t|\t$15  "<<endl;
    cout<<"3     \t|\t750   \t|\t$20  "<<endl;
    cout<<"4 Press 4 to directly go into game menu if you have points.\n"<<endl;
}
extern void point(){
    int n;
    cout<<"Enter serial no.";
    cin>>n;

if (n==1){
        points+=250;
    }
    else if (n==2){
        points+=500;
    }
    else if (n==3){
        points+=750;
    }
    else if (n==4){
        points+=0;
    }
    else if(n<=0 || n>4){
        while (n<=0 || n>4){
            cout<<"Select a number in 1,2 and 3.";
            cout<<"Enter serial no.";
            cin>>n;
            if (n==1){
                points+=250;
            }
            else if (n==2){
                points+=500;
            }
            else if (n==3){
                points+=750;
            }
            else if(n==4){
                points+=0;
            }
        }
    }

}
class Simonsays{
public:
    //friend void finalfuncarcade();
    void dispss(){
        cout<<"-------------Welcome to Simon Says!!-----------------\n\n"<<endl;
        cout<<"Intructions of the following game are:\n"<<endl;
        cout<<"1.The numbers will be displayed and you will have to memorize it."<<endl;
        cout<<"2.First you have to press any number to proceed then you have to type the number that had been displayed"<<endl;
        cout<<"3.You will have to memorize upto 5 digits."<<endl;
        cout<<"ALL THE BEST!!!!!\n\n"<<endl;
            }
    void mainfunc(){
    int right = 0;
    int Disp[5];
    int input, j, cnt = 0;
    char playAgain;

    do {
        srand(time(0));
        for (int i = 0; i < 5; i++) {
            int N = 10;
            Disp[i] = rand() % N;
        }

        for (int i = 0; i < 5; i++) {
            for (j = 0; j <= i; j++) {
                for (int k = 0; k <= i; k++) {
                    cout << Disp[k];
                }
                cout << "" << endl;
                int a;
                cout << "enter any number to proceed:";
                cin >> a;
                system("cls");
                cout << "type the number just displayed" << endl;
                cin >> input;
                system("cls");
                cout << "" << endl;
                if (input == Disp[j])
                    cout << "Equal! you may proceed to the next round." << endl;
                else if (input == Disp[j + 1] + 10 * Disp[j])
                    cout << "Equal! you may proceed to the next round." << endl;
                else if (input == Disp[j + 2] + 10 * Disp[j + 1] + 100 * Disp[j])
                    cout << "Equal! you may proceed to the next round." << endl;
                else if (input == Disp[j + 3] + 10 * Disp[j + 2] + 100 * Disp[j + 1] + 1000 * Disp[j])
                    cout << "Equal! you may proceed to the next round." << endl;
                else if (input == Disp[j + 4] + 10 * Disp[j + 3] + 100 * Disp[j + 2] + 1000 * Disp[j + 1] + 10000 * Disp[j])
                    cout << "Congratulations ! You win" << endl;
                else if (input != Disp[j]) {
                    cout << "Not Equal! you fail this round" << endl;
                    cnt += 1;
                }
                else if (input == Disp[j + 1] + 10 * Disp[j]) {
                    cout << "Not Equal! you fail this round" << endl;
                    cnt += 1;
                }
                else if (input == Disp[j + 2] + 10 * Disp[j + 1] + 100 * Disp[j]) {
                    cout << "Not Equal! you fail this round" << endl;
                    cnt += 1;
                }
                else if (input == Disp[j + 3] + 10 * Disp[j + 2] + 100 * Disp[j + 1] + 1000 * Disp[j]) {
                    cout << "Not Equal! you fail this round" << endl;
                    cnt += 1;
                }
                else
                    cout << "Not Equal! you fail this round" << endl;
                break;
                cnt += 1;
            }
            cout << "" << endl;
            if (cnt >= 1)
                break;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }
    while (playAgain == 'y' || playAgain == 'Y');
    if (playAgain=='n'){
        why="yes";
    }
    }
};
class lottery{
    public:
        //friend void finalfuncarcade();
    void lotterymain(){
        char tell;
        do{
        int right=0;
        for (int i=0;i<3;i++){
        int n;
        int N = 5;
        int guess;
        srand(time(0));
        cout<<"Guess a number between 0 and 5: ";
        cin>>guess;
        n=rand()%N;
        if (n==guess){
            cout<<"Correct Guess"<<endl;
            cout<<"The number was "<<n<< " "<<endl;
            right++;
        }
        else{
            cout<<"Sorry Wrong Guess"<<endl;
            cout<<"The number was "<<n<< " "<<endl;
        }
    }
    cout<<"\nYou got "<<right<<" right"<<endl;
    if (right==1){
        points+=25;
        cout<<"Your current points are:";
        cout<<points;
    }
    else if (right==2){
        points+=50;
        cout<<"Your current points are:";
        cout<<points;
    }
    else if (right==3){
        points+=75;
        cout<<"Your current points are:";
        cout<<points;
    }
    else{
        cout<<"Your current points are:";
        cout<<points;
    }
    cout<<"Do you want to play again(y/n)?";
    cin>>tell;}
    while (tell=='y');
    if (tell=='n'){
        why="yes";
    }
    }
};
class maze{
    public:
    void moves(){
    cout<<"Press 1 to go straight forward."<<endl;
    cout<<"Press 2 to go left"<<endl;
    cout<<"Press 3 to go right\n"<<endl;
}
    void display(){
        cout<<"        ^      "<<endl;
        cout<<" ------   -----"<<endl;
        cout<<"|  |           |"<<endl;
        cout<<"|  |  ---------"<<endl;
        cout<<"|  |  |        |"<<endl;
        cout<<"|  |      --   |"<<endl;
        cout<<"|  |     |  |  |"<<endl;
        cout<<"|  |-----|  |  |"<<endl;
        cout<<"|  |        |  |"<<endl;
        cout<<"|  |        |  |"<<endl;
        cout<<"|     ---      |"<<endl;
        cout<<"|    |         |"<<endl;
        cout<<"------   -------"<<endl;
        cout<<"       ^        "<<endl;
    }
    void func(int a){
    int b;
    bool x=true;
    while (x==true){
        moves();
        cin>>b;
        if (b>0 && b<4){
        while (b!=a){
            cout<<"No way there!\n"<<endl;
            break;
        }
        if (b==a){
            cout<<"going...\n"<<endl;
            x=false;
        }}
        else{
            cout<<"Enter a number between 1,2 or 3\n"<<endl;
        }

    }
}
    void checkpoint(){
    cout<<"               "<<endl;
    cout<<" ------   -----"<<endl;
    cout<<"|  |           |"<<endl;
    cout<<"|  |  ---------"<<endl;
    cout<<"|  |  |        |"<<endl;
    cout<<"|  |      --   |"<<endl;
    cout<<"|  |     |  |  |"<<endl;
    cout<<"|  |-----|  |  |"<<endl;
    cout<<"|  |        |  |"<<endl;
    cout<<"|  |        |  |"<<endl;
    cout<<"|     ---      |"<<endl;
    cout<<"|    |    o    |"<<endl;
    cout<<"------   -------"<<endl;
    cout<<"                \n"<<endl;
    cout<<"Here is you position in this intersection"<<endl;
    cout<<"You are here choose wisely one wrong step and you will have to choose again"<<endl;
}
    void mazemainpage(){

    for (int i=0;i<=1;i++){
    bool y=true;
    cout<<"--------------Welcome to the maze!--------------------\n"<<endl;
    cout<<"Memorize the maze cause you have to solve it with your memory"<<endl;
    display();
    cout<<"Intructions:"<<endl;
    cout<<"1.Memorize the pattern as per the numbers"<<endl;
    cout<<"2.In any intersection if you go the wrong way you will have to restart or end the game"<<endl;
    cout<<"3.At one intersetion your position in the maze will be shown for a hint\n\n"<<endl;
    moves();
    cout<<"\n\n";
    maze();
    int g;
    cout<<"Press any number to start the game";
    cin>>g;
    system("cls");


    int correct[10]={1,3,1,2,2,2,3,3,3,2};
    for (int i=0;i<10;i++){
        if (i==2){
            checkpoint();
            cout<<"Press any number to proceed"<<endl;
            int f;
            cin>>f;
            system("cls");
            moves();
            int b;
            cin>>b;
            if (b==2){
                cout<<"Going... OH it seems to have reached a dead end. You will have to restart now."<<endl;
                i = 9;
                continue;
            }
            else{
                cout<<"going..."<<endl;
                continue;
            }
        }
        if (i==9){
            int b;
            cin>>b;
            if (b==1){
                cout<<"Going... OH it seems to have reached a dead end. You will have to restart now!"<<endl;
                i = 9;
                continue;
            }
            else if (b==2){
                cout<<"CONGRATS YOU HAVE COMPLETED THE MAZE!!!!!\n";
                break;
            }
        }
        func(correct[i]);
    }
    i = 0;
    char s;
    cout<<"Do you want to play again(y/n):"<<endl;
    cin>>s;
    if (s=='y'){
        continue;
        }
    else{
        why="yes";
        break;
        }
    }
}
};
class arcade:public Simonsays,public maze,public lottery,public section,public customer{
public:
    void finalfunchamley(){
        section maps;
        maps.layout();
        customer one;
        one.intro();
    while(want=="yes"){
        one.shopping();
        one.buying();
    }
    one.cashing();
    }
    void finalfuncarcade(){
    maindisplay();
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    printf("%s", asctime(ptr));
    cout<<"\n\n";
    point();

    cout<<points;
    cout<<"\n\n";
    cout<<"Press 1 to play lottery"<<endl<<"Press 2 to play maze"<<endl<<"Press 3 to play Simonsays"<<endl;
    int g;
    cin>>g;
    if (g==1){
        char b;
        cout<<"This game costs 50. Do you want to continue (y/n)?";
        cin>>b;
        if (b=='y'){
            points-=50;
            lottery l1;
            l1.lotterymain();}
        else{
            cout<<"Come back again!";
        }
    }
    else if (g==2){
        char b;
        cout<<"This game costs 50. Do you want to continue (y/n)?";
        cin>>b;
        if (b=='y'){
        maze m1;
        m1.mazemainpage();}
        else{
            cout<<"ok\n\n";
        }

    }
    else if (g==3){
        char b;
        cout<<"This game costs 50. Do you want to continue (y/n)?";
        cin>>b;
        if (b=='y'){
            Simonsays s1;
            s1.dispss();
            s1.mainfunc();
        }
        else{
            cout<<"come back again";
        }
    }
    }

};
extern void secondfloordis(){
        cout<<"-------------------------------------------------------------------"<<endl;
        cout<<"------------------Welcome to the 2nd Floor-------------------------"<<endl;
        cout<<"-------------------------------------------------------------------\n\n"<<endl;
        cout<<"                 _____________________________ "<<endl;
        cout<<"                /                            /\\"<<endl;
        cout<<"               /          Arcade            /  \\"<<endl;
        cout<<"              /     _______________________/    \\   "<<endl;
        cout<<"             /  A  / _____________________ \\  H  \\    "<<endl;
        cout<<"   AR------>/  R  / /                     \\ \\  a  \\     "<<endl;
        cout<<"           /  C  / /                       \\ \\  m  \\     "<<endl;
        cout<<"           \\  A  \\ \\                       / /  l  /      "<<endl;
        cout<<"            \\  D  \\ \\_/ /  e  /<-----HA"<<endl;
        cout<<"             \\  E  \\_/  y' /     "<<endl;
        cout<<"              \\                            \\ s  /    "<<endl;
        cout<<"               \\          Arcade            \\  /   "<<endl;
        cout<<"                \\\\/  \n\n"<<endl;

    cout<<"Where would you like to go?(Type the initials as shown)"<<endl;
    cout<<"If you would like to change floors type floor. "<<endl;
}
extern string wow(){
    secondfloordis();
    string u;
    cin>>u;
    system("cls");
    return u;
}

// int main()
// {
    // string b;
    // b=wow();
    // arcade a;
    // if (b=="AR"){
    //     while (why=="yes"){
    //     a.finalfuncarcade();}
    //     }
    // else if (b=="HA"){
    //     while (seek=="yes"){
    //     a.finalfunchamley();}
    // }
    // else{
    //     cout<<"Type a valid string.";
    // }
// }