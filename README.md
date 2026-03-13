*This project has been created as part of the 42 curriculum by elwilks.*

## Description

push_swap is a sorting algorithm project. The goal is to sort a stack of integers using two stacks (A and B) and a limited set of operations, producing the smallest possible sequence of moves.

For large inputs (6+ numbers), the Turk algorithm is used — it repeatedly finds the cheapest node in stack B to insert into the correct position in stack A. For small inputs (2–5 numbers), hardcoded optimal solutions are used.

## Instructions

**Compile:**
```bash
make
```

**Run:**
```bash
./push_swap 3 1 4 1 5 9 2 6
```

**Check with checker:**
```bash
ARG="3 1 4 5 9 2"; ./push_swap $ARG | ./checker_linux $ARG
```

**Clean:**
```bash
make fclean
```
