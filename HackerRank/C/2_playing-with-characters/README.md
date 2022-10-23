# Playing With Characters

## Difficulty level of the problem "EASY" 

---

## Task
Task

You have to print the character, _ch_ , in the first line. Then print _s_  in next line. In the last line print the sentence,_sen_ .

Input Format

First, take a character, _ch_  as input.
Then take the string, _s_  as input.
Lastly, take the sentence _sen_ as input.

Constraints

Strings for _s_ and _sen_ will have fewer than 100 characters, including the newline.

Output Format

Print three lines of output. The first line prints the character, _ch_ .
The second line prints the string, _s_ .
The third line prints the sentence, _sen_ .

## Soluotion

### Firstly

#### First, we need to identify our needs. Here are the characters the question asks of us:

	- char
	- string
	- char (but sentence)

#### Also we must print the following entries in order

	- C
	- Language
	- Welcome To C ! ! 

### Secondary

#### So we create 3 values and these are:

![values](https://github.com/Onur-TURAN/HackerRank/blob/main/C/2_playing-with-characters/img/1.png)

#### We also received the inputs as follows. This place is very important.


![values](https://github.com/Onur-TURAN/HackerRank/blob/main/C/2_playing-with-characters/img/2.png)




| Line 1       | "%c"         | we can assign data of single character char type                       |
|--------------|--------------|------------------------------------------------------------------------|
| Line 2       | "%s\n"       | It will take the values written until the string value becomes a space |
| Line 2       | "%[^\n]%c"   | It is the command we write in order to get a complete line in blanks   |




####  Note


##### For line 3 to work, line 2 has to be "\n".


### Finally

#### and the command lines we are trying to write are as follows.



![codelines](https://github.com/Onur-TURAN/HackerRank/blob/main/C/2_playing-with-characters/img/3.png)



![coderun](https://github.com/Onur-TURAN/HackerRank/blob/main/C/2_playing-with-characters/img/4.png)



---
credit by [Onur](https://github.com/Onur-TURAN) ! 
If you want to ask me a question, you can write to me on the this mail. [onurturan.t@gmail.com](mailto:onurturan.t@gmail.com?subject=hackkerrank-c-problem)
