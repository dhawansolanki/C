//Calculating Electricity Bill
#include<stdio.h>
void main(void){
    char Name[30];
    int Units;
    const int MinCharge = 100;
    const double unit1 = 0.8;
    const double unit2 = 0.9;
    const double unit3 = 1.0;
    const double Surcharge = 0.15;
    double BillAmount = 0.0;
    
    printf("\nEnter the name of the customer : "); 
    scanf("%s", Name);
    printf("\nEnter the number of units consumed : "); 
    scanf("%d",&Units);
    
    BillAmount = BillAmount + MinCharge;
    
    if(Units <= 200){
        BillAmount =BillAmount + Units*unit1;
    }
    else if(Units > 200 && Units <= 300){
        BillAmount = BillAmount + (200*unit1)+((Units-200)*unit2);
    }
    else{
        BillAmount =BillAmount + (200*unit1)+(100*unit2)+((Units-300)*unit3);
    }
    if(BillAmount > 400)
    {
    BillAmount += BillAmount * Surcharge;
    }
    printf("\nElectricity Bill\n===================================");
    printf("\nCustomer Name\t: %s", Name);
    printf("\nUnits Consumed\t: %d", Units);
    printf("\nBill Amount\t: %0.2lf Rupees\n\n", BillAmount);
}
