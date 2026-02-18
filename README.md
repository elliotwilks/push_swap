
#############   Project Summary ################

Sort data in a stack using a limited set of instructions. Use data sorting algorithm.

Introduction

Will have 
	- set of integer values
	- 2 stacks
	- a set of instructions to manipulate both stacks

Call program "push_swap"

calculates and displays shortest sequence of instructions needed to sort the given integers. For example:

$>./pushswap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa


#############   Objectives    ################

Common Instructions
	
	• Functions should not quit unexpectedly for example segmentation fault, bus error, double free, etc 

	• All heap-allocated memory needs to be freed. No Memory leaks 

	• Create a Makefile. Use: -Wall, -Wextra, and -Werror, using cc. No relinking. <-- what is relinking?
	
	• Makefile rules 
		$(NAME), all, clean, fclean and re.

	• Use libft. Put into the libft folder.

	- Makefile compile libft Makefile and project. 

	• create test programs for your project. 

The rules
	• You have 2 stacks named a and b.
	• At the beginning:
		◦ The stack a has a random numbers. 
		◦ Stack b is empty.

	• Need to sort the numbers in stack so they are in ascending order. Smallest to biggest
	
	Operations:

			[DONE]	
			sa (swap a): Swap first 2 elements at the top of stack a. Do nothing if there theres only one element or none.
	
			[DONE]
			sb (swap b): Swap the first 2 elements at the top of stack b. Again do nothing if has only one element or none.

			[DONE]
			ss : sa and sb at the same time.

			[DONE]	
			pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.

			[DONE]
			pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

			[DONE]
			ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.

			[DONE]
			rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.

			[DONE]
			rr : ra and rb at the same time.
		
			[DONE]		
			rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.

			[DONE]
			rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
	
			[DONE]
			rrr : rra and rrb at the same time.

Example 
----------------------------------------------------------------------------------------------------------
Init a and b:
2
1
3
6
5
8
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa: <--- sa = swap first two numbers at the top of stack a 
1
2
3
6
5
8
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pb pb pb: <--- pb = put top number from a to the top of b. Doing this 3 times
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa:
5 3
6 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pa pa pa:
1
2
3
5
6
8
_ _
a b
----------------------------------------------------------------------------------------------------------

Sorted in 12 instructions.


Files to Submit
	- Makefile | Arguments | External Function | Makefile, *.h, *.c
	• read, write, malloc, free, exit

Rules
	• No Global variables.  
	• Program takes an argument which is list of integers. First argument will be at the top of the stack
	• display the instructions needed to sort stack. 
	- When stack is sorted the smallest number will be at the top.
	• If no arguments the program display nothing and return to the terminal. 
	• Display "Error".
	- For example:	
	  	some arguments not being integers
		some arguments exceeding the integer limits
		duplicates.


###  Correct Example ###
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa

###  Error Example  ###

$>./push_swap 0 one 2 3
Error


###  More Checks  ###

ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
6

ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
OK

Check resources page on the intranet for more tests


###  Benchmark  ###

• For minimal project validation

	◦ 100 numbers in under 1100 operations and 500 numbers in under 8500 operations
	◦ 100 numbers in under 700 operations and 500 numbers in under 11500 operations
	◦ 100 numbers in under 1300 operations and 500 numbers in under 5500 operations

Readme Requirements

This project has been created as part of the 42 curriculum by elwilks. <--- put in intalitcs
	• A “Description” section that clearly presents the project, including its goal and a brief overview.
	• An “Instructions” section containing any relevant information about compilation, installation, and/or execution.

Can use 
	• read, write, malloc, free, exit
	• ft_printf

My questions 

	What is considered the top 
	How to move something frome one stack to another stack
# push_swap
