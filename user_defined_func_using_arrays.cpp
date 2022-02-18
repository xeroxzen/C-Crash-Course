#include <iostream>
using namespace std;

struct CustomerDetails{
    string customerName;
    double invoiceAmount;
    int invoiceNumber;
};

int main(){
    //Get customer details from the user
    CustomerDetails customer1, customer2;

    cout << "Enter customer name: ";
    cin >> customer1.customerName;
    cout << "Enter invoice amount: ";
    cin >> customer1.invoiceAmount;
    cout << "Enter invoice number: ";
    cin >> customer1.invoiceNumber;
    cout << "********************************************************" << endl;
    cout << "Enter customer name: ";
    cin >> customer2.customerName;
    cout << "Enter invoice amount: ";
    cin >> customer2.invoiceAmount;
    cout << "Enter invoice number: ";
    cin >> customer2.invoiceNumber;
    cout << "********************************************************" << endl;
    
//    cout << "Enter customer name: ";
//    cin >> customer3.customerName;
//    cout << "Enter invoice amount: ";
//    cin >> customer3.invoiceAmount;
//    cout << "Enter invoice number: ";
//    cin >> customer3.invoiceNumber;
//    cout << "********************************************************" << endl;
//    
//    cout << "Enter customer name: ";
//    cin >> customer4.customerName;
//    cout << "Enter invoice amount: ";
//    cin >> customer4.invoiceAmount;
//    cout << "Enter invoice number: ";
//    cin >> customer4.invoiceNumber;
//    cout << "********************************************************" << endl;
//    
//    cout << "Enter customer name: ";
//    cin >> customer5.customerName;
//    cout << "Enter invoice amount: ";
//    cin >> customer5.invoiceAmount;
//    cout << "Enter invoice number: ";
//    cin >> customer5.invoiceNumber;
//    cout << "********************************************************" << endl;

    //Save the invoice amounts in an array
    double invoiceAmounts[] = {customer1.invoiceAmount, customer2.invoiceAmount};

    //find the maximum invoice amount and print the customer name and invoice number
    double maxInvoiceAmount = invoiceAmounts[0];
    for(int i = 0; i < 2; i++){
        if(invoiceAmounts[i] > maxInvoiceAmount){
            maxInvoiceAmount = invoiceAmounts[i];
//            cout << "Invoice Amount: " << customer1.customerName << endl;
            cout << "Maximum Invoice Amount: " << maxInvoiceAmount << endl;
        }
    }
//    for(int i = 0; i < 2; i++){
//        if(invoiceAmounts[i] == maxInvoiceAmount){
//            cout << "Customer name: " << customer1.customerName << endl;
//            cout << "Invoice Amount: " << customer1.invoiceAmount << endl;
//        }
//    }
    return 0;

}