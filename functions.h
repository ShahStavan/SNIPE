#include<bits/stdc++.h>
#include"Snipe_header.h"
using namespace std;


#define MAX_AUTHOR_NAME 60  // Maximum len of AUTHOR can't be more than 60
#define MAX_WEBSITE_NAME 100  // Maximum len of WEBSITE NAME can't be more than 100
#define MAX_QUOTE_LEN 2000  // Maximum len of QUOTE can't be more than 2000
#define MAX_URL_LEN 700 // Maximum len of URL can't be more than 700

// Pre-defined URL Data
void display_imp_urls(){
    insert_url("Google","https://www.google.com/",100);
    insert_url("Medium","https://medium.com/",101);
    insert_url("Machine Learning(GFG)","https://www.geeksforgeeks.org/machine-learning/",102);
    insert_url("My Website","https://clickarc.bss.design/",103);
    insert_url("dev.to","https://dev.to/shahstavan",104);
    insert_url("Data Structures and Algorithms","https://www.freecodecamp.org/news/tag/data-structures/",105);
    insert_url("CodeForces","https://codeforces.com/",106);
    insert_url("Pdfdrive","https://www.pdfdrive.com/",107);
    insert_url("IRCTC","https://www.irctc.co.in/nget/train-search",108);
    insert_url("Github","https://github.com/ShahStavan",109);
    insert_url("Nirma","https://nirmauni.ac.in/",110);
    insert_url("MoneyControl","https://www.moneycontrol.com/",111);
    insert_url("ML for Beginners","https://github.com/microsoft/ML-For-Beginners",112);
    insert_url("GSOC","https://summerofcode.withgoogle.com/",113);
    display_url();
}

void inspirational_quotes(){
    insert_q("Naval Ravikant","“Desire is a contract that you make with yourself to be unhappy until you get what you want.”",1000);
    insert_q("Naval Ravikant","“I don't actually read a lot of books. I pick up a lot of books and only get through a few, which form the foundation of my knowledge.”",1001);
    insert_q("Naval Ravikant","“Competing without software is like competing without electricity.” ",1002);
    insert_q("Naval Ravikant","“If it entertains you now but will bore you someday, it's a distraction. Keep looking.” ",1003);
    insert_q("Naval Ravikant","“The people who have the ability to fail in public under their own name actually gain a lot of power.” ",1004);
    insert_q("Naval Ravikant","“Wealth is assets that earn while you sleep” ",1005);
    insert_q("Ratan Tata","“Ups and downs in life are very important to keep us going because a straight line, even in an ECG. means we are not alive.” ",1006);
    insert_q("Ratan Tata","“Take the stones people throw at you. And use them to build a monument.” ",1007);
    insert_q("Ratan Tata","“Power and wealth are not two of my main stakes.” ",1008);
    insert_q("Ratan Tata","“None can destroy iron, but its rust can. Likewise, none can destroy a person, but his own mindset can.” ",1009);
    insert_q("Ratan Tata","“Don’t be serious, enjoy life as it comes.” ",1010);
    insert_q("Ratan Tata","“A person who is trying to copy others will be a successful person for a while, but he won’t be able to succeed further in life.”  ",1011);
    insert_q("Anonymous","“You may come to regret trying to manipulate me.”",1011);
    insert_q("Anonymous","Whatever you lose, you’ll find it again. But what you throw away you’ll never get back.",1012);
    display_q();
}

void display_fab_books()
{
    insert_book("Naval Ravikant","The Almanack Of Naval Ravikant","Self-Help",100);
    insert_book("Scott Allan","Do the Hard things First","Self-Help",101);
    insert_book("Simon Sinek","Start With Why","Business",103);
    insert_book("Dale Carnegie","How to Win Friends and Influence People","Business",104);
    insert_book("Darius Foroux","Think Straight","Inspirational",105);
    insert_book("Seth Godin","Poke the Box","Self-Growth",106);
    insert_book("Brian Tracy","Eat That Frog","Self-Help",107);
    insert_book("Malcolm GladWell","OUTLIERS","Inspirational",108);
    insert_book("Peter Thiel","Zero to One","Start-Ups",109);
    insert_book("William Thorndike","The Outsiders","Success",110);
    insert_book("Cal Newport","Deep Work","Self-Growth",111);
    insert_book("Robin Sharma","Who will Cry when you Die","Inspirational",112);
    insert_book("Joseph Nguyem","Don't Believe Everything You Think","Inspirtional",113);
    insert_book("Robert Greene","The 48 Laws of Power","Self-Growth",114);
    insert_book("Daniel Goleman","Social Intelligence","Emotional Intelligence",115);
    insert_book("Chris Bailey","Hyper Focus","Productivity",116);
    insert_book("Yuval Noah Harari","Sapiens: A Brief History of Humankind","Human Evolution",117);
    insert_book("Ichiro Kishmi","The Courage to be Disliked","Spirituality",118);
    insert_book("James Allen","As a Man Thinketh","How to Control Thoughts",119);
    insert_book("Jake Knapp","Make Time","Productivity",120);
    insert_book("Eric Berne","Games People Play","Pyschology",121);
    insert_book("Chin & Dan Heath","How to change things Switch when change is hard","Pyschology",122);
    insert_book("Susan Cam","Quiet","Pyschology",123);
    insert_book("David Googins","Can't Hurt Me","Inspirational",124);
    insert_book("Jay Shetty","Think Like A Monk","Self-Growth",125);
    display_book();

}

void operations()
{
    cout<<GREEN<<"---------------------------"<<RESET<<endl;
    cout<<"1. Bookmark URL"<<endl;
    cout<<"2. Bookmark Quote"<<endl;
    cout<<"3. Bookmark Book"<<endl;
    cout<<"4. Display All BookMarks"<<endl;
    cout<<"5. Show Pre-defined Urls"<<endl;
    cout<<"6. Show Pre-defined Quotes"<<endl;
    cout<<"7. 25 Books to read BEFORE YOU DIE"<<endl;
    cout<<"8. Exit"<<endl;
}


void bookmark_url_c()
{
    cout<<CYAN<<"---------------------------"<<RESET<<endl;
    cout<<"1.Insert Url"<<endl;
    cout<<"2.Display Url"<<endl;
    cout<<"3.Delete Url"<<endl;
    cout<<"4.Search Url"<<endl;
    cout<<"5.Exit"<<endl;
}


void bookmark_url_b()
{
    cout<<CYAN<<"---------------------------"<<RESET<<endl;
    cout<<"1.Insert Book"<<endl;
    cout<<"2.Display Book"<<endl;
    cout<<"3.Delete Book"<<endl;
    cout<<"4.Search Book"<<endl;
    cout<<"5.Exit"<<endl;
}

void bookmark_url_q()
{
    cout<<CYAN<<"---------------------------"<<RESET<<endl;
    cout<<"1.Insert Quote"<<endl;
    cout<<"2.Display Quote"<<endl;
    cout<<"3.Delete Quote"<<endl;
    cout<<"4.Search Quote"<<endl;
    cout<<"5.Exit"<<endl;
}


void bookmark_url()
{
    int choice,id;
    string is_present;
    char web_name[MAX_WEBSITE_NAME],y_url[MAX_URL_LEN];
    cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
    cout<<BLUE<<"\n\t\t\t\t\t   >>>  BOOKMARK URL SECTION"<<endl;
    cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
    while(1)
    {
        bookmark_url_c();
        cout<<">> Enter Choice:"<<endl;
        cin>>choice;
        if(choice == 5)
            break;
        switch(choice)
        {
            case 1:
                cout<<"Enter Website Identifier"<<endl;
                cin>>id;
                cin.ignore();
                cout<<"Enter Website Name"<<endl;
                cin.getline(web_name,MAX_WEBSITE_NAME);
                
                cout<<"Enter Website Url"<<endl;
                cin.getline (y_url, MAX_URL_LEN);

                insert_url(web_name,y_url,id);
            break;
            case 2:
                display_url();
            break;
            case 3:
                cout<<"Delete Operation"<<endl;
                cout<<"Enter Id"<<endl;
                cin>>id;
                delete_url(id);
            break;
            case 4:
                cout<<"Search Operation"<<endl;
                cout<<"Enter Id:"<<endl;
                cin>>id;
                is_present=search_url(id);
                if((is_present.compare("NO DATA FOUND")) == 0)
                    cout<<RED<<is_present<<RESET<<endl;
                else
                    cout<<BLUE<<is_present<<RESET<<endl;
            break;
            default:
                cout<<RED<<"\n\t\t\t\t\t\tWrong Input !! PLease choose valid option\n"<<RESET<<endl;
            break;
        }
    }   
}

void bookmark_book()
{
    int choice,id;
    string is_present;
    char author[MAX_AUTHOR_NAME],book[MAX_AUTHOR_NAME],category[40];
    cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
    cout<<BLUE<<"\n\t\t\t\t\t   >>>  BOOKMARK BOOK SECTION"<<endl;
    cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
    while(1)
    {
        bookmark_url_b();
        cout<<">> Enter Choice:"<<endl;
        cin>>choice;
        if(choice == 5)
            break;
        switch(choice)
        {
            case 1:
                cout<<"Enter Book Identifier"<<endl;
                cin>>id;
                cin.ignore();

                cout<<"Enter Book Author Name"<<endl;
                cin.getline(author,MAX_AUTHOR_NAME);
                cout<<"Enter Book Name"<<endl;
                cin.getline(book,MAX_AUTHOR_NAME);
                cout<<"Enter Book Name"<<endl;
                cin.getline(book,40);
                insert_book(author,book,category,id);
            break;
            case 2:
                display_book();
            break;
            case 3:
                cout<<"Delete Operation"<<endl;
                cout<<"Enter Id"<<endl;
                cin>>id;
                delete_book(id);
            break;
            case 4:
                cout<<"Search Operation"<<endl;
                cout<<"Enter Id:"<<endl;
                cin>>id;
                is_present=search_book(id);
                if((is_present.compare("NO DATA FOUND")) == 0)
                    cout<<RED<<is_present<<RESET<<endl;
                else
                    cout<<BLUE<<is_present<<RESET<<endl;
            break;
            default:
                cout<<RED<<"\n\t\t\t\t\t\tWrong Input !! PLease choose valid option\n"<<RESET<<endl;
            break;
        }
    }   
}

void bookmark_quote()
{
    int choice,id;
    char author[MAX_AUTHOR_NAME],quote[MAX_QUOTE_LEN];
    string is_present;
    cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
    cout<<BLUE<<"\n\t\t\t\t\t   >>>  BOOKMARK QUOTE SECTION"<<endl;
    cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
    while(1)
    {
        bookmark_url_q();
        cout<<">> Enter Choice:"<<endl;
        cin>>choice;
        if(choice == 5)
            break;
        switch(choice)
        {
            case 1:
                cout<<"Enter Quote Identifier:"<<endl;
                cin>>id;
                cin.ignore();
                cout<<"Enter Quote Author Name:"<<endl;
                cin.getline(author,MAX_AUTHOR_NAME);
                cout<<"Enter Quote:"<<endl;
                cin.getline(quote,MAX_QUOTE_LEN);
                insert_q(author,quote,id);
            break;
            case 2:
                display_q();
            break;
            case 3:
                cout<<"Delete Operation"<<endl;
                cout<<"Enter Id:"<<endl;
                cin>>id;
                delete_q(id);
            break;
            case 4:
                cout<<"Search Operation"<<endl;
                cout<<"Enter Id:"<<endl;
                cin>>id;
                is_present=search_q(id);
                if((is_present.compare("NO DATA FOUND")) == 0)
                    cout<<RED<<is_present<<RESET<<endl;
                else
                    cout<<BLUE<<is_present<<RESET;
            break;
            default:
                cout<<RED<<"\n\t\t\t\t\t\tWrong Input !! PLease choose valid option\n"<<RESET<<endl;
            break;
        }
    }   
}

