# Meds Training
## by Rameen 
---
# The Shell Scripting Tutorial
<p align="center">
  <img src="https://devopscube.com/content/images/size/w2000/format/webp/2025/03/shell-scripting-linux-1.png" 
       style="width:300px; height:200px; object-fit:cover;"/>
</p>

## Purpose Of This Tutorial
This tutorial is written to help people understand some of the basics of shell script programming (aka shell scripting), and hopefully to introduce some of the possibilities of simple but powerful programming available under the Bourne shell. As such, it has been written as a basis for one-on-one or group tutorials and exercises, and as a reference for subsequent use.

## Quick quide to open terminal on different systems: 

- **macOS**: Press **Cmd + Space**, type Terminal, and hit Enter.

- **Linux**: Press **Ctrl + Alt + T**.

- **Windows** (Command Prompt): Press the Windows key, type cmd, and hit Enter.

- **Windows** (PowerShell): Press the Windows key, type PowerShell, and hit Enter.

---
**Let's get started!!!**

## 🖥️  Shell Scripting:
A shell script is just a file/program that contains a list of commands you would normally type in the terminal. The script runs these commands automatically when you execute it, saving you time and effort.
## Running Shell Commands from the Command Line
When you open your terminal, you will see a prompt that looks something like this:
```
[username@host ~]$
```
This is where you type in commands to interact with your system. A basic command follows this structure:
```
command [OPTIONS] arguments
```
**Let’s try a few basic shell commands and their outputs:**

**Example # 1**

Input:
```
users:~$ date
```
output: 
```
users:~$ date
Tue Mar 14 13:08:57 PKT 2023
```
**Example # 2**

```pwd```: Displays the current directory
Input:
```
users:~$ pwd
```
Output:

```
users:~$ pwd
/home/username
```

**Example # 3**

```ls```: Lists files and directories in the current directory
Input:
```
users:~$ ls
```
Output:

```
users:~$ ls
file1.txt  file2.txt  script.sh
```

**Example # 4**

```echo```: Prints a string of text or the value of a variable
Input:
```
users:~$ echo "Hello, Shell Scripting!"
```
Output:

```
users:~$ echo "Hello, Shell Scripting!"
Hello, Shell Scripting!
```



### Example: 
Here’s a simple shell script:
```
#!/bin/bash
echo "Hello, World!
```

**How to Run It:**
  1.  Create a file called hello.sh.
  2.  Add the script above to the file.
  3.  Open the terminal and type the following to make the script executable:

```
chmod +x hello.sh
```
  4. Now, run the script with:
```
./hello.sh
```
### Output
```
Hello, World!
```
That's it! A shell script is just a way to automate tasks by writing commands in a file and running them all at once.




