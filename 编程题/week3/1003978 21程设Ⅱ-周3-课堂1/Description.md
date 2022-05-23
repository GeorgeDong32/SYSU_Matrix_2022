# 21程设Ⅱ-周3-课堂1

# Description

Deisgn a class named Account that contains:

- An `int` data field named `id` for the account (default 0).
- A `double` data field named `balance` for the account (default 0).
- A `double` data field named `annualInterestRate` that stores the current interest rate (default 0).
- A no-arg constructor that creates a default account.
- The accessor and mutator functions for `id`, `balance`, and `annualInterestRate`.
- A function named `getMonthlyInterestRate()` that returns the monthly interest rate. (Hint: `monthlyInterestRate = annualInterestRate / 12`)
- A function name `withDraw()` that withdraws a specified amount from the account.(Hint: if insufficient, only withdraw all the money from the account)
- A function name `deposit()` that deposits a specified amount to the account.

# Hint

只提交`Account`类实现，不要提交`main()`函数。