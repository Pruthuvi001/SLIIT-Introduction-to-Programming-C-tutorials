#include<stdio.h>
struct item{
	int itemNo;
	double price;
	int quantity;
	}item1,item2;
int main (void)
{
	item1.itemNo=1;
	item1.price=10.00;
	item1.quantity=12;
	
	item2.itemNo=2;
	item2.price=15.00;
	item2.quantity=4;
	
	printf("Item No\t Price\t Quantity\n");
	
	printf("%d\t",item1.itemNo);
	printf("%.2f\t",item1.price);
	printf("%d\n",item1.quantity);
	
	printf("%d\t",item2.itemNo);
	printf("%.2f\t",item2.price);
	printf("%d\n",item2.quantity);
	
	return 0;
}
