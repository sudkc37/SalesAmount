//
//  main.cpp
//  SalesAmount
//
//  Created by Sudip Khadka on 8/15/22.
//

#include <iostream>
using namespace std;

int main(){
    double salesAmount;
    const double salesTax = 0.06;
    double salesDiscount = 0;
    
    cout<< "Enter sales amount $:";
    cin>> salesAmount;
    
    if(salesAmount >= 100){
        salesDiscount = salesAmount * 0.1;
    }
    
    double taxAmount = salesAmount * salesTax;
    double totalAmount = (salesAmount - salesDiscount) + taxAmount;
    cout<<"Sub-Total: $" <<salesAmount<<"\n"<< "Discount: $"<<salesDiscount<<"\n"<<"Taxamount: $"<<taxAmount<<"\n"<<"totalAmount: $"<<totalAmount<<"\n"<<endl;
    
    return 0;
    
}
