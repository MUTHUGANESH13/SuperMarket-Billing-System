# Supermarket Billing System

A simple Supermarket Billing System built in C++. This project allows users to add items to the bill, and it will generate a formatted bill displaying the items, their rates, quantities, amounts, and the total amount. It's a console-based program that simulates a supermarket billing process.

## Features

- Add items to the bill.
- Input item name, rate, and quantity.
- View a detailed bill with item-wise breakdown.
- Automatically calculates the total amount for the bill.
- Clean and user-friendly interface with clear menu options.
  
## How It Works

1. **Add Item**: The user can add multiple items to the bill. Each item requires an item name, rate, and quantity.
2. **Print Bill**: Once the items are added, the user can print the bill which will display all the items along with their prices, quantities, amounts, and a total amount.
3. **Exit**: Exit the program.

## Usage

### 1. Add Item
- The user is prompted to input the **item name**, **rate**, and **quantity** for each item.
- The system adds the item to the bill list.
  
### 2. Print Bill
- The bill is displayed in a formatted layout with the following details:
  - Item name
  - Rate
  - Quantity
  - Amount (Rate * Quantity)
  - Total amount at the bottom
  
### 3. Exit
- The program will end.


## Sample Output :

```
	Welcome To Super Market Billing System
	**************************************
		1. Add Item
		2. Print Bill
		3. Exit
		Enter Choice: 1
	1. Add Item
	2. Back to Main Menu
	Enter Choice: 1
	Enter Item Name: carrot
	Enter Rate Of Item: 20
	Enter Quantity Of Item: 3
	Item Added Successfully
	1. Add Item
	2. Back to Main Menu
	Enter Choice: 1
	Enter Item Name: candy
	Enter Rate Of Item: 6
	Enter Quantity Of Item: 10
	Item Added Successfully
	1. Add Item
	2. Back to Main Menu
	Enter Choice: 1
	Enter Item Name: juice
	Enter Rate Of Item: 1
	Enter Quantity Of Item: 60
	Item Added Successfully
	1. Add Item
	2. Back to Main Menu
	Enter Choice: 2
	Back To Main Menu!


	Welcome To Super Market Billing System
	**************************************
		1. Add Item
		2. Print Bill
		3. Exit
		Enter Choice: 2


	************* BILL *************
	---------------------------------
	Item Name           Rate       Quantity    Amount
	---------------------------------------------------
	carrot              20             3         60             
	candy               6              10        60             
	juice               1              60        60             
	---------------------------------------------------

	Total Amount: 180                                     
	*********************************
	Thank You For Shopping!


	Welcome To Super Market Billing System
	**************************************
		1. Add Item
		2. Print Bill
		3. Exit
		Enter Choice: 3
	Good Luck!

```

## Requirements

- C++ Compiler (e.g., GCC or Visual Studio)
  
