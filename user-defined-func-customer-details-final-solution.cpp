//include necessary header files
// Language: cpp
#include <iostream>
using namespace std;

struct CustomerDetails{
    string customerName;
    double invoiceAmount;
    int invoiceNumber;
};

void getMaxInvoiceAmount(){
    //Get customer details from the user
    CustomerDetails customer1, customer2 ,customer3, customer4, customer5, customer6;

    //Hard-coded customer details
    customer1.customerName = "Michael";
    customer1.invoiceAmount = 100.00;
    customer1.invoiceNumber = 1;
    customer2.customerName = "Naledi";
    customer2.invoiceAmount = 200.00;
    customer2.invoiceNumber = 2;
    customer3.customerName = "Tsitsi";
    customer3.invoiceAmount = 300.00;
    customer3.invoiceNumber = 3;
    customer6.customerName = "Nokuzola";
    customer6.invoiceAmount = 600.00;
    customer6.invoiceNumber = 6;
    customer4.customerName = "Nothando";
    customer4.invoiceAmount = 400.00;
    customer4.invoiceNumber = 4;
    customer5.customerName = "Andile";
    customer5.invoiceAmount = 500.00;
    customer5.invoiceNumber = 5;
    
    //Declare an array of 5 customer details
    CustomerDetails customerDetails[6];

    //Assign customer details to the array
    customerDetails[0] = customer1;
    customerDetails[1] = customer2;
    customerDetails[2] = customer3;
    customerDetails[3] = customer4;
    customerDetails[4] = customer5;
    customerDetails[5] = customer6;

    //Print the customer details using a for loop

    for(int i = 0; i < 6; i++){
        cout << "Customer Name: " << customerDetails[i].customerName << endl;
        cout << "Invoice Amount: " << customerDetails[i].invoiceAmount << endl;
        cout << "Invoice Number: " << customerDetails[i].invoiceNumber << endl;
        cout << "*******************************" << endl;
    }


    //Declare an array of 5 invoice amounts
    double invoiceAmounts[6];

    //Assign invoice amounts to the array
    invoiceAmounts[0] = customerDetails[0].invoiceAmount;
    invoiceAmounts[1] = customerDetails[1].invoiceAmount;
    invoiceAmounts[2] = customerDetails[2].invoiceAmount;
    invoiceAmounts[3] = customerDetails[3].invoiceAmount;
    invoiceAmounts[4] = customerDetails[4].invoiceAmount;
    invoiceAmounts[5] = customerDetails[5].invoiceAmount;

    //Declare a variable to store the maximum invoice amount
    double maxInvoiceAmount = invoiceAmounts[0];

    //Find the maximum invoice amount and print the customer name and invoice number
    for(int i = 0; i < 6; i++){
        if(invoiceAmounts[i] > maxInvoiceAmount){
            maxInvoiceAmount = invoiceAmounts[i];
            // cout << "Invoice Amount: " << maxInvoiceAmount << endl;
        }
    }

    //Print the customer name and invoice number of the customer with maximum invoice amount
    for(int i = 0; i < 6; i++){
        if(invoiceAmounts[i] == maxInvoiceAmount){
        	cout <<"Customer with the maximum invoice amount." << endl;
            cout << "Customer Name: " << customerDetails[i].customerName << endl;
            cout << "Invoice Amount: " << customerDetails[i].invoiceAmount << endl;
            cout << "Invoice Number: " << customerDetails[i].invoiceNumber << endl;
        }
    }


}

int main(){

    getMaxInvoiceAmount();
    return 0;
}