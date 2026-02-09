*This project has been created as part of the 42 curriculum by hchartie*

# PUSH_SWAP

## Description
This program as to goal to sort the stack given in parameter with the minimum of instruction

## Instruction
	To compile the code you need to :\
	```BASH
		make all
	```
	> To use the programe you need to give array of int like 
	this
	```BASH
		./push_swap "8 7 2 3"
		or 
		./push_swap 1 "8 7" 4
		or 
		ARG = 2 6 1 -1; ./push_swap $ARG
	```
	> If the arg string is correct and contain only unique int value the program print all instruction to sort the array if not it display `ERROR\n`\
	And if any other error occur the program display `ERROR\n`
## Ressources
	Radix sort:\
		https://fr.wikipedia.org/wiki/Tri_par_base\
		https://www.geeksforgeeks.org/dsa/radix-sort/\
### IA usage
	The ia was use only for generate random unique number