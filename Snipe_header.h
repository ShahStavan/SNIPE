#include<bits/stdc++.h>
using namespace std;

// Font Color
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define WHITE "\033[1;37m"
#define RESET "\033[0m"
// Font Style
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"

// BookMark Url
struct Url{
    string url,name;
    int id;
    Url *left;
    Url *right;

    Url(string name,string url,int id)
    {
        this->url = url;
        this->name = name;
        this->id = id;
        
        left = NULL;
        right = NULL;
    }
};
struct Url *head = NULL;


void insert_url(string name, string url, int id)
{
    Url* temp = new Url(name, url, id);
    if(head == NULL){
        head = temp;
    }
    else{
        temp->right = head;
        head->left = temp;
        head = temp;
    }
};


void display_url()
{
    Url* temp = head;
    if(temp == NULL)
    {
        cout<<RED<<"NO DATA FOUND"<<RESET<<endl;
    }
    else
    {
        while(temp !=NULL)
        {
            cout<<CYAN<<"---------------------------"<<RESET<<endl;
            cout<<"WEBSITE ID:"<<temp->id<<endl;
            cout<<"NAME: "<<temp->name<<endl;
            cout<<"URL: "<<BOLD<<temp->url<<RESET<<endl;
            temp = temp->right;
        }
    }
};


void delete_url(int id){
    //save reference to first link
    struct Url *tempLink = head;
    if(tempLink == NULL)
    {
        cout<<RED<<"NO DATA FOUND"<<RESET<<endl;
    }
    else
    {
    
        while(tempLink->id != id && tempLink->right != NULL) {
            tempLink = tempLink->right;
        }

        if(tempLink->id == id) {
            if(tempLink->left != NULL)
                tempLink->left->right = tempLink->right;
            else
                head = tempLink->right;

            if(tempLink->right != NULL)
                tempLink->right->left = tempLink->right;
        }
        free(tempLink);
    }
};


string search_url(int id)
{
    Url *temp = head;
    if(head == NULL)
        return "NO DATA FOUND";
    else{
        //navigate through list
        while(temp->id != id) {
            
            //if it is last node
            if(temp->right == NULL) {
                return "NO DATA FOUND";
            } else {
                //go to next link
                temp = temp->right;
            }
        }
        //if data found, return the current Link
        return "URL:" + temp->url;
    }
}


// BookMark Book
struct Book{
    string author,book,category;
    int id;
    Book *left;
    Book *right;

    Book(string author,string book, string c,int id)
    {
        this->author = author;
        this->book = book;
        this->category = c;
        this->id = id;
        left = NULL;
        right = NULL;
    }
};
struct Book *head_book = NULL;


void insert_book(string author, string quote, string c, int id)
{
    Book* temp = new Book(author, quote,c, id);
    if(head_book == NULL){
        head_book = temp;
    }
    else{
        temp->right = head_book;
        head_book->left = temp;
        head_book = temp;
    }
};


void display_book()
{
    Book* temp = head_book;
    if(temp == NULL)
    {
        cout<<RED<<"NO DATA FOUND"<<RESET<<endl;
    }
    else
    {
        while(temp !=NULL)
        {
            cout<<CYAN<<"---------------------------"<<RESET<<endl;
            cout<<"BOOK ID:"<<temp->id<<endl;
            cout<<"AUTHOR: "<<temp->author<<endl;
            cout<<"CATEGORY: "<<temp->category<<endl;
            cout<<"BOOK: "<<BOLD<<temp->book<<RESET<<endl;
            temp = temp->right;
        }
    }
};


void delete_book(int id){
    //save reference to first link
    struct Book *tempLink = head_book;
    if(tempLink == NULL)
    {
        cout<<RED<<"NO DATA FOUND"<<RESET<<endl;
    }
    else
    {
    

        while(tempLink->id != id && tempLink->right != NULL) {
            tempLink = tempLink->right;
        }

        if(tempLink->id == id) {
            if(tempLink->left != NULL)
                tempLink->left->right = tempLink->right;
            else
                head_book = tempLink->right;

            if(tempLink->right != NULL)
                tempLink->right->left = tempLink->right;
        }
        free(tempLink);
    }
};


string search_book(int id)
{
    Book *temp = head_book;
    if(head_book == NULL)
        return "NO DATA FOUND";
    else{
        //navigate through list
        while(temp->id != id) {
            
            //if it is last node
            if(temp->right == NULL) {
                return "NO DATA FOUND";
            } else {
                //go to next link
                temp = temp->right;
            }
        }
        //if data found, return the current Link
        return "BOOK:" + temp->book;
    }
}

// BookMark Quote
struct Quote{
    string author,quote;
    int id;
    Quote *left;
    Quote *right;

    Quote(string author,string quote,int id)
    {
        this->author = author;
        this->quote = quote;
        this->id = id;
        left = NULL;
        right = NULL;
    }
};
struct Quote *head_url = NULL;


void insert_q(string author, string quote, int id)
{
    Quote* temp = new Quote(author, quote, id);
    if(head_url == NULL){
        head_url = temp;
    }
    else{
        temp->right = head_url;
        head_url->left = temp;
        head_url = temp;
    }
};


void display_q()
{

    Quote* temp = head_url;
    if(temp == NULL)
    {
        cout<<RED<<"NO DATA FOUND"<<RESET<<endl;
    }
    else
    {
        while(temp !=NULL)
        {
            cout<<CYAN<<"---------------------------"<<RESET<<endl;
            cout<<"QUOTE ID:"<<temp->id<<endl;
            cout<<"AUTHOR: "<<temp->author<<endl;
            cout<<"QUOTE: "<<BOLD<<temp->quote<<RESET<<endl;
            temp = temp->right;
        }
    }
};


void delete_q(int id){
    //save reference to first link
    struct Quote *tempLink = head_url;
    if(tempLink == NULL)
    {
        cout<<RED<<"NO DATA FOUND"<<RESET<<endl;
    }
    else
    {
    

        while(tempLink->id != id && tempLink->right != NULL) {
            tempLink = tempLink->right;
        }

        if(tempLink->id == id) {
            if(tempLink->left != NULL)
                tempLink->left->right = tempLink->right;
            else
                head_url = tempLink->right;

            if(tempLink->right != NULL)
                tempLink->right->left = tempLink->right;
        }
        free(tempLink);
    }
};


string search_q(int id)
{
    Quote *temp = head_url;
    if(head_url == NULL)
        return "NO DATA FOUND";
    else{
        //navigate through list
        while(temp->id != id) {
            
            //if it is last node
            if(temp->right == NULL) {
                return "NO DATA FOUND";
            } else {
                //go to next link
                temp = temp->right;
            }
        }
        //if data found, return the current Link
        return "QUOTE:" + temp->quote+"\n";
    }
}