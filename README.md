# ATM-machine-code-in-C
This is a C program that simulates an ATM machine. The program begins by prompting the user to enter their name and ATM PIN. 
After entering their information, the user is presented with a menu of services they can access by entering a corresponding number. 
The services available are as follows:

Check Balance - displays the user's current account balance

Deposit - allows the user to deposit money into their account and displays the updated account balance

Withdraw - allows the user to withdraw money from their account in multiples of 50, 100, or 500 and displays the updated account balance

Transfer money - allows the user to transfer money to another account and displays the updated account balance

Pin change - allows the user to change their ATM PIN

Account holder - provides information about the account holder

The program defines several functions to perform these services, including "newbal" to update the account balance after a deposit, "drawn" to withdraw money in 500 notes, "drawn2" to withdraw money in 100 notes
"drawn3" to withdraw money in 50 notes, "drawn4" to withdraw money in any combination of 500, 100, and 50 notes, and "newbal2" to update the account balance after a withdrawal or transfer.

The program also uses several variables to store information, including the account balance, the user's name and PIN, the amount of money being withdrawn or deposited, and the type of notes being used in a withdrawal. 
The program uses the time.h library to display the date and time of a transaction.





