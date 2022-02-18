#include <iostream>
using namespace std;


struct CustomerDetails{
    string customerName;
    double invoiceAmount;
    int invoiceNumber;
};

int main(){
    CustomerDetails customer1, customer2, customer3, customer4, customer5;
    
    customer1.customerName = "Andile";
    customer1.invoiceAmount = 11000.00;
    customer1.invoiceNumber = 1;
    
    customer2.customerName = "Nothando";
    customer2.invoiceAmount = 1290.35;
    customer2.invoiceNumber = 2;
    
    customer3.customerName = "Tsitsi";
    customer3.invoiceAmount = 990.00;
    customer3.invoiceNumber = 3;
    
    customer4.customerName = "Naledi";
    customer4.invoiceAmount = 1290.00;
    customer4.invoiceNumber = 4;
    
    customer5.customerName = "Michael";
    customer5.invoiceAmount = 1980.00;
    customer5.invoiceNumber = 5;
    
    cout << "Customer Name: " << customer1.customerName << endl;
    cout << "Invoice Amount: " << customer1.invoiceAmount << endl;
    cout << "Invoice Number: " << customer1.invoiceNumber << endl;
    cout << "*******************************" << endl;
    
    cout << "Customer Name: " << customer2.customerName << endl;
    cout << "Invoice Amount: " << customer2.invoiceAmount << endl;
    cout << "Invoice Number: " << customer2.invoiceNumber << endl;
    cout << "*******************************" << endl;
    
    cout << "Customer Name: " << customer3.customerName << endl;
    cout << "Invoice Amount: " << customer3.invoiceAmount << endl;
    cout << "Invoice Number: " << customer3.invoiceNumber << endl;
    cout << "*******************************" << endl;
    
    cout << "Customer Name: " << customer4.customerName << endl;
    cout << "Invoice Amount: " << customer4.invoiceAmount << endl;
    cout << "Invoice Number: " << customer4.invoiceNumber << endl;

    //write a condition to determine the largest invoice amount
    //and print the customer name and invoice amount

    if (customer1.invoiceAmount > customer2.invoiceAmount){
        cout << "Customer Name: " << customer1.customerName << endl;
        cout << "Invoice Amount: " << customer1.invoiceAmount << endl;
    }
    else if (customer2.invoiceAmount > customer1.invoiceAmount){
        cout << "Customer Name: " << customer2.customerName << endl;
        cout << "Invoice Amount: " << customer2.invoiceAmount << endl;
    }
    else if (customer3.invoiceAmount > customer4.invoiceAmount){
        cout << "Customer Name: " << customer3.customerName << endl;
        cout << "Invoice Amount: " << customer3.invoiceAmount << endl;
    }
    else if (customer4.invoiceAmount > customer3.invoiceAmount){
        cout << "Customer Name: " << customer4.customerName << endl;
        cout << "Invoice Amount: " << customer4.invoiceAmount << endl;
    }
    else if (customer5.invoiceAmount > customer4.invoiceAmount){
        cout << "Customer Name: " << customer5.customerName << endl;
        cout << "Invoice Amount: " << customer5.invoiceAmount << endl;
    }
    else if (customer4.invoiceAmount > customer5.invoiceAmount){
        cout << "Customer Name: " << customer4.customerName << endl;
        cout << "Invoice Amount: " << customer4.invoiceAmount << endl;
    }
    else if (customer5.invoiceAmount > customer4.invoiceAmount){
        cout << "Customer Name: " << customer5.customerName << endl;
        cout << "Invoice Amount: " << customer5.invoiceAmount << endl;
    }
    else if (customer5.invoiceAmount > customer3.invoiceAmount){
        cout << "Customer Name: " << customer5.customerName << endl;
        cout << "Invoice Amount: " << customer5.invoiceAmount << endl;
    }
    else if (customer3.invoiceAmount > customer5.invoiceAmount){
        cout << "Customer Name: " << customer3.customerName << endl;
        cout << "Invoice Amount: " << customer3.invoiceAmount << endl;
    }
    else if (customer3.invoiceAmount > customer4.invoiceAmount){
        cout << "Customer Name: " << customer3.customerName << endl;
        cout << "Invoice Amount: " << customer3.invoiceAmount << endl;
    }
    else if (customer4.invoiceAmount > customer3.invoiceAmount){
        cout << "Customer Name: " << customer4.customerName << endl;
        cout << "Invoice Amount: " << customer4.invoiceAmount << endl;
    }
    else if (customer4.invoiceAmount > customer5.invoiceAmount){
        cout << "Customer Name: " << customer4.customerName << endl;
        cout << "Invoice Amount: " << customer4.invoiceAmount << endl;
    }
    else if (customer5.invoiceAmount > customer4.invoiceAmount){
        cout << "Customer Name: " << customer5.customerName << endl;
        cout << "Invoice Amount: " << customer5.invoiceAmount << endl;
    }
    else if (customer5.invoiceAmount > customer3.invoiceAmount){
        cout << "Customer Name: " << customer5.customerName << endl;
        cout << "Invoice Amount: " << customer5.invoiceAmount << endl;
    }
    else if (customer3.invoiceAmount > customer5.invoiceAmount){
        cout << "Customer Name: " << customer3.customerName << endl;
        cout << "Invoice Amount: " << customer3.invoiceAmount << endl;
    }
    else if (customer3.invoiceAmount > customer4.invoiceAmount){
        cout << "Customer Name: " << customer3.customerName << endl;
        cout << "Invoice Amount: " << customer3.invoiceAmount << endl;
    }
    else if (customer4.invoiceAmount > customer3.invoiceAmount){
        cout << "Customer Name: " << customer4.customerName << endl;
        cout << "Invoice Amount: " << customer4.invoiceAmount << endl;
    }
    else if (customer4.invoiceAmount > customer5.invoiceAmount){
        cout << "Customer Name: " << customer4.customerName << endl;
        cout << "Invoice Amount: " << customer4.invoiceAmount << endl;
    }
    else{
        cout << "Customer Name: " << customer5.customerName << endl;
        cout << "Invoice Amount: " << customer5.invoiceAmount << endl;
    }

    return 0;
}