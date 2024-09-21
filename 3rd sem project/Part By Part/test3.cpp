#include <bits/stdc++.h>
#include <conio.h>  // for
#include <unistd.h> // for sleep
#include <cstdlib>
#include<windows.h>
using namespace std;

/// colour code
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN "\x1B[36m"
#define Bright_CYAN "\x1B[96m"
#define Bright_Magenta "\x1B[95m"

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct node
{
    string id;
    string name;
    string dept;
    long long salary;
    node *next;
};

void login();
void admin_panel();
void registerUser();
void intro();
void insert_employee();
void searching_id();
void Control_Menu();
void edit();
void delete_employee();
void display();
void salarySlip();

node *Head = NULL;

vector<pair<string, string>> users;

void intro()
{
    cout << CYAN "\t\t\t\t\t\t\t" << endl;
    cout << "\n\n\n\n\n\n\n\n\n                                             #################################" << endl;
    cout << "                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #   Employee Management System  #" << endl;
    cout << "                                             #                               #" << endl;
    cout << "                                             #################################" RESET << endl;
    cout << Bright_Magenta "\n\n\n\n\                                                Press Enter  to continue..." RESET;
    getch();
}

void admin_panel()
{
checkpoint:
    system("cls");
    cout << MAGENTA "\t\t\t\t\t\t\t" << endl;
    cout << "                                             #################################" << endl;
    cout << "                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #          ADMIN PANEL          #" << endl;
    cout << "                                             #                               #" << endl;
    cout << "                                             #################################" RESET << endl;
    int choice;
    cout <<BLUE"                                             #################################" << endl;
    cout << "                                             #                               #\n";
    cout << "                                             #                               #\n";
    cout << "                                             #                               #\n";
    cout <<  "\n\t\t\t\t\t\t\t1. Register\n"
         << endl;
    cout << "\t\t\t\t\t\t\t2. Login\n"
         << endl;
    cout << "\t\t\t\t\t\t\t3. Exit\n\n\n";
        cout << "                                             #                               #\n";
        cout << "                                             #                               #\n";
        cout << "                                             #                               #\n";
        cout << "                                             #################################\n";
        cout << "\n\t\t\t\t\t           Enter your choice: "RESET;
    cin >> choice;
    switch (choice)
    {
    case 1:
        registerUser();
        break;
    case 2:
        login();
        break;
    case 3:
        return;
    default:
        cout << RED "\n\n\t\t\t\t\t    Invalid choice. Please try again." RESET << endl;
        sleep(1);
        goto checkpoint;
        getch();
    }
}

void registerUser()
{
    system("cls");
    cout << MAGENTA "\t\t\t\t\t\t\t" << endl;
    cout << "                                             #################################" << endl;
    cout << "                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #          ADMIN PANEL          #" << endl;
    cout << "                                             #                               #" << endl;
    cout << "                                             #################################\n\n\n" RESET << endl;
    string name, password;
    gotoxy(45, 7);
    cout << BLUE "#"RESET;
    gotoxy(77, 7);
    cout << BLUE "#"RESET;
    gotoxy(46, 7);
    cout << BLUE "################################"RESET;
    gotoxy(45, 8);
    cout << BLUE "#"RESET;
    gotoxy(77, 8);
    cout << BLUE "#"RESET;
    gotoxy(45, 9);
    cout << BLUE "#"RESET;
    gotoxy(77, 9);
    cout << BLUE "#"RESET;
    gotoxy(45, 10);
    cout << BLUE "#"RESET;
    gotoxy(77, 10);
    cout << BLUE "#"RESET;
    cout<<endl;
    gotoxy(45, 11);
    cout << BLUE "#"RESET;
    gotoxy(77, 11);
    cout << BLUE "#"RESET;
    gotoxy(45, 12);
    cout << BLUE "#"RESET;
    gotoxy(77, 12);
    cout << BLUE "#"RESET;
    gotoxy(45, 13);
    cout << BLUE "#"RESET;
    gotoxy(77, 13);
    cout << BLUE "#"RESET;
    gotoxy(45, 14);
    cout << BLUE "#"RESET;
    gotoxy(77, 14);
    cout << BLUE "#"RESET;
    gotoxy(45, 15);
    cout << BLUE "#"RESET;
    gotoxy(77, 15);
    cout << BLUE "#"RESET;
    gotoxy(45, 16);
    cout << BLUE "#"RESET;
    gotoxy(77, 16);
    cout << BLUE "#"RESET;
    gotoxy(45, 17);
    cout << BLUE "#################################"RESET;
    gotoxy(48, 10);
    cout << BLUE "Enter a username: " RESET;
    cin >> name;
    gotoxy(48, 13);
    cout << BLUE "Enter a password:  "RESET;
    cin >> password;
    users.push_back({name, password});
    gotoxy(50, 20);
    cout << GREEN "Registration successful!" RESET << endl;
    sleep(2);
    admin_panel();
}


void login()
{
    system("cls");
    cout << MAGENTA"\t\t\t\t\t\t\t" << endl;
    cout << "                                             #################################"<<endl;
    cout<<"                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #          ADMIN PANEL          #" << endl;
    cout<<"                                             #                               #"<<endl;
    cout << "                                             #################################\n\n\n"RESET << endl;
    string name, password;
    gotoxy(45, 7);
    cout << BLUE "#"RESET;
    gotoxy(77, 7);
    cout << BLUE "#"RESET;
    gotoxy(46, 7);
    cout << BLUE "################################"RESET;
    gotoxy(45, 8);
    cout << BLUE "#"RESET;
    gotoxy(77, 8);
    cout << BLUE "#"RESET;
    gotoxy(45, 9);
    cout << BLUE "#"RESET;
    gotoxy(77, 9);
    cout << BLUE "#"RESET;
    gotoxy(45, 10);
    cout << BLUE "#"RESET;
    gotoxy(77, 10);
    cout << BLUE "#"RESET;
    cout<<endl;
    gotoxy(45, 11);
    cout << BLUE "#"RESET;
    gotoxy(77, 11);
    cout << BLUE "#"RESET;
    gotoxy(45, 12);
    cout << BLUE "#"RESET;
    gotoxy(77, 12);
    cout << BLUE "#"RESET;
    gotoxy(45, 13);
    cout << BLUE "#"RESET;
    gotoxy(77, 13);
    cout << BLUE "#"RESET;
    gotoxy(45, 14);
    cout << BLUE "#"RESET;
    gotoxy(77, 14);
    cout << BLUE "#"RESET;
    gotoxy(45, 15);
    cout << BLUE "#"RESET;
    gotoxy(77, 15);
    cout << BLUE "#"RESET;
    gotoxy(45, 16);
    cout << BLUE "#"RESET;
    gotoxy(77, 16);
    cout << BLUE "#"RESET;
    gotoxy(45, 17);
    cout << BLUE "#################################"RESET;
    gotoxy(48, 10);
    cout << BLUE "Enter a username: " RESET;
    cin >> name;
    gotoxy(48, 13);
    cout << BLUE "Enter a password:  "RESET;
    cin >> password;
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first == name && users[i].second == password)
        {
            gotoxy(49, 19);
            cout << GREEN"Login successful......"RESET << endl;
            sleep(2);
            Control_Menu();
            return;
        }
    }
    gotoxy(46, 19);
    cout << RED"User name & password is incorrect.."RESET << endl;
    sleep(2);
    admin_panel();
}

void Control_Menu()
{
    node *Head = NULL;
    int choice;
    while (true)
    {
        system("cls");
        cout << YELLOW"\t\t\t\t\t\t\t" << endl;
    cout << "                                             ##################################"<<endl;
    cout<<"                                             #                               ##";
    cout << "\t\t\t\t\t\n                                             #        CONTROL MENU BAR       ##" << endl;
    cout<<"                                             #                               ##"<<endl;
    cout << "                                             ##################################"RESET << endl;
    cout <<GREEN"                                             ##################################" << endl;
    cout << "                                             #                                #\n";
    cout << "                                             #                                #\n";
    cout << "                                             #                                #\n";

        cout << "\t\t\t\t\t     # 1. Add Employee information    #" << endl;
        cout << "\t\t\t\t\t     # 2. Update Employee information #" << endl;
        cout << "\t\t\t\t\t     # 3. Delete Employee information #" << endl;
        cout << "\t\t\t\t\t     # 4. Search Employee             #" << endl;
        cout << "\t\t\t\t\t     # 5. Display All Employees       #" << endl;
        cout << "\t\t\t\t\t     # 6. Employee Payment Slip       #" << endl;
        cout << "\t\t\t\t\t     # 7. Admin Panel                 #" << endl;
        cout << "\t\t\t\t\t     # 8. Exit                        #" << endl;
        cout << "                                             #                                #\n";
        cout << "                                             #                                #\n";
        cout << "                                             #                                #\n";
        cout << "                                             #                                #\n";
        cout << "                                             ##################################\n";
        cout << "\n\n\t\t\t\t\t           Enter your choice: "RESET;
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert_employee();
            break;
        case 2:
            edit();
            break;
        case 3:
            delete_employee();
            break;
        case 4:
            searching_id();
            break;
        case 5:
            display();
            break;
        case 6:
            salarySlip();
            break;
        case 7:
            admin_panel();
        case 8:
            exit(0);
            break;
        default:
            cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }
}

void Insert_employee_information_print(){
        cout << YELLOW"\t\t\t\t\t\t\t" << endl;
    cout << "                                             ##################################"<<endl;
    cout<<"                                             #                                #";
    cout << "\t\t\t\t\t\n                                             #   INSERT EMPLOYEE INFORMATION  #" << endl;
    cout<<"                                             #                                #"<<endl;
    cout << "                                             ##################################\n"RESET<<endl;
}

void Modify_employee_record_print(){
    cout << YELLOW"\t\t\t\t\t\t\t" << endl;
    cout << "                                             ##################################"<<endl;
    cout<<"                                             #                                #";
    cout << "\t\t\t\t\t\n                                             #     MODIFY EMPLOYEE RECORD     #" << endl;
    cout<<"                                             #                                #"<<endl;
    cout << "                                             ##################################"RESET<<endl;
    cout << "  " << endl;
}

void Delete_employee_record_print(){
cout << YELLOW"\t\t\t\t\t\t\t" << endl;
    cout << "                                             ##################################"<<endl;
    cout<<"                                             #                                #";
    cout << "\t\t\t\t\t\n                                             #     DELETE EMPLOYEE RECORD     #" << endl;
    cout<<"                                             #                                #"<<endl;
    cout << "                                             ##################################\n"RESET<<endl;
    }

void Display_employee_record_print(){
cout << YELLOW"\t\t\t\t\t\t\t" << endl;
    cout << "                                             ##################################"<<endl;
    cout<<"                                             #                                #";
    cout << "\t\t\t\t\t\n                                             #     DISPLAY EMPLOYEE RECORD    #" << endl;
    cout<<"                                             #                                #"<<endl;
    cout << "                                             ##################################\n"RESET<<endl;
}

void Employee_searching_print(){
cout << YELLOW"\t\t\t\t\t\t\t" << endl;
    cout << "                                             ##################################"<<endl;
    cout<<"                                             #                                #";
    cout << "\t\t\t\t\t\n                                             #      EMPLOYEE SEARCHING...     #" << endl;
    cout<<"                                             #                                #"<<endl;
    cout << "                                             ##################################\n"RESET<<endl;
}

void Salary_slip_print(){
cout << YELLOW"\t\t\t\t\t\t\t" << endl;
    cout << "                                             ##################################"<<endl;
    cout<<"                                             #                                #";
    cout << "\t\t\t\t\t\n                                             #      SALARY SLIP GENARATOR     #" << endl;
    cout<<"                                             #                                #"<<endl;
    cout << "                                             ##################################"RESET<<endl;
}

bool duplicate_id(string id) {
    node* ptr = Head;
    while (ptr != NULL) {
        if (ptr -> id == id) {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}

void insert_employee()
{

    system("cls");
    node *new_node = new node;
    Insert_employee_information_print();
    cout << Bright_CYAN"\t\t\t\t\t         Enter Employee ID: ";
    cin >> new_node->id;cout<<endl;
    if (duplicate_id(new_node->id)) {
        cout << "\t\t\t\t\t         Duplicate ID found. Please enter a unique Employee ID.\n";sleep(1);
        delete new_node; // Delete the newly created node to avoid memory leak
        insert_employee(); //  again to re-enter details
        return;
    }
    cout << "\t\t\t\t\t         Enter Employee Name: ";
    cin >> new_node->name;cout<<endl;
    cout << "\t\t\t\t\t         Enter Employee Department: ";
    cin >> new_node->dept;cout<<endl;
    cout << "\t\t\t\t\t         Enter Employee Salary: ";
    cin >> new_node->salary;cout<<" \n\n\n"RESET;
    new_node->next = NULL;

    if (Head == NULL)
    {
        Head = new_node;
    }
    else
    {
        node *ptr = Head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    cout << GREEN"\t\t\t\t\t     Employee Record inserted successfully\n\n\n\n"RESET << endl;
    cout << RED"\t\t\t\t\t     Press any key to go to control menu"RESET << endl;
    getch();
}
void edit()
{
    checkpoint:
    system("cls");
    Modify_employee_record_print();
    int found = 0;
    string emp_id;

    if (Head == NULL)
    {
        cout << RED"\n\n\nt\t\t\t\t                 Employee List is Empty "RESET << endl;sleep(2);
    }
    else
    {
        cout << Bright_CYAN"\t\t\t\t\t         Enter Employee ID: ";
        cin >> emp_id;cout<<endl;
        node *ptr = Head;
        while (ptr != NULL)
        {
            if (emp_id == ptr->id)
            {
                cout << "\t\t\t\t\t         Employee Name: ";
                cin >> ptr->name;
                cout << endl;
                cout << "\t\t\t\t\t         Employee Department: ";
                cin >> ptr->dept;
                cout << endl;
                cout << "\t\t\t\t\t         Employee Salary: ";
                cin >> ptr->salary;
                cout << endl;
                cout << GREEN"\n\t\t\t\t\t    Employee Record Modified Successfully!"RESET;sleep(2);
                found++;
            }
            ptr = ptr->next;
        }
        if (found == 0)
        {
            cout << RED"\n\n\t\t\t\t\t Employee ID Not Found, please search again"RESET;sleep(2); goto checkpoint;
        }
    }
}

void delete_employee()
{
    system("cls");
    int found = 0;
    string emp_id;
    if (Head == NULL)
    {
        cout << " Linked List Is Empty " << endl;
    }
    else
    {
        cout << " Employee ID For Deletation :";
        cin >> emp_id;
        if (emp_id == Head->id)
        {
            node *ptr = Head;
            Head = Head->next;
            delete ptr;
            cout << endl;
            cout << " Employee Record Deleted ";
        }
        else
        {
            node *ptr = Head;
            node *prev = NULL;
            while (ptr != NULL)
            {
                if (emp_id == ptr->id)
                {
                    prev->next = ptr->next;
                    delete ptr;
                    cout << endl;
                    cout << " Employee Record Deleted ";
                    found++;
                    break;
                }
                prev = ptr;
                ptr = ptr->next;
            }
            if (found == 0)
            {
                cout << " Employee ID Not Found ";
            }
        }
    }
}

void display()
{
    int exit;
    system("cls");
    if (Head == NULL)
    {
        cout << " Linked List is Empty " << endl;
    }
    else
    {
        node *ptr = Head;
        while (ptr != NULL)
        {
            cout << " Employee ID: " << ptr->id << endl;
            cout << " Employee Name: " << ptr->name << endl;
            cout << " Employee Department: " << ptr->dept << endl;
            cout << " Employee Salary: " << ptr->salary << endl;
            cout << endl;
            ptr = ptr->next;
        }
    }
    cout << endl;
    cout << "Press any number go to menu bar" << endl;
    cin >> exit;
}




void searching_id()
{
    system("cls");
    bool fnd = false;
    string id;
    Employee_searching_print();
    if (Head == NULL)
    {
        cout << "Employee List is Empty!" << endl;
    }
    else
    {
        cout << "to search : " << endl;
        cin >> id;
        node *ptr = Head;
        while (ptr != NULL)
        {
            if (id == ptr->id)
            {
                system("cls");
                cout << "search employee founds" << endl;
                cout << " id : " << ptr->id << endl;
                cout << " name : " << ptr->name << endl;
                cout << " department : " << ptr->dept << endl;
                cout << " salary : " << ptr->salary << endl;
                fnd = true;
            }
            ptr = ptr->next;
        }
        if (!fnd)
        {
            cout << "employee not found";
        }
    }
    getch();
}

void salarySlip() {
    system("cls");
    int found = 0;
    string emp_id;
    Salary_slip_print();
    if (Head == NULL) {
        cout << endl;
        cout << endl;
        cout << "**EMPLOYEE LIST IS EMPTY!!**";
    }
    else {
        cout << endl;
        cout << GREEN"\t\t\t\t\t       Employee Id for Slip: ";
        cin >> emp_id;cout<<" "RESET;
        node* ptr = Head;
        while (ptr != NULL) {
            if (emp_id == ptr->id) {
                system("cls");
                cout << endl;
                cout << YELLOW"\t\t\t    *****************************************************************\n";
                cout << "\t\t\t    *                                                               *\n";
                cout << "\t\t\t    *                      Employee Salary Slip                     *";
                cout << endl;
                cout << "\t\t\t    *                                                               *";
                cout << endl;
                cout << "\t\t\t    *****************************************************************"RESET;
                cout << endl;
                cout << endl;
                cout << MAGENTA"\t******************************************************************************************************";
                cout << "\t                 Employee Id: " << ptr->id;cout<<"                                                                    ";
                cout << endl;
                cout << "\t*                                                                                                    *";
                cout << endl;
                cout << "\t                      Name: " << ptr->name;cout<<"                                                                      ";
                cout << endl;
                cout << "\t*                                                                                                    *";
                cout << endl;
                cout << "\t                      Department: " << ptr->dept;cout<<"                                                                ";
                cout << endl;
                cout << "\t*                                                                                                    *";
                cout << endl;
                cout << "\t                                                                                                    ";
                cout<<endl;
                cout << "\t*                                                                                                    *";
                cout << endl;
                cout << "\t                                   Salary:  " << ptr->salary;cout<<" Taka only ";cout<<"                                                         ";
                cout << "\t******************************************************************************************************\n"RESET;
                found++;
            }
            ptr = ptr->next;
        }
        if (found == 0) {
            cout << endl;
            cout << endl;
            cout << BLUE"\n\n\n                                                 **Employee Id Not found**"RESET;
        }
    }
    cout<<RED"\n\n\n                                                   Press Enter to Print Out"RESET<<endl;
    getch();
}





int main()
{
    intro();
    admin_panel();
    return 0;
}