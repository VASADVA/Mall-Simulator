#include <iostream>
#include <time.h>
#include <ctime>
#include <string>
#include "C:\Users\vansh\OneDrive\Desktop\.vscode\firstf.cpp"
#include "C:\Users\vansh\OneDrive\Desktop\.vscode\secondf.cpp"
#include "C:\Users\vansh\OneDrive\Desktop\.vscode\thirdf.cpp"
#include "C:\Users\vansh\OneDrive\Desktop\.vscode\fourthf.cpp"

using namespace std;

class max
{
    public:
        int sum=0;
        void men()
        {
            string mprod[5][5]={
            {"ITEM CODE","\t","MEN'S APPAREL","\t\t"," PRICE"},
            {"  1001","\t\t","Black Pants","\t\t"," Rs 1000"},
            {"  1002","\t\t","Blue Shirt","\t\t"," Rs 1200"},
            {"  1003","\t\t","White Shirt","\t\t"," Rs1600"},
            {"  1004","\t\t","Black Blazer","\t\t"," Rs2000"}};
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<mprod[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void kid()
        {
            string kprod[6][5]={
            {"ITEM CODE","\t","KID'S APPAREL","\t\t"," PRICE"},
            {"  3001","\t\t","Blue Boy's Shorts","\t"," Rs 900"},
            {"  3002","\t\t","White Boy's Shirt","\t"," Rs 1000"},
            {"  3003","\t\t","Green Dress for Girls","\t"," Rs 1500"},
            {"  3004","\t\t","Yellow Skirt","\t\t"," Rs 1800"},
            {"  3005","\t\t","White Shirt for Girls ","\t"," Rs 2000"}};
            for(int i=0;i<6;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<kprod[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void women()
        {
            string wprod[5][5]={
            {"ITEM CODE","\t","WOMEN'S APPAREL","\t\t"," PRICE"},
            {"  2001","\t\t","Black Skirt","\t\t"," Rs 1200"},
            {"  2002","\t\t","White Shirt","\t\t"," Rs 2200"},
            {"  2003","\t\t","Red Dress","\t\t"," Rs1500"},
            {"  2004","\t\t","Green Dress","\t\t"," Rs2500"}};
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<wprod[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void sections()
        {
            cout<<"____________________________"<<endl;
            cout<<"|           | |            |"<<endl;
            cout<<"|     (1)   | |    (2)     |"<<endl;
            cout<<"|    MEN'S  | |  WOMEN'S   |"<<endl;
            cout<<"|   SECTION | |  COUNTER   |"<<endl;
            cout<<"|           | |            |"<<endl;
            cout<<"|_____  ____| |______  ____|"<<endl;
            cout<<"|_____  ____   ______  ____|"<<endl;
            cout<<"|           | |            |"<<endl;
            cout<<"|     (3)   | |    (4)     |"<<endl;
            cout<<"|    KID'S  | |  BILLING   |"<<endl;
            cout<<"|   SECTION | |  COUNTER   |"<<endl;
            cout<<"|           | |            |"<<endl;
            cout<<"|___________| |____________|"<<endl;
        }
        string ask1,ask2;
        int n,n1;
        void price1(string a,int n)
        {
            if(a=="1001")
            {
                sum+=n*1000;
            }
            else if(a=="1002")
            {
                sum+=n*1200;
            }
            else if(a=="1003")
            {
                sum+=n*1600;
            }
            else if(a=="1004")
            {
                sum+=n*2000;
            }
            else if(a=="2001")
            {
                sum+=n*1200;
            }
            else if(a=="2002")
            {
                sum+=n*2200;
            }
            else if(a=="2003")
            {
                sum+=n*1500;
            }
            else if(a=="2004")
            {
                sum+=n*2500;
            }
            else if(a=="3001")
            {
                sum+=n*900;
            }
            else if(a=="3002")
            {
                sum+=n*1000;
            }
            else if(a=="3003")
            {
                sum+=n*1500;
            }
            else if(a=="3004")
            {
                sum+=n*1800;
            }
            else if(a=="3004")
            {
                sum+=n*2000;
            }
        }
        string ask3,ask4;
        void sale()
        {
            cout<<"Which section would you like to go"<<endl;
            cin>>ask2;
            if(ask2=="Men's")
            {
                men();
                cout<<"What would you like to have ";cin>>ask1;
                cout<<"How many would you like to have ";cin>>n1;
            }
            else if(ask2=="Women's")
            {
                women();
                cout<<"What would you like to have ";cin>>ask1;
                cout<<"How many would you like to have ";cin>>n1;
            }
            else if(ask2=="Kid's")
            {
                kid();
                cout<<"What would you like to have ";cin>>ask1;
                cout<<"How many would you like to have ";cin>>n1;
            }
            price1(ask1,n1);
            cout<<"Do you want to buy more in this section "<<endl;
            cin>>ask3;
            if(ask3=="Yes")
            {
                sale();
            }
            else if(ask3=="No")
            {
                cout<<"Do you want to buy more"<<endl;
                cin>>ask4;
                if(ask4=="Yes")
                {
                    sale();
                }
                else
                {
                    cout<<"Please proceed for billing"<<endl;
                }
            }
        }
        void bill()
        {
            cout<<"Your total bill is:"<<sum<<endl;
                time_t currentTime = time(nullptr);
                tm* localTime = localtime(&currentTime);
                cout
                  << localTime->tm_hour << ":"
                  << localTime->tm_min << ":"
                  << localTime->tm_sec <<endl;
        }
};
string ask5="Yes";
class watch
{
    public:
        string ask1,ask2;
        int sum=0;
        void display_time(){
        cout<<"Welcome to WORLD OF WATCHES"<<endl;
        time_t currentTime = time(nullptr);
        tm* localTime = localtime(&currentTime);
        cout<< "Current time: "<< localTime->tm_hour << ":"<< localTime->tm_min << ":"<< localTime->tm_sec <<endl;}
        void bill()
        {
            cout<<"You Total Bill is:"<<sum<<endl;
        }
        void brands()
        {
            string table[5][5]={
            {"SR.No","\t","BRANDS","\t","    RANGE"},
            {" 1","\t","G-SHOCK","\t"," Rs. 2200-4200"},
            {" 2","\t","FOSSIL","\t"," Rs. 2700-6000"},
            {" 3","\t","TITAN","\t"," Rs. 1200-7200"},
            {" 4","\t","ROLEX","\t"," Rs. 4700-9200"}};
            cout<<"--------------ANALOG WATCHES--------------"<<endl;
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }

            string table1[5][5]={
            {"SR.No","\t","BRANDS","\t","    RANGE"},
            {" 1","\t","G-SHOCK","\t"," Rs. 2000-4000"},
            {" 2","\t","FOSSIL","\t"," Rs. 2500-6000"},
            {" 3","\t","TITAN","\t"," Rs. 2000-8200"},
            {" 4","\t","ROLEX","\t"," Rs. 4000-8000"}};
            cout<<"--------------DIGITAL WATCHES--------------"<<endl;
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table1[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void price(string a)
        {
            if(a=="G855")
                sum+=2200;
            else if(a=="G625")
                sum+=4000;
            else if(a=="G230")
                sum+=3700;
            else if(a=="G450")
                sum+=4200;
            else if(a=="Master-1")
                sum+=5200;
            else if(a=="Master-2")
                sum+=6000;
            else if(a=="Oyester")
                sum+=4700;
            else if(a=="M1234")
                sum+=9200;
            else if(a=="Splash")
                sum+=1200;
            else if(a=="Ceramic")
                sum+=3200;
            else if(a=="Blue")
                sum+=5700;
            else if(a=="Regalia")
                sum+=7200;
            else if(a=="Blu")
                sum+=3200;
            else if(a=="Gold")
                sum+=4200;
            else if(a=="Towsman")
                sum+=2700;
            else if(a=="GM-6900")
                sum+=2200;
            else if(a=="GM-2343")
                sum+=4000;
            else if(a=="GM-3245")
                sum+=3700;
            else if(a=="GM-8660")
                sum+=4200;
            else if(a=="Fit-1")
                sum+=5200;
            else if(a=="Fit-2")
                sum+=6000;
            else if(a=="Speed")
                sum+=4700;
            else if(a=="Handex")
                sum+=9200;
            else if(a=="Galaxy")
                sum+=1200;
            else if(a=="Crest")
                sum+=3200;
            else if(a=="Zoop")
                sum+=5700;
            else if(a=="SmartFit")
                sum+=7200;
            else if(a=="Gen 6")
                sum+=3200;
            else if(a=="Sloan")
                sum+=4200;
            else if(a=="Everret-1")
                sum+=2700;
            else if(a=="Everret-2")
                sum+=6000;
        }
        void gshocka()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","G855 Watch","\t","Rs. 2,200"},
        {" 2","\t","G625 Casio ","\t","Rs. 4,000"},
        {" 3","\t","G230 Casio","\t","Rs. 3,700"},
        {" 4","\t","G450 Watch","\t","Rs. 4,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void rolexa()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Rolex Master-1","\t","Rs. 5,200"},
        {" 2","\t","Rolex Master-2","\t","Rs. 6,000"},
        {" 3","\t","Rolex Oyester","\t","Rs. 4,700"},
        {" 4","\t","Rolex M1234","\t","Rs. 9,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void titana()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Titan Neo Splash","\t","Rs. 1,200"},
        {" 2","\t","Titan Ceramic","\t","Rs. 3,200"},
        {" 3","\t","Titan Neo Blue","\t","Rs. 5,700"},
        {" 4","\t","Titan Regalia","\t","Rs. 7,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void fossila(){
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Fossil Blu","\t","Rs. 3,200"},
        {" 2","\t","Fossil Gold","\t","Rs. 4,200"},
        {" 3","\t","Fossil Townsman","\t","Rs. 2,700"},
        {" 4","\t","Fossil Grey","\t","Rs. 6,000"}};
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void gshockd()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","GM-6900 Watch","\t","Rs. 2,200"},
        {" 2","\t","GM-2343 Casio ","\t","Rs. 4,000"},
        {" 3","\t","GM-3245 Casio","\t","Rs. 3,700"},
        {" 4","\t","GM-866 Watch","\t","Rs. 4,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void rolexd()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Rolex Fit-1","\t","Rs. 5,200"},
        {" 2","\t","Rolex Fit-2","\t","Rs. 6,000"},
        {" 3","\t","Rolex Speed","\t","Rs. 4,700"},
        {" 4","\t","Rolex Handex","\t","Rs. 9,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void titand()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Titan Galaxy","\t","Rs. 1,200"},
        {" 2","\t","Titan Crest","\t","Rs. 3,200"},
        {" 3","\t","Titan Zoop","\t","Rs. 5,700"},
        {" 4","\t","Titan SmartFit","\t","Rs. 7,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void fossild(){
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Fossil Gen 6","\t","Rs. 3,200"},
        {" 2","\t","Fossil Sloan","\t","Rs. 4,200"},
        {" 3","\t","Fossil Everett-1","\t","Rs. 2,700"},
        {" 4","\t","Fossil Everett-2","\t","Rs. 6,000"}};
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        string ask3,ask4;
        void ask()
        {
            cout<<"I would like to see a watch of";cin>>ask2;
            cout<<"What type of watch do you prefer";cin>>ask4;
            if (ask2=="G-Shock" && ask4=="Analog")
            {
                gshocka();
                cout<<"I would like to buy";cin>>ask3;
            }
            else if(ask2=="G-shock" && ask4=="Digital")
            {
                gshockd();
                cout<<"I would like to buy";cin>>ask3;

            }
            else if(ask2=="Fossil"&& ask4=="Analog")
            {
                fossila();
                cout<<"I would like to buy";cin>>ask3;

            }
            else if(ask2=="fossil" && ask4=="Digital")
            {
                fossild();
                cout<<"I would like to buy";cin>>ask3;

            }
            else if(ask2=="Titan" && ask4=="Analog")
            {
                titana();
                cout<<"I would like to buy";cin>>ask3;
            }
            else if(ask2=="Titan" && ask4=="Digital")
            {
                titand();
                cout<<"I would like to buy";cin>>ask3;
            }
            else if(ask2=="Rolex" && ask4=="Analog")
            {
                rolexa();
                cout<<"I would like to buy";cin>>ask3;
            }
            else if(ask2=="Rolex" && ask4=="Digital")
            {
                rolexd();
                cout<<"I would like to buy";cin>>ask3;
            };
            price(ask3);
            cout<<"Do you want to buy more watches";
            cin>>ask5;
        }
};

class buying:public max,public watch
{
    public:
    void layout()
    {    cout<<"                                      _________________________________"<<endl;
    cout<<"                                     /\\           Lenskart            /\\"<<endl;
    cout<<"                                    /  \\-----------------------------/  \\"<<endl;
    cout<<"                                   /    \\                                \\"<<endl;
    cout<<"                                  /      \\                                \\"<<endl;
    cout<<"                                 /   M    \\                                ----------- "<<endl;
    cout<<"                                /    A     \\                                Security   "<<endl;
    cout<<"                                \\    X     /                                Check-in   "<<endl;
    cout<<"                                 \\        /                                ------------"<<endl;
    cout<<"                                  \\      /                                /            "<<endl;
    cout<<"                                   \\    /________________________________/"<<endl;
    cout<<"                                    \\  /      World of Watches(WOW)     /"<<endl;
    cout<<"                                     \\/________________________________/"<<endl;

    }
    void max1()
    {
        max b;
        b.sections();
        b.sale();
        b.bill();
    }
    void watch1()
    {
        watch g;
        cout<<"We have a range of watches for you what kind of watch do you prefer"<<endl;
        cout<<"Which all brands and types of watches do you have"<<"\n"<<endl;
        g.brands();
        g.ask();
        while(ask5=="Yes")
        {
            g.ask();
        }
        g.bill();
    }
};

class mall{
public:
    void entrydis(){
    cout<<"-------------------------------------------------"<<endl;
     cout<<"-------------------------------------------------"<<endl;
     cout<<"-----------------Welcome to----------------------\n\n"<<endl;
    cout << "V   V  AAAAA  SSSSS  AAAAA  DDDDD  V   V  AAAAA" <<endl;
    cout << "V   V  A   A  S      A   A  D   D  V   V  A   A" << endl;
    cout << "V   V  AAAAA  SSSSS  AAAAA  D   D  V   V  AAAAA" << endl;
    cout << " V V   A   A      S  A   A  D   D   V V   A   A" << endl;
    cout << "  V    A   A  SSSSS  A   A  DDDDD    V    A   A\n" << endl;
    cout<<"                  M  A  L  L                     \n\n"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------\n\n"<<endl;
    cout<<"                                Project by:"<<endl;
    cout<<"                                      Shaurya Rawat"<<endl;
    cout<<"                                      Vansh Dhir"<<endl;
    cout<<"                                      Dibyendu De"<<endl;
    cout<<"                                      Abhinav Singh"<<endl;
    cout<<"                                      Ajinkya Phatak"<<endl;
    cout<<"                                      Vibhor Kataria"<<endl;
    cout<<"                                      Aditya Mishra"<<endl;
    }
    void entrydetails(){
        string name;
        int age;
        cout<<"What is your name?\n";
        cin>>name;
        cout<<"\nWhat is your age?\n";
        cin>>age;
        while (age<0 || age>100){
        cout<<"Enter a valid age!";
        cin>>age;
        system("cls");
    }
    system("cls");
    cout<<"Welcome to Vasadva Mall Simulator "<<name;
    // cout<<" Experience the thrill of mall life from the comfort of your device Vasadva Mall Simulator offers a virtual adventure through a bustling";
    // cout<<"shopping center filled with shops, eateries, and entertainment venues. Whether you're in the mood for shopping, dining, or just exploring, Vasadva Mall has something for everyone.Dive in and enjoy the excitement of mall life at your fingertips !"<<endl;
    }
    inline void ground_floor(){
    cout<<"\n                                      _________________________________"<<endl;
    cout<<"                                     /\\           Lenskart            /\\"<<endl;
    cout<<"                                    /  \\_/  \\"<<endl;
    cout<<"                                   /    \\                                \\"<<endl;
    cout<<"                                  /      \\                                \\"<<endl;
    cout<<"                                 /  M     \\                                ----------- "<<endl;
    cout<<"                                /    A     \\                                Security   "<<endl;
    cout<<"                                \\     X    /                                Check-in   "<<endl;
    cout<<"                                 \\     X  /                                ------------"<<endl;
    cout<<"                                  \\      /                                /            "<<endl;
    cout<<"                                   \\    //"<<endl;
    cout<<"                                    \\  /         World of Watches       /"<<endl;
    cout<<"                                     \\//\n\n"<<endl;
}

};
int floorinp(){
    int floor;
    cout<<"Which floor would you like to visit"<<endl;
    cout<<"Press 0 for ground floor."<<endl;
    cout<<"Press 1 for first floor."<<endl;
    cout<<"Press 2 for second floor."<<endl;
    cout<<"Press 3 for third floor."<<endl;
    cout<<"Press 4 for fourth floor."<<endl;
    cin>>floor;
    return floor;
}
int main()
{
    mall m;
    m.entrydis();
    m.entrydetails();
    string dd="Yes";
    int a;
    while(dd=="Yes"){
    a=floorinp();

    if (a==0){
    label:
        buying b;
        b.layout();
        string aski,ask7;
        cout<<"Which shop would you like to go"<<endl;
        cin>>aski;
        if(aski=="Max")
        {
            b.max1();
            cout<<"Do you want to buy more on this floor"<<endl;
            cin>>ask7;
        }
        else if(aski=="WOW")
        {
            b.watch1();
            cout<<"Do you want to buy more on this floor"<<endl;
            cin>>ask7;
        }
        else if(aski=="floor"){
            continue;
        }
        if(ask7=="Yes")
        {
            goto label;
        }
        else if(ask7=="No")
        {
            floorinp();
        }
    goto label;}
    else if (a==1)
    {
        buyin1 b1;
    b1.first_floor();
    cout<<"Which shop would you like to go"<<endl;
    cout<<"If you would like to visit any other floor type floor.";
    string ask7;
    cin>>ask7;
    if(ask7=="Nike")
    {
        b1.sports();
    }
    else if(ask7=="Chroma")
    {
        b1.cro();
    }
    else if(ask7=="Crossword")
    {
        b1.books();
    }
    else if (ask7=="floor"){
        continue;
    }
    }
    else if (a==2)
    {
    string b;
    b=wow();
    arcade a;
    if (b=="AR"){
        while (why=="yes"){
        a.finalfuncarcade();
        }
        }
    else if (b=="HA"){
        while (seek=="yes"){
        a.finalfunchamley();}
    }
    else if (b=="floor"){
        continue;
    }
    else{
        cout<<"Type a valid string.";
    }

    }
    else if(a==3)
    {
        abhi:
            string aryan;
            cout<<"If you want to watch a movie type movie else type floor."<<endl;
            cin>>aryan;
        if (aryan=="movie"){
        theater screen;
        screen.halls();
        film hall1,hall2,hall3,hall4;
        hall1.allot();
        hall2.allot();
        hall3.allot();
        hall4.allot();
        string want;
        string pep="yes";
        string more;


        while(pep=="yes"){
                cout<<"which movie do you want to watch?"<<endl;
                cout<<"If you want to visit any other floor type floor\n"<<endl;
                cin>>want;
                if((want=="MM")){
                    cout<<"ok the movie is in hall 1."<<endl;
                    hall1.display();
                    hall1.tickets();
                    hall1.pricedisp();
                    cout<<"are there more people who want to but tickets?"<<endl;
                    cin>>more;
                    if(more=="Y"){
                        pep="yes";
                    }
                    else{
                        pep="no";
                    }
                }
                else if((want=="D2")){
                    cout<<"ok the movie is in hall 2.\n";
                    hall2.display();
                    hall2.tickets();
                    hall2.pricedisp();
                    cout<<"are there more people who want to but tickets?"<<endl;
                    cin>>more;
                    if(more=="Y"){
                        pep="yes";
                    }
                    else{
                        pep="no";
                    }
                }
                else if((want=="GK")){
                    cout<<"ok the movie is in hall 3.\n";
                    hall3.display();
                    hall3.tickets();
                    hall3.pricedisp();
                    cout<<"are there more people who want to but tickets?"<<endl;
                    cin>>more;
                    if(more=="Y"){
                        pep="yes";
                    }
                    else{
                        pep="no";
                    }
                }
                else if((want=="D1")){
                    cout<<"ok the movie is in hall 4.\n";
                    hall4.display();
                    hall4.tickets();
                    hall4.pricedisp();
                    cout<<"are there more people who want to but tickets?"<<endl;
                    cin>>more;
                    if(more=="Y"){
                        pep="yes";
                    }
                    else{
                        pep="no";
                    }
                }
    }
    goto abhi;}
    else if(aryan=="floor"){
        continue;
    }
    else{
        cout<<"Type a valid string.";
    }

    }
    else if (a==4)
    {
    string adi;
    string shaur;
    vansh:
        cout<<"If you want to enter the foodcourt type fc else type floor.";
        cin>>shaur;


    adi="Yes";
    if (shaur=="fc"){
    while (adi=="Yes"){
        work w;
        string aski;
        w.layout();
        shop(w);
        cout<<"Do you want to buy more on this floor"<<endl;
        cin>>aski;
        if(aski=="Yes")
        {
            adi="Yes";
        }
        else
        {
            goto vansh;
        }
    }}
    else if(shaur=="floor"){
        continue;
    }
    else{
        cout<<"Type a valid string.";
    }
    }
    return 0;
    }
}

