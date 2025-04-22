# 🏦 Procedural Bank System (C++)

ATM-simulated console banking system written fully in **procedural C++**.  
Features include deposits, withdrawals, loan calculations, balance display, and customer card preview.

---

## ⚙️ Features

- 🔐 Secure sign-in with user credentials and age validation  
- 💰 Deposit system with limits and error handling  
- 💸 Withdrawal system with balance checks  
- 🧾 Live balance display page  
- 💡 Helper system for common issues  
- 🏠 Car, House, and Personal loan eligibility & offer calculator  
- 🪪 Card information display formatted with `iomanip`  
- 🧭 Menu-based navigation using `switch-case`  
- 🧠 Input validation & control flow error prevention  

---

## 🧪 Technologies & Concepts Used

- ✔️ Pure procedural programming (no OOP yet)  
- ✔️ Control flow: `if-else`, `switch-case`, `while`, `do-while`  
- ✔️ `iomanip` usage for output alignment (`setw`)  
- ✔️ Functions for modular features (deposit, withdrawal, etc.)  
- ✔️ Defensive programming & input validation  
- ✔️ Console interface using only `cin` / `cout`  

---

## 📝 Notes

- 📌 This is my **third C++ project**, created to reinforce functional programming, user-driven logic, and state control in a real-world banking simulation.
- ⚡ Developed after just 2 days of learning C++, as part of a rapid learning journey.
- 🚀 A future version using **OOP (Object-Oriented Programming)** and **file saving** is planned.  
- 🧪 All logic handled through `void` functions and simple variable tracking — no classes, just pure procedural logic.

---

## 🖥️ Sample Program Output

```
------------ Puduk Bank ------------
1 for sign in the bank account:  
2 for quit:  
> 1

Signing the account:  
This can take a while

------------ Bank System ------------
What is your name:  
> Mert  
What is your surname:  
> Demirkasaoğlu  
What is your id:  
> 29878  
What is your age:  
> 21  
Age Checking...  
Age Approved...  
What is your card number:  
> 1234567812345678  
What is your card ccv:  
> 321  
What is your card date:  
> 12/27

------------- Signing -------------
------------- PUDUK --------------
-------------- Bank --------------
1 for Deposit  
2 for Withdrawal  
3 for Current Balance  
4 for Help  
5 Loan Page  
6 Bank Card  
7 for Quit  
> 1

--------- Deposit Page ---------
1 for Deposit  
2 for Previous Page  
> 1  
How much money you want to deposit:  
> 500  
Please put the money carefully...  
Current balance is 500  
Have a nice day  
> 2

-------- Withdrawal Page --------
1 for Withdrawal  
2 for Previous Page  
> 1  
How much money you want to withdraw:  
> 1000  
You don't have enough balance: 500  
Please try again.  
> 3

-------- Balance Shower Page --------
Current Balance: 500  
> 5

-------- Loan Page --------
1 for House Loan  
2 for Car Loan  
3 for Personal Loan  
4 for Previous Page  
> 1  

What is your income:  
> 60000  
How many years of experience you have:  
> 4  

Our Loan Offer For You: 160000  
> 5  
-------- Loan Page --------
1 for House Loan  
2 for Car Loan  
3 for Personal Loan  
4 for Previous Page  
> 3  

What is your income:  
> 25000  
How many years of experience you have:  
> 1  

Our Loan Offer For You: 6250
```

## 🪪 License

This project is licensed under the [MIT License](https://github.com/puduk/procedural-banking-system/blob/main/LICENSE) © 2025 [puduk](https://github.com/puduk)


