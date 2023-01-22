#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*-----------Functions to Generate the Bill---------*/

/**
  * generateBillHeader - function to generate the Bill Header
  *
  * Functions to generate bills
  * @name: invoice name
  * @date: invoice date
  */
void generateBillHeader(char name[50], char date[30])
{
	printf("\n\n");
	printf("\t	HEAVEN . Restaurants");
	printf("\n\t	----------------------");
	printf("\nDate:%s", date);
	printf("\nInvoice to : %s", name);
	printf("\n");
	printf("----------------------------------------\n");
	printf("Items\t\t");
	printf("Qty\t\t");
	printf("Total\t\t");
	printf("\n----------------------------------------");
	printf("\n\n");
}
/**
  * generateBillBody - function to generate the Bill Body
  *
  * @item: argumenet that take the item name
  * @qty: argument the takes the number of items
  * @price: argument that take the cost of an item
  */
void generateBillBody(char item[30], int qty, float price)
{
	printf("%s\t\t", item);
	printf("%d\t\t", qty);
	printf("%.2f\t\t", qty * price);
	printf("\n");
}
/**
  * generateBillFooter - function to generate the Bill Footer
  *
  * @total: argument that take the total cost of items
  */
void generateBillFooter(float total)
{
	printf("\n");
	float dis = 0.1 * total;
	float netTotal = total - dis;
	float vat = netTotal * 0.18;
	float grandTotal = netTotal + (2 * vat);
	printf("----------------------------------\n");
	printf("Sub Total\t\t\t%.2f", total);
	printf("\nDiscount @10%s\t\t\t%.2f", "%", dis);
	printf("\n\t\t\t---------");
	printf("\nNet Total\t\t\t%.2f", netTotal);
	printf("\nVAT @18%s\t\t\t%.2f", "%", vat);
	printf("\nVATX @18%s\t\t\t%.2f", "%", vat);
	printf("\n-------------------------------------");
	printf("\nGrand Total\t\t\t%.2f", grandTotal);
	printf("\n-------------------------------------\n");
}
/**
  * main - main Entry point
  *
  * Return: 0 on success
  */
int main()
{
	/*----Dash---*/
	printf("\n\t==========HEAVEN. RESTAURANT==========");
	printf("\n1.Generate Invoice");
	printf("\n2.Show All Invoices");
	printf("\n3.Search Invoice");
	printf("\n4.Exit\n");
	printf("\n");
	printf("\n");
	printf("Please select your prefered operation\n");


	return (0);
}
