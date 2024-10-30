#include <iostream>
#include <string>
using namespace std;
struct product
{
    string name;
    double quantity, price, id;
};
struct employee
{
    string firstname,lastname;
    int number, id;
};
product* products=new product[100];
employee* employees=new employee[100];
int numb=0;
int emp=0;
int entries()
{
    bool main = true;
    while (main == true)
    {
        string option;
        cin.ignore();
        cout << "\nProduct Number : " << numb + 1;
        cout << "\nEnter product Name   = ";
        getline(cin, products[numb].name);
        cout << "\nEnter Product ID  = ";
        cin>> products[numb].id;
        cout << "\nEnter Product quantity   = ";
        cin>> products[numb].quantity;
        cout << "\nEnter price of each Product  = ";
        cin>> products[numb].price;
        numb++;
        while (true)
        {
            cout << "\nDo you want to add another entry (y/n) : ";
            cin >> option;
            if (option == "n" || option == "N")
            {
                main = false;
                break;
            }
            else if (option == "y" || option == "Y")
            {
                system("cls");
                break;
            }
            else
            {
                cout << "\n Wrong input!";
            }
        }
    }
    system("cls");
}
int employee()
{
    bool main = true;
    while (main == true)
    {
        string option;
        cin.ignore();
        cout << "\nEmployee : " << emp + 1;
        cout << "\nEnter First Name of employee = ";
        getline(cin, employees[emp].firstname);
        cout << "\nEnter Last Name of employee = ";
        getline(cin, employees[emp].lastname);
        cout << "\nEnter ID of employee = ";
        cin >> employees[emp].id;
        cout << "\nEnter Phone number of employee = ";
        cin >> employees[emp].number;
        emp++;
        while (true)
        {
            cout << "\nDo you want to add another entry (y/n) : ";
            cin >> option;
            if (option == "n" || option == "N")
            {
                main = false;
                break;
            }
            else if (option == "y" || option == "Y")
            {
                system("cls");
                break;
            }
            else
            {
                cout << "\n Wrong input!";
            }
        }
    }
    system("cls");
}
int exit()
{
	 delete[] products;
    delete[] employees;
}
int main()
{
    int ch;
    while (1)
    {
        cout << "\n \t\t\t=========================\n";
        cout << "\n\t\t\tWELCOME TO MY SHOP  \n";
        cout << "\n \t\t\t=========================\n\n";
        cout << "\n \t\t\t* * * * * * * * * * * * ";
        cout << "\n\t\t\t  1. Add Product Entries.";
        cout << "\n\t\t\t  2. Add Employee Entries.";
        cout << "\n\t\t\t  3. Exit";
        cout << "\n\t\t\t* * * * * * * * * * * *\n";
        cout << "\n\t\t\t Enter Your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            entries();
            break;
        case 2:
            employee();
            break;
        case 3:
		    exit();
			return 0;
        default:
            cout << "\n\t\t\tYou have Entered an valid choice\n";
            break;
        }
    }
      return 0;
}
