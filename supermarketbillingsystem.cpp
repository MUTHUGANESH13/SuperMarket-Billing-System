#include <bits/stdc++.h>

using namespace std;

class Bill {
private:
    string Item;
    int Rate, Quantity;
public:
    Bill() : Item(""), Rate(0), Quantity(0) {}

    void setItem(string item) {
        Item = item;
    }

    void setRate(int rate) {
        Rate = rate;
    }

    void setQuant(int quant) {
        Quantity = quant;
    }

    string getItem() {
        return Item;
    }

    int getRate() {
        return Rate;
    }

    int getQuant() {
        return Quantity;
    }
};

void addItem(vector<Bill>& billList) {
    bool close = false;
    while (!close) {
        int choice;
        cout << "\t1. Add Item" << endl;
        cout << "\t2. Back to Main Menu" << endl;
        cout << "\tEnter Choice: ";
        cin >> choice;

        if (choice == 1) {
            system("cls");
            string item;
            int rate, quant;

            cout << "\tEnter Item Name: ";
            cin >> item;

            Bill b;
            b.setItem(item);

            cout << "\tEnter Rate Of Item: ";
            cin >> rate;
            b.setRate(rate);

            cout << "\tEnter Quantity Of Item: ";
            cin >> quant;
            b.setQuant(quant);

            billList.push_back(b);  // Add the bill to the list

            cout << "\tItem Added Successfully" << endl;
        }
        else if (choice == 2) {
            system("cls");
            close = true;
            cout << "\tBack To Main Menu!\n\n" << endl;
        }
    }
}

void printBill(vector<Bill>& billList) {
    system("cls");
    int totalAmount = 0;

    cout << "\n\n";
    cout << "\t************* BILL *************" << endl;
    cout << "\t---------------------------------" << endl;
    cout << "\tItem Name" << setw(15) << "Rate" << setw(15) << "Quantity" << setw(10) << "Amount" << endl;
    cout << "\t---------------------------------------------------" << endl;

    for (auto& b : billList) {
        int amount = b.getRate() * b.getQuant();
        totalAmount += amount;

        cout << "\t" << left << setw(20) << b.getItem() 
             << setw(15)<< b.getRate() 
             << setw(10) << b.getQuant()
             << setw(15) << amount << endl;
    }

    cout << "\t---------------------------------------------------" << endl;
    cout << "\n\tTotal Amount: " << setw(40) << totalAmount << endl;
    cout << "\t*********************************" << endl;
    cout << "\tThank You For Shopping!\n\n" << endl;
}

int main() {
    vector<Bill> billList;

    bool exit = false;
    while (!exit) {
        system("cls");
        int val;

        cout << "\tWelcome To Super Market Billing System" << endl;
        cout << "\t**************************************" << endl;
        cout << "\t\t1. Add Item" << endl;
        cout << "\t\t2. Print Bill" << endl;
        cout << "\t\t3. Exit" << endl;
        cout << "\t\tEnter Choice: ";
        cin >> val;

        if (val == 1) {
            system("cls");
            addItem(billList);
        }
        else if (val == 2) {
            printBill(billList);
        }
        else if (val == 3) {
            system("cls");
            exit = true;
            cout << "\tGood Luck!" << endl;
        }
    }
}
