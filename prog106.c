#include <stdio.h>

// Define the structure Item
struct Item {
    char itemName[50];  // To store the name of the item
    int quantity;       // To store the quantity of the item
    float price;        // To store the price of the item
    float amount;       // To store the amount (quantity * price)
};

// User-defined function to read item details and calculate the amount
void readAndCalculateAmount(struct Item *item) {
    // Input item name, quantity, and price
    printf("Enter item name: ");
    scanf("%s", item->itemName);  // Using %s to input item name
    
    printf("Enter quantity: ");
    scanf("%d", &item->quantity);  // Using %d to input quantity
    
    printf("Enter price: ");
    scanf("%f", &item->price);  // Using %f to input price

    // Calculate amount = quantity * price
    item->amount = item->quantity * item->price;
}

// Function to display the item details
void displayItemDetails(struct Item item) {
    printf("\nItem Details:\n");
    printf("Item Name: %s\n", item.itemName);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);
    printf("Amount: %.2f\n", item.amount);
}

int main() {
    struct Item item;  // Declare a variable of type Item

    // Call the function to read item details and calculate amount
    readAndCalculateAmount(&item);

    // Call the function to display the item details
    displayItemDetails(item);

    return 0;
}
