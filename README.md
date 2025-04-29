# Meds Training
## by Rameen 
---
# Things learnt
###
- [x] Shell Scripting
- [x] Vim Commands
- [x] Git branching
- [x] Markdown File
- [ ] Make File
- [ ] Verilator
- [ ] GTKWave
 
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
### Running Shell Commands from the Command Line
When you open your terminal, you will see a prompt that looks something like this:
```
[username@host ~]$
```
This is where you type in commands to interact with your system. A basic command follows this structure:
```
command [OPTIONS] arguments
```

---
### Let’s try a few basic shell commands and their outputs:

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
---

## 🧑‍💻 How to Create and Execute Shell Scripts
- #### Naming Convention:
Shell scripts typically end with ```.sh```, but it is not mandatory for them to work. It’s just a convention that makes the script recognizable as a shell script.

- #### Adding the Shebang:
Shell scripts usually start with the shebang (```#!/bin/bash```). The shebang tells the system to use the bash shell to execute the script.

**Here’s an example of the shebang:**
```
#!/bin/bashMake the Script Executable
```
To find your bash shell path, you can run:
```
which bash
```
## ⚙️ Creating Our First Shell Script
Let’s create a simple script that prompts the user to input a directory path and lists the files and folders inside it.

**Step 1: Create a New Script File**

Use any text editor to create a new script file. For example, you can use vi:

```
vi myscript.sh
```

**Step 2 : Add the Script Content**

Add the following lines to the file:

```
#!/bin/bash
echo "Today is " `date`

echo -e "\nEnter the path to the directory:"
read the_path

echo -e "\nYour path has the following files and folders: "
ls $the_path
```


**Script Explanation (Line by Line)**

Line 1: `#!/bin/bash`
The shebang (`#!/bin/bash`) tells the system to use the **bash shell** to run the script. This is the first line of every bash script and is required for the script to execute correctly.

Line 2: `echo "Today is "`
This command uses `echo` to print the current date and time to the terminal. It’s calling the `date` command wrapped in backticks (`` ` ``) to output the date.

Line 3: `echo -e "\nEnter the path to the directory:"`
This line prompts the user to enter a directory path. The `-e` flag allows the interpretation of escape characters (like `\n` for a new line), so the message is displayed on a new line.

Line 4: `read the_path`
The `read` command waits for the user to enter input in the terminal. It stores that input in the variable `the_path`.

Line 5: `echo -e "\nYour path has the following files and folders:"`
This line prints a message informing the user that the script will now list the contents of the directory they specified. Again, `-e` allows new lines (`\n`) to be interpreted.

Line 6: `ls $the_path`
The `ls` command is used to list the files and directories in the specified path. The `$the_path` variable contains the path entered by the user, which is then passed as an argument to `ls`.

**Step 3: Save and Exit**
If you're using vi, press Esc and then type :wq to save and exit the editor.

## 📝 Make the Script Executable

Before you can run the script, you need to give it permission to execute. Use the chmod command to do that:

```
chmod u+x myscript.sh
```
This command gives the user (u) execute permissions (+x) on the script.

#### Running the Script
Now that the script is executable, you can run it in several ways:

**Method 1: Using** ```sh```
```
sh myscript.sh

```

**Method 2: Using** ```bash```
```
bash myscript.sh

```
**Method 2: Using** ```./```
```
./myscript.sh

```

#### Example Output
Here’s what the output might look like when you run the script:
```

Today is Tue Mar 14 13:08:57 PKT 2023

Enter the path to the directory:
/home/username

Your path has the following files and folders:
file1.txt  file2.txt  myscript.sh
```

# Conclusion
Congratulations! You've written your first shell script. Bash scripting is a powerful tool for automating tasks, and with time, you’ll be able to write more complex scripts to manage your system efficiently.

Feel free to experiment with more bash commands and scripts to get familiar with them. The possibilities are endless!
