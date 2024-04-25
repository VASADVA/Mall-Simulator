#include <iostream>

using namespace std;

#include <time.h>
#include <ctime>

string ask="Yes";
class fooditem1
{
    public:
        void menu1()
        {
            cout<<"      KFC IT'S FINGER LICKIN' GOOD!"<<endl;
            string table[11][5]=
            {
            {"SL.No","\t","  ITEMS","\t\t\t","PRICE"},

            {" 1","\t","Chicken Burger(CB)","\t"," 250"},
            {" 2","\t","Medium Pepsi(MP)","\t"," 50"},
            {" ","\t","      Pepsi(P)","\t"," "},
            {" 3","\t","Large Pepsi(LP)","\t\t"," 70"},
            {" 4","\t","Chicken Wraps(CW)","\t"," 120"},
            { " ","\t","    Fries(F)","\t"," "},
            {" 5","\t","Medium Fries(MF)","\t"," 70"},
            {" 6","\t","Large Fries(LF)","\t\t"," 90"},
            {" 7","\t","Chicken Nuggets(CN)","\t"," 300"}
            };
            for(int i=0;i<11;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        string ask1,a,ask2;
        int sum1=0,n,n1;
        void price1(string a,int n)
        {
            if(a=="CB")
            {
                sum1+=n*250;
            }
            else if(a=="MP")
            {
                sum1+=n*50;
            }
            else if(a=="LP")
            {
                sum1+=n*70;
            }
            else if(a=="CW")
            {
                sum1+=n*120;
            }
            else if(a=="MF")
            {
                sum1+=n*70;
            }
            else if(a=="LF")
            {
                sum1+=n*90;
            }
            else if(a=="CN")
            {
                sum1+=n*300;
            }
        }

        void bill1()
        {
            cout<<"Your total bill is:"<<sum1<<endl;
                time_t currentTime = time(nullptr);
                tm* localTime = localtime(&currentTime);
                cout
                  << localTime->tm_hour << ":"
                  << localTime->tm_min << ":"
                  << localTime->tm_sec <<endl;
}
        void sale1()
        {
            cout<<"What would you like to have ";cin>>ask1;
            if(ask1=="P")
            {
                cout<<"Medium or Large"<<endl;
                cout<<"I would like a ";cin>>ask1;
            }
            if(ask1=="F")
            {
                cout<<"Medium or Large"<<endl;
                cout<<"I would like a ";cin>>ask1;
            }
            cout<<"How many would you like to have ";cin>>n1;
            price1(ask1,n1);
            cout<<"Would you like to order more ";cin>>ask;
        }
};

class fooditem2
{
    public:
        void menu2()
        {
            cout<<"             McD I'M LOVING IT"<<endl;
            string table2[11][5]=
            {
            {"SL.No","\t","  ITEMS","\t\t\t","   PRICE"},
            {"\t\t","\t","\t","VEG(V) "," NON-VEG(NV)"},
            {" 1","\t","Burger(B)","\t\t"," 250      350"},
            {" ","\t","      Pepsi(P)","\t"," "},
            {" 2","\t","Medium Pepsi(MP)","\t"," 50"},
            {" 3","\t","Large Pepsi(LP)","\t\t"," 70"},
            {" 4","\t","Wraps(W)","\t\t"," 120      220"},
            { " ","\t","    Fries(F)","\t"," "},
            {" 5","\t","Medium Fries(MF)","\t"," 70"},
            {" 6","\t","Large Fries(LF)","\t\t"," 90"},
            {" 7","\t","Nuggets(N)","\t\t"," 300      400"}};
            for(int i=0;i<11;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table2[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        string ask3,a1,ask4;
        int sum2=0,n2,n3;
        void price2(string a1,int n2)
        {
            if(a1=="VB")
                sum2+=n2*250;
            else if(a1=="NVB")
                sum2+=n2*350;
            else if(a1=="VW")
                sum2+=n2*120;
            else if(a1=="NVW")
                sum2+=n2*220;
            else if(a1=="VN")
                sum2+=n2*300;
            else if(a1=="NVN")
                sum2+=n2*400;
            else if(a1=="MP")
                sum2+=n2*50;
            else if(a1=="LP")
                sum2+=n2*70;
            else if(a1=="MF")
                sum2+=n2*70;
            else if(a1=="LF")
                sum2+=n2*90;
        }
        void sale2()
        {
            cout<<"What would you like to have ";cin>>ask3;
            if(ask3=="P")
            {
                cout<<"Medium or Large"<<endl;
                cout<<"I would like a ";cin>>ask3;
            }
            if(ask3=="F")
            {
                cout<<"Medium or Large"<<endl;
                cout<<"I would like a ";cin>>ask3;
            }
            cout<<"How many would you like to have ";cin>>n3;
            price2(ask3,n3);
            cout<<"Would you like to order more ";cin>>ask;
        }
        void bill2()
        {
            cout<<"Your total bill is:"<<sum2<<endl;
                time_t currentTime = time(nullptr);
                tm* localTime = localtime(&currentTime);
                cout
                  << localTime->tm_hour << ":"
                  << localTime->tm_min << ":"
                  << localTime->tm_sec <<endl;
            
        }
};

class fooditem3
{
    public:
        void menu3()
        {
            string table3[6][5]=
            {
            {" |Sr.No","\t","|ITEMS","\t\t\t"," |Reg   |Lar"},
            {" |1","\t","|Chocolate Oreo(CO)","\t"," |100   |180"},
            {" |2","\t","|Cold Coffee(CC)","\t"," |200   |300"},
            {" |3","\t","|Mocha Mania(MM)","\t"," |230   |320"},
            {" |4","\t","|Kit-Kat(KK)","\t\t"," |200   |280"},
            {" |5","\t","|Exotic Mango(EM)","\t"," |120   |240"}
            };
            for(int i=0;i<6;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table3[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        string ask5,a2,a3,ask6;
        int sum3=0,n3,n4;
        void price3(string a2,string a3,int n3)
        {
            if(a2=="CO"&&a3=="R")
            {
                sum3+=n3*100 ;
            }
            else if(a2=="CO"&&a3=="L")
            {
                sum3+=n3*180;
            }
            else if(a2=="CC"&&a3=="R")
            {
                sum3+=n3*200;
            }
            else if(a2=="CC"&&a3=="L")
            {
                sum3+=n3*300;
            }
            else if(a2=="MM"&&a3=="R")
            {
                sum3+=n3*230;
            }else if(a2=="MM"&&a3=="L")
            {
                sum3+=n3*320;
            }
            else if(a2=="KK"&&a3=="R")
            {
                sum3+=n3*200;
            }
            else if(a2=="KK"&&a3=="L")
            {
                sum3+=n3*280;
            }
            else if(a2=="EM"&&a3=="R")
            {
                sum3+=n3*120;
            }
            else if(a2=="EM"&&a3=="L")
            {
                sum3+=n3*240;
            }
        }

        void bill3()
        {
            cout<<"Thank you for coming!! \nYour total bill is "<<sum3<<endl;
        }
        void sale3()
        {
            cout<<"What would you like to have: ";cin>>ask5;
            cout<<"Regular(R) or Large(L): ";cin>>ask6;
            cout<<"How many would you like to have: ";cin>>n4;
            price3(ask5,ask6,n4);
            cout<<"Would you like to order more ";cin>>ask;
        }
};

class work:public fooditem1,public fooditem2,public fooditem3
{
    public:
    void layout()
    {
        cout<<"                                      _____________________________ "<<endl;
        cout<<"                                     /                            /\\"<<endl;
        cout<<"                                    /        Mc Donald's(McD)     /  \\"<<endl;
        cout<<"                                   /     _______________________/    \\   "<<endl;
        cout<<"                                  /     / _____________________ \\     \\    "<<endl;
        cout<<"                                 /     / /                     \\ \\     \\     "<<endl;
        cout<<"                                /_____/ /                       \\ \\  K  \\     "<<endl;
        cout<<"                                \\     \\ \\                       / /  F  /      "<<endl;
        cout<<"                                 \\     \\ \\_____________________/ /   C /      "<<endl;
        cout<<"                                  \\     \\_______________________/     /     "<<endl;
        cout<<"                                   \\                            \\    /    "<<endl;
        cout<<"                                    \\          Keventers         \\  /   "<<endl;
        cout<<"                                     \\____________________________\\/  "<<endl;
        cout<<"                                                  "<<endl;
        cout<<"-------------------------------WELCOME--TO--FOOD--COURT-------------------------------"<<endl;
    }
    void kfc(){
        menu1();
        cout<<"---------Welcome to KFC---------"<<endl;
        sale1();
        while(ask=="Yes"){
            sale1();
        }
        bill1();
    }
    void mcd()
    {
        menu2();
        cout<<"---------Welcome to McD---------"<<endl;
        sale2();
        while(ask=="Yes"){
            sale2();
        }
        bill2();
    }
    void keventers()
    {
        menu3();
        cout<<"---------Welcome to KEVENTERS---------"<<endl;
        sale3();
        while(ask=="Yes"){
            sale3();
        }
        bill3();
    }
    friend void shop(work);
};
void shop(work w)
{
    string where;
    cout<<"Which shop would you like to visit"<<endl;
    cin>>where;
    if(where=="KFC")
    {
        w.kfc();
    }
    else if(where=="McD")
    {
        w.mcd();
    }
    else if(where=="Keventers")
    {
        w.keventers();
    }
}
// int main()
// {
    // work w;
    // string aski;
    // w.layout();
    // shop(w);
    // cout<<"Do you want to buy more on this floor"<<endl;
    // cin>>aski;
    // if(aski=="Yes")
    // {
    //     return main();
    // }
    // else
    // {
    //     cout<<"Which floor do you want to go"<<endl;
    // }
// }