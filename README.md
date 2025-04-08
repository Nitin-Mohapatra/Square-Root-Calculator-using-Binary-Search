# Square Root Calculator using Binary Search (C++)

## 📜 Description  
This C++ program calculates the square root of a given number using the **binary search method**.  
It continues refining the result until the computed square root is within the user-specified error margin.  
The program also validates input to ensure the number is **greater than zero**.

---

## ✨ Features  
- 📐 Approximates square roots with high precision  
- 🛡️ Input validation to ensure the number is greater than 0  
- ⏱️ Efficient binary search-based logic  
- 🎯 Customizable error tolerance for accuracy  

---

## 🔧 How It Works  
The program starts with a range `[0, number]` and repeatedly calculates the middle value.  
It squares this value and adjusts the range based on how close it is to the target number.  
This process continues until the square of the mid value is within the allowed error margin.

If the user enters a number less than or equal to 0, they are prompted to enter a valid number greater than 0.

---

## 📦 Requirements  
- C++ compiler (e.g., `g++`, `clang++`)  
- Basic knowledge of conditionals, loops, and math logic  

---

## 🧪 Sample Input / Output  
```bash
Enter the no: -5
Please enter no greater than 0: 10
Enter the error allowed: 0.0001
3.16223
