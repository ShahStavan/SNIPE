#include<bits/stdc++.h>
#include "functions.h"
using namespace std;

int main()
{
    int opt;
    cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
    cout<<GREEN<<BOLD<<setw(5)<<"\t\t\t\t\t\t\t\tSNIPE🚀🔖"<<RESET<<endl;
    cout<<"\n\t\t\t\t\t\t   Welcome to Bookmark Manager🙏"<<endl;
    cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
    while(1)
    {
        
        operations();
        cout<<">> Enter Choice:"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                bookmark_url();
            break;
            case 2:
                bookmark_quote();
            break;
            case 3:
                bookmark_book();
            break;
            case 4:
                cout<<CYAN<<"---------------------------"<<RESET<<endl;
                cout<<"WEBSITE BOOKMARK SECTION"<<endl;
                display_url();
                cout<<CYAN<<"---------------------------"<<RESET<<endl;
                cout<<"QUOTE BOOKMARK SECTION"<<endl;
                display_q();
                cout<<CYAN<<"---------------------------"<<RESET<<endl;
                cout<<"BOOK BOOKMARK SECTION"<<endl;
                display_book();
            break;
            case 5:
                display_imp_urls();
            break;
            case 6:
                inspirational_quotes();
            break;
            case 7:
                display_fab_books();
            break;
            case 8:
                cout<<BOLD<<"THANK YOU FOR USING OUR SERVICE🙏"<<RESET<<endl;
                cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
                cout<<BOLD<<"\n\t\t\t\t\t\t   Developed By: Shah Stavan PurveshBhai"<<RESET<<endl;
                cout<<BOLD<<"\n\t\t\t\t\t\t   Enrollment Number: 22BCE539"<<RESET<<endl;
                cout<<BOLD<<"\n\t\t\t\t\t\t   Guided By: Dr. Preeti Kathiria"<<RESET<<endl;
                cout<<CYAN<<"\n\t\t\t\t\t   ----------------------------------------------\n"<<RESET<<endl;
            break;
            default:
                cout<<RED<<"\n\t\t\t\t\t\tWrong Input !! PLease choose valid option\n"<<RESET<<endl;
            break;
        }
        if(opt==8)
        {   
            break;
        }
    }
    return 0;
}