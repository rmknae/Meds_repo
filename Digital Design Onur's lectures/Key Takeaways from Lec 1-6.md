<div align="center">
  <h1>Digital Design & Computer Architecture</h1>
</div>
<p align="center">
  <strong>Key Takeaways from Onur Mutlu’s Lectures</strong>
</p>

## Introduction  
Digital systems power computers, phones, and other smart devices. Learning digital design helps you build hardware, improve software, or pass exams. This guide explains the main ideas from Onur Mutlu’s first six lectures in simple words.

---

## Lecture 1: Foundations of Digital Systems

We use computers to solve problems quickly and efficiently such as performing calculations, analyzing data, or running applications. Computers solve problems by orchestrating the movement of electrons. This might lead us to wonder: how exactly do electrons help solve these problems?

To answer that, we need to understand that computers follow a step-by-step process given below: 

- **Problem**  
  Something we want to figure out, like adding numbers or sorting data.
- **Algorithm**  
  A clear plan to solve the problem, like a recipe with steps.
- **Program**  
  The plan written in a coding language, like Python or C++, so the computer can understand it.
- **System Software**  
  Tools that help run the program and manage the computer. These include:

  - **Compiler/Interpreter**: Turns code into instructions the computer can follow.  
  - **Operating System (OS)**: Controls the computer’s hardware and apps, like Windows or Linux.  
  - **Memory Management**: Makes sure programs use memory properly.  
  - **Virtual Machine (VM)**: Acts like a fake computer to make programs work on different devices.

- **Computer Architecture**  
  The way software talks to hardware.

  - **Instruction Set Architecture (ISA):**  
    - A list of commands the computer’s processor can do, like “add” or “save.”  
    - It’s the link between software and hardware.  
    - Examples: x86 (used in PCs) or ARM (used in phones).

- **Microarchitecture**  
  How the processor is built to follow those commands. It uses parts like:

  - **ALUs**: Do math and logic, like adding or comparing numbers.  
  - **Registers**: Small storage spots for quick data access.  
  - **Pipelines**: Let the computer work on multiple tasks at once.  
  - **Control Units**: Guide the processor’s work.

- **Logic Circuits**  
  Made of logic gates (like AND, OR, NOT) that do simple yes/no calculations.

- **Devices**  
  Logic gates are built from transistors, which are tiny switches that control electricity.

- **Physics**  
  At the deepest level, everything is about moving electrons through materials like silicon to make the computer work.

This step-by-step process is known as the **transformation hierarchy**.

<p align="center">
  <img src="https://raw.githubusercontent.com/rmknae/Meds_repo/main/Digital%20Design%20Onur's%20lectures/pngs/Capture.PNG" alt="Transformation Hierarchy" width="400">
</p>

---

## General-Purpose vs. Special-Purpose Systems

### General-Purpose Systems
- Can execute **any program**  
- **Easy to program**  
- **Not the best performance or efficiency**

### Special-Purpose Systems
- Designed for a **limited set of programs**  
- **Efficient and high-performance**  
- **Difficult to program and use**

---

## Transistors and CMOS Technology

Computers are built from **very large numbers of very small structures** called **transistors**.

### MOS Transistors  
These are made from:
- **Conductors**  
- **Insulators**  
- **Semiconductors**

### Why Are Transistors Useful?  
We can **combine many transistors** to build **simple logic gates**, which are the foundation of digital circuits.

### Types of MOS Transistors  
- **n-type (nMOS)**  
- **p-type (pMOS)**

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/2.PNG?raw=true" width="400" alt="nMOS and pMOS Transistors">
</p>

They both operate logically in the same way. This is how they work:

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/3.png?raw=true" width="500" alt="nMOS and pMOS working logic">
</p>

### CMOS Technology  
- Combines nMOS and pMOS transistors to create logic gates that are **power efficient**.  
- CMOS gates are fundamental in modern digital design, implementing efficient NOT, NAND, and NOR gates.

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/4.png?raw=true" width="400" alt="General CMOS Structure">
</p>

---

## Basic Logic Gates  

- **AND Gate:** Outputs 1 only if **all inputs** are 1.  
- **OR Gate:** Outputs 1 if **at least one input** is 1.  
- **NOT Gate (Inverter):** Outputs the **opposite** of the input (0 → 1, 1 → 0).  
- **NAND Gate:** Outputs 0 only if **all inputs** are 1 (NOT of AND).  
- **NOR Gate:** Outputs 0 if **at least one input** is 1 (NOT of OR).  
- **XOR Gate:** Outputs 1 if **an odd number of inputs** are 1.  
- **XNOR Gate:** Outputs 1 if **an even number of inputs** are 1 (NOT of XOR).

---

