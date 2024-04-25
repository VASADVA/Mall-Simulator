#include <iostream>
#include <time.h>
#include <ctime>
using namespace std;

string ask2="Yes";

class appliances
{
    public:
        int i;
        void laptops(){
        string table1[5][5]=
        {
            {"SL.No","\t","LAPTOPS","\t\t\t\t"," PRICE"},
            {" 1","\t","HP Pavillion Laptop(HP)","\t\t"," 25,000"},
            {" 2","\t","Dell Laptop Inspiron(Dell)","\t"," 50,000"},
            {" 3","\t","Lenovo Idea Pad(Lenovo)","\t\t"," 70,000"},
            {" 4","\t","Asus Tuf A15(Asus)","\t\t"," 1,20,000"}
        };
        for(i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
        void mobiles(){
        string table1[5][5]=
        {
            {"SL.No","\t","  MOBILES","\t\t\t\t","PRICE"},
            {" 1","\t","Samsung Galaxy A20(Samsung)","\t\t","12,000"},
            {" 2","\t","Vivo Y100A(Vivo)","\t\t\t","15,000"},
            {" 3","\t","Samsung Galaxy S22 Ultra(SamsungG)","\t","20,000"},
            {" 4","\t","IPhone 15 Pro(IPhone)","\t\t\t","22,000"}
        };
        for(i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
        void tv(){
        string table1[5][5]=
        {
            {"SL.No","\t\t","TELEVISION","\t\t\t","PRICE"},
            {" 1","\t","Samsung43 Vivid Pro HD(Samsung43) ","\t","45,000"},
            {" 2","\t","LG 32-inch(LG)","\t\t\t\t","50,000"},
            {" 3","\t","Tosibha 55-inch(Tosibha)","\t\t","80,000"},
            {" 4","\t","Sony 55-inch(Sony)","\t\t\t","1,10,000"}
        };
        for(i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
        void head(){
        string table1[5][5]=
        {
            {"SL.No","\t","HEADPHONES\EARPHONES","\t\t"," PRICE"},
            {" 1","\t","Boat Nirvana 751 ANC(BoatN)","\t"," 2,000"},
            {" 2","\t","Boat Rockerz 321 ANC(BoatR)","\t"," 5,000"},
            {" 3","\t","Apple Airpods Pro(Apple)","\t"," 7,000"},
            {" 4","\t","SkullCandy Earpods(SkullCandy)","\t"," 12,000"}
        };
        for(i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
};
class croma:public appliances
{
    public:
        int sum=0;
        string ask1,ask3;
        void section(){
        cout<<"Welcome to Croma"<<endl;
        string table1[5][3]=
        {
            {"SL.No","\t","  SECTIONS",},
            {" 1","\t"," Laptops",},
            {" 2","\t"," Mobiles",},
            {" 3","\t"," Television"},
            {" 4","\t"," Headphones/Earphones"}
        };
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
        void price(string a)
        {
            if(a=="HP")
            {
                sum+=25000;
            }
            else if(a=="Dell")
            {
                sum+=50000;
            }
            else if(a=="Lenovo")
            {
                sum+=70000;
            }
            else if(a=="Asus")
            {
                sum+=120000;
            }
            else if(a=="Samsung")
            {
                sum+=12000;
            }
            else if(a=="Vivo")
            {
                sum+=15000;
            }
            else if(a=="SamsungG")
            {
                sum+=20000;
            }
            else if(a=="IPhone")
            {
                sum+=22000;
            }
            else if(a=="Samsung43")
            {
                sum+=45000;
            }
            else if(a=="LG")
            {
                sum+=50000;
            }
            else if(a=="Tosibha")
            {
                sum+=700000;
            }
            else if(a=="Sony")
            {
                sum+=120000;
            }
            else if(a=="BoatN")
            {
                sum+=2000;
            }
            else if(a=="BoatR")
            {
                sum+=5000;
            }
            else if(a=="Apple1")
            {
                sum+=7000;
            }
            else if(a=="SkullCandy")
            {
                sum+=1200;
            }

        }
        void purchase(){
        cout<<"What would you like to purchase"<<endl;
        cin>>ask1;
        if(ask1=="Laptops")
        {
            laptops();
            cout<<"Which Laptop would you like to buy?(Enter the name of the product as specified)"<<endl;
            cin>>ask3;
        }
        else if(ask1=="Mobiles")
        {
            mobiles();
            cout<<"Which Mobile would you like to buy?(Enter the name of the product as specified)"<<endl;
            cin>>ask3;
        }
        else if(ask1=="Television")
        {
            tv();
            cout<<"Which Television would you like to buy?(Enter the name of the product as specified)"<<endl;
            cin>>ask3;
        }
        else if(ask1=="Headphones/Earphones")
        {
            head();
            cout<<"Which Headphone/Earphone would you like to buy?(Enter the name of the product as specified)"<<endl;
            cin>>ask3;
        }
        price(ask3);
        cout<<"Do you want to buy more products(Yes/No) ";cin>>ask2;
        }
        void bill()
        {
            cout<<"Thank you for coming to Croma!!"<<endl;
            cout<<"Your Total Bill is: "<<sum<<endl;
        }
        void byu(){
            section();
            while(ask2=="Yes")
            {
                purchase();
            }
            bill();
            }
};

class bookstore
{
public:
    int sum = 0;

    void bill()
    {
        cout << "Your total bill is: " << sum << " Rs." << endl;
    }

    void genres()
    {
        cout << "--------------GENRES--------------" << endl;
        cout << "1. Fiction" << endl;
        cout << "2. Self-Help" << endl;
        cout << "3. Money-making" << endl;
        cout << "4. Children's books" << endl;
    }

    void price(int price)
    {
        cout << "The price of the book is: " << price << " Rs." << endl;
        sum += price; // Adding book price to the total bill
    }

    void Fiction()
    {
        cout << "--------------FICTION BOOKS--------------" << endl;
        cout << "1. Harry Potter and the Philosopher's Stone - Rs. 550" << endl;
        cout << "2. Maze Runner - Rs. 600" << endl;
        cout << "3. Divergent - Rs. 500" << endl;
        cout << "4. Frankenstein - Rs. 700" << endl;
    }

    void SelfHelp()
    {
        cout << "--------------SELF-HELP BOOKS--------------" << endl;
        cout << "1. Atomic Habits - Rs. 600" << endl;
        cout << "2. Feel-good Productivity - Rs. 650" << endl;
        cout << "3. 4000 Weeks - Rs. 450" << endl;
        cout << "4. Deep Work - Rs. 700" << endl;
    }

    void MoneyMaking()
    {
        cout << "--------------MONEY-MAKING BOOKS--------------" << endl;
        cout << "1. The Entrepreneur Revolution - Rs. 500" << endl;
        cout << "2. Millionaire Fastlane - Rs. 550" << endl;
        cout << "3. Crush It! - Rs. 600" << endl;
        cout << "4. Key Person of Influence - Rs. 650" << endl;
    }

    void ChildrenBooks()
    {
        cout << "--------------CHILDREN'S BOOKS--------------" << endl;
        cout << "1. Mary had a Little Lamb - Rs. 450" << endl;
        cout << "2. Peppa Pig - Rs. 500" << endl;
        cout << "3. Thomas Engine - Rs. 550" << endl;
        cout << "4. Bob the Builder - Rs. 600" << endl;
    }

    void ask()
    {
        char choice;
        do
        {
            string genre;
            cout << "Enter the number of the genre you'd like to explore: ";
            cin >> genre;

            if (genre == "1")
            {
                Fiction();
                int book;
                cout << "Enter the number of the book you'd like to buy: ";
                cin >> book;
                if (book == 1)
                    price(550);
                else if (book == 2)
                    price(600);
                else if (book == 3)
                    price(500);
                else if (book == 4)
                    price(700);
                else
                    cout << "Invalid book selection." << endl;
            }
            else if (genre == "2")
            {
                SelfHelp();
                int book;
                cout << "Enter the number of the book you'd like to buy: ";
                cin >> book;
                if (book == 1)
                    price(550);
                else if (book == 2)
                    price(600);
                else if (book == 3)
                    price(500);
                else if (book == 4)
                    price(700);
                else
                    cout << "Invalid book selection." << endl;
            }
            else if (genre == "3")
            {
                MoneyMaking();
                int book;
                cout << "Enter the number of the book you'd like to buy: ";
                cin >> book;
                if (book == 1)
                    price(550);
                else if (book == 2)
                    price(600);
                else if (book == 3)
                    price(500);
                else if (book == 4)
                    price(700);
                else
                    cout << "Invalid book selection." << endl;
            }
            else if (genre == "4")
            {
                ChildrenBooks();
                int book;
                cout << "Enter the number of the book you'd like to buy: ";
                cin >> book;
                if (book == 1)
                    price(550);
                else if (book == 2)
                    price(600);
                else if (book == 3)
                    price(500);
                else if (book == 4)
                    price(700);
                else
                    cout << "Invalid book selection." << endl;
            }
            else
            {
                cout << "Invalid genre selection." << endl;
            }

            cout << "Do you want to buy another book? (y/n): ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    }
};

int total = 0;
string dir;
string b;
string ch="Yes";
class nike{
    public:
    void direction(){
        string table[4][3]=
            {
            {"Apparels","\t\t","Left <--"},
            {"SportsEquipments","\t","Right -->"},
            {"Shoes","\t\t\t","Forward and Right ↱"},
            {"Billing","\t\t\t","Forward and Left ↰"},
            // {"Exit","\t\t\t","Back ↓"}
            };
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        cout<<"Where do you want to go?";cin>>dir;
        
    }
};
class apparels{
    public:
    void sportswear(){
    ch="Yes";
    while(ch=="Yes"){
    string jersey[5][3]=
            {
            {"Real Madrid Home Jersey(RMH)","\t\t","Rs. 4000"},
            {"Tottenham Hotspurs Away Jersey(THA)","\t","Rs. 999"},
            {"Manchester United Home Jersey(MUH)","\t","Rs. 2000"},
            {"Chelsea Away Jersey(CA)","\t\t\t","Rs. 2500"},
            {"Dortmund Third Jersey(DT)","\t\t","Rs. 3500"}
            };
    string shorts[3][3]=
            {
            {"White Shorts(WS)","\t\t","Rs. 1200"},
            {"Black Shorts(BS)","\t\t","Rs. 1200"},
            {"Grey Shorts(GS)","\t\t\t","Rs. 1200"},
            };
    string jackets[3][3]=
            {
             {"Mercedes Jacket(MJ)","\t\t","Rs. 4000"},
             {"Ferrari Jacket(FJ)","\t\t","Rs. 6000"},
             {"BMW Jacket(BJ)","\t\t\t","Rs. 3500"},   
            };
            cout<<"-------"<<endl;
            cout<<"JERSEYS"<<endl;
            cout<<"-------"<<endl;
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<jersey[i][j];
                }
                cout<<"\t"<<endl;
            }
            cout<<"------"<<endl;
            cout<<"SHORTS"<<endl;
            cout<<"------"<<endl;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<shorts[i][j];
                }
                cout<<"\t"<<endl;
            }
            cout<<"-------"<<endl;
            cout<<"JACKETS"<<endl;
            cout<<"-------"<<endl;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<jackets[i][j];
                }
                cout<<"\t"<<endl;
            }
            cout<<"What would you like to buy:";cin>>b;
            if(b=="RMH"){
                total+=4000;
            }
            else if(b=="THA"){
                total+=999;
            }
            else if(b=="MUH"){
                total+=2000;
            }
            else if(b=="CA"){
                total+=2500;
            }
            else if(b=="DT"){
                total+=3500;
            }
            else if(b=="WS"){
                total+=1200;
            }
            else if(b=="BS"){
                total+=1200;
            }
            else if(b=="GS"){
                total+=1200;
            }
            else if(b=="MJ"){
                total+=4000;
            }
            else if(b=="FJ"){
                total+=6000;
            }
            else if(b=="BJ"){
                total+=3500;
            }
            cout<<"Would you like to shop more:";cin>>ch;
    }
    
    }
};
class sports_equipment{
    public:
    void buyeqp(){
    ch="Yes";
    while(ch=="Yes"){
    string equipment[5][3]=
            {
            {"Football(F)","\t\t","Rs. 2000"},
            {"Bat(B)","\t\t\t","Rs. 7000"},
            {"Basketball(BB)","\t\t","Rs. 799"},
            {"L Gaurd(LG)","\t\t","Rs. 2500"},
            {"Swimsuit(SS)","s\t\t","Rs. 3500"}
            };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<equipment[i][j];
                }
                cout<<"\t"<<endl;
            }
        cout<<"What would you like to buy:";cin>>b;
        if(b=="F"){
                total+=2000;
            }
            else if(b=="B"){
                total+=7000;
            }
            else if(b=="BB"){
                total+=799;
            }
            else if(b=="LG"){
                total+=2500;
            }
            else if(b=="SS"){
                total+=3500;
            }
            cout<<"Would you like to shop more:";cin>>ch;
    }
    }
};
class shoe{
  public:
    string s;
    void shoeselect(){
        ch="Yes";
        while(ch=="Yes"){
        cout<<"Sports or Sneakers:";cin>>s;
        if(s=="Sports"){
            string sports[5][3]=
            {
            {"Mercurial(M)","\t\t","Rs. 1800"},
            {"Phantom(Ph)","\t\t","Rs. 3700"},
            {"Vomero 17(V17)","\t\t","Rs. 2999"},
            {"Invincible(I)","\t\t","Rs. 2500"},
            {"Pegasus(Pe)","\t\t","Rs. 3000"},
            };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<sports[i][j];
                }
                cout<<"\t"<<endl;
            }
        cout<<"What would you like to buy:";cin>>b;
        if(b=="M"){
                total+=1800;
            }
            else if(b=="Ph"){
                total+=3700;
            }
            else if(b=="V17"){
                total+=2999;
            }
            else if(b=="I"){
                total+=2500;
            }
            else if(b=="Pe"){
                total+=3000;
            }

        }
        else{
            string sneakers[5][3]=
            {
            {"Jordans Mars(JM)","\t\t","Rs. 2700"},
            {"Jordans Retro(JR)","\t\t","Rs. 2600"},
            {"Jumpan(JP)","\t\t\t","Rs. 999"},
            {"Jordans Mids(JMI)","\t\t","Rs. 2500"},
            {"Jordans Air Ship(JAS)","\t\t","Rs. 3500"},
            };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<sneakers[i][j];
                }
                cout<<"\t"<<endl;
            }
        cout<<"What would you like to buy:";cin>>b;
        if(b=="JM"){
                total+=2700;
            }
            else if(b=="JR"){
                total+=2600;
            }
            else if(b=="JP"){
                total+=999;
            }
            else if(b=="JMI"){
                total+=2500;
            }
            else if(b=="JAS"){
                total+=3500;
            }
        }
        cout<<"Would You Like To Shop More:";cin>>ch;
        }
    }
};

class buyin1: public bookstore,public croma,public nike {
    public:
    void first_floor(){
        cout<<"                                      ______________________________ "<<endl;
        cout<<"                                     /\\                             \\"<<endl;
        cout<<"                                    /  \\        Crossword            \\"<<endl;
        cout<<"                                   /    \\_______________________      \\   "<<endl;
        cout<<"                                  /     / _____________________ \\      \\    "<<endl;
        cout<<"                                 /  C  / /                     \\ \\      \\     "<<endl;
        cout<<"                                /  R  / /                       \\ \\______\\     "<<endl;
        cout<<"                                \\  O  \\ \\                       / /      /      "<<endl;
        cout<<"                                 \\  M  \\ \\_____________________/ /      /      "<<endl;
        cout<<"                                  \\  A  \\_______________________/      /     "<<endl;
        cout<<"                                   \\    /                             /    "<<endl;
        cout<<"                                    \\  /            Nike             /   "<<endl;
        cout<<"                                     \\/_____________________________/  "<<endl;
    }
    void cro()
    {
        croma cr;
        cr.section();
        cr.purchase();
        cr.byu();
    }
    void books()
    {
        bookstore book;
        cout << "We have a range of books for you. Here are the genres:" << endl;
        book.genres();
        book.ask();
        book.bill();
    }
    void sports()
    {nike obj;string choice="Yes";
    while(choice=="Yes"){
    obj.direction();
    if(dir=="Apparels"){
        apparels a;
        a.sportswear();
    }
    else if(dir=="SportsEquipments"){
        sports_equipment a;
        a.buyeqp();
    }
    else if(dir=="Shoes"){ 
        shoe a;
        a.shoeselect();
    }
    else if(dir=="Billing"){
        cout<<"Total Amount to be paid:"<<total<<endl;
        // budget-=total;
        cout<<"Amount paid.Thank You for visiting."<<endl;
        choice="No";
    }
    else if(dir=="Exit"){
        cout<<"Thank You For Visiting.Have a Pleasent Day Ahead.";
        choice="No";
    }
    }
    }
};
// int main()
// {
//     buyin1 b1;
//     b1.first_floor();
//     cout<<"Which shop would you like to go"<<endl;
//     string ask7;
//     cin>>ask7;
//     if(ask7=="Nike")
//     {
//         b1.sports();
//     }
//     else if(ask7=="Chroma")
//     {
//         b1.cro();
//     }
//     else if(ask7=="Crossword")
//     {
//         b1.books();
//     }
// }