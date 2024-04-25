#include <iostream>
#include <ctime>
#include <time.h>
#include <string.h>

using namespace std;
class theater
{
    public:
    void seats(){
        cout<<" "<<"|                                 |"<<endl;
        cout<<" "<<"|             SCREEN              |"<<endl;
        cout<<" "<<"|                                 |"<<endl;
        cout<<" "<<"|_|"<<"\n\n"<<endl;
        int num=65;
        for(int i=0;i<10;i++)
        {
            int n=1;
            for(int j=0;j<5;j++)
                {
                    char alpha=char(num);
                    cout<<" ["<<alpha<<n++<<"]  ";
                }
                num=num+1;
                cout<<"\n";
        }
    }
    void halls()
    {
        cout<<"\n";
         cout<<"                                      _____________________________ "<<endl;
    cout<<"                                     /\\                           /\\"<<endl;
    cout<<"                                    /  \\           4             /  \\"<<endl;
    cout<<"                                   /    \\_/    \\   "<<endl;
    cout<<"                                  /  C  / _____________________ \\  3  \\    "<<endl;
    cout<<"                                 /  I  / /                     \\ \\     \\     "<<endl;
    cout<<"                                /  N  / /                       \\ \\_\\     "<<endl;
    cout<<"                                \\  E  \\ \\                       / /     /      "<<endl;
    cout<<"                                 \\  M  \\ \\_/ /     /      "<<endl;
    cout<<"                                  \\  A  \\_/  2  /     "<<endl;
    cout<<"                                   \\    /                       \\    /    "<<endl;
    cout<<"                                    \\  /           1             \\  /   "<<endl;
    cout<<"                                     \\/_\\/  "<<endl;
    cout<<"                                                  "<<endl;

        cout<<"--------------------------------------\n";
        cout<<"-----------WELCOME TO INOX!-----------\n";
        cout<<"--------------------------------------\n\n\n";
        cout<<"----------------HALL 1----------------\n"<<endl;
        string hall1[3][5]={
            {" SR.No","\t","MOVIES","\t\t"," TIMINGS"},
            {"  1","\t","Murder Mubarak(MM)","\t"," 9:00 am-11:15am"},};
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<hall1[i][j];
                }
                cout<<"\t"<<endl;
            }
        cout<<"\n----------------HALL 2----------------\n"<<endl;
        string hall2[3][5]={
            {" SR.No","\t","MOVIES","\t\t"," TIMINGS"},
            {"  1","\t","Dune:Part 2(D2)","\t"," 8:00 am-10:45am"},
            };
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<hall2[i][j];
                }
                cout<<"\t"<<endl;
            }
        cout<<"\n----------------HALL 3----------------\n"<<endl;
        string hall3[3][5]={
            {" SR.No","\t","MOVIES","\t\t"," TIMINGS"},
            {"  1","\t","Godzilla x Kong(GK)","\t"," 10:00 am-1:30pm"},
            };
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<hall3[i][j];
                }
                cout<<"\t"<<endl;
            }
        cout<<"\n----------------HALL 4----------------\n"<<endl;
        string hall4[3][5]={
            {" SR.No","\t","MOVIES","\t\t"," TIMINGS"},
            {"  1","\t","Dune:Part 1(D1)","\t"," 8:30 am-11:15am"},
            };
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<hall4[i][j];
                }
                cout<<"\t"<<endl;
            }
    }
};
class seats{
    public:
    string arr[10][5];

    int num=65;
    void allot(){
        for(int i=0;i<10;i++)
        {
            int n=1;int l=1;
            for(int j=0;j<5;j++)
                {
                    char alpha=char(num);
                    string a="[";
                    string b="]";
                    string k=to_string(l);
                    string tot;
                    tot=(string)a+alpha+k+b;
                    arr[i][j]=tot;
                    l+=1;
                }
                num=num+1;
        }
    }
    void display(){
        for(int i=0;i<10;i++)
        {

            for(int j=0;j<5;j++)
                {
                    cout<<arr[i][j]<<"    ";
                }
                cout<<""<<endl;
        }
    }
};


class film:public seats
{
    public:
        string arr1[100];
        string ask1;
        int n;
        int sum;

        void tickets()
        {

            cout<<"How many tickets do you want ";cin>>n;
            int i;
            for(i=0;i<n;i++)
                {
                    cout<<"please enter your choice:"<<endl;
                    cin>>ask1;
                    int count1=0;
                    int new1=1;
                    while(new1==1){
                    for(int k=0;k<10;k++)
                    {

                        for(int m=0;m<5;m++)
                        {
                            if(arr[k][m]==ask1){
                                arr1[i]=ask1;
                                arr[k][m]=" NA ";
                                count1=1;
                                cout<<"damn"<<endl;

                                break;
                            }

                        }
                        if(count1==1){
                                new1=0;
                                break;

                            }
                        else if((count1!=1)&&(k==10)){
                            cout<<"the ticket u asked for is not avaliable pls pick another ticket:"<<endl;
                            cin>>ask1;
                        }


                    }
                    }



                }
        }
        void pricedisp(){
            cout<<"so you have bought "<<n<<" tickets"<<endl;
            cout<<"the tickets which you have bought are:"<<endl;
            cout<<""<<endl;
            for(int i=0;i<n;i++){
                cout<<arr1[i]<<"  ";
            }
            cout<<""<<endl;
            sum=300*n;
            cout<<" the final sum for the tickets are:"<<sum<<endl;
            cout<<"thank you for visiting the INOX. Hope to see you again!\n"<<endl;

        }
};

// int main()
// {
    // theater screen;
    // screen.halls();
    // film hall1,hall2,hall3,hall4;
    // hall1.allot();
    // hall2.allot();
    // hall3.allot();
    // hall4.allot();
    // string want;
    // string pep="yes";
    // string more;
    // while(pep=="yes"){
    //         cout<<"which movie do you want to watch?"<<endl;
    //         cin>>want;
    //         if((want=="MM")){
    //             cout<<"ok the movie is in hall 1."<<endl;
    //             hall1.display();
    //             hall1.tickets();
    //             hall1.pricedisp();
    //             cout<<"are there more people who want to but tickets?"<<endl;
    //             cin>>more;
    //             if(more=="Y"){
    //                 pep="yes";
    //             }
    //             else{
    //                 pep="no";
    //             }
    //         }
    //         else if((want=="D2")){
    //             cout<<"ok the movie is in hall 2.\n";
    //             hall2.display();
    //             hall2.tickets();
    //             hall2.pricedisp();
    //             cout<<"are there more people who want to but tickets?"<<endl;
    //             cin>>more;
    //             if(more=="Y"){
    //                 pep="yes";
    //             }
    //             else{
    //                 pep="no";
    //             }
    //         }
    //         else if((want=="GK")){
    //             cout<<"ok the movie is in hall 3.\n";
    //             hall3.display();
    //             hall3.tickets();
    //             hall3.pricedisp();
    //             cout<<"are there more people who want to but tickets?"<<endl;
    //             cin>>more;
    //             if(more=="Y"){
    //                 pep="yes";
    //             }
    //             else{
    //                 pep="no";
    //             }
    //         }
    //         else if((want=="D1")){
    //             cout<<"ok the movie is in hall 4.\n";
    //             hall4.display();
    //             hall4.tickets();
    //             hall4.pricedisp();
    //             cout<<"are there more people who want to but tickets?"<<endl;
    //             cin>>more;
    //             if(more=="Y"){
    //                 pep="yes";
    //             }
    //             else{
    //                 pep="no";
    //             }
    //         }

//     }
