<div align="center">
  <h1>Digital Design & Computer Architecture</h1>
</div>
<p align="center">
  <strong>Key Takeaways from Onur Mutlu’s Lectures</strong>
</p>

## Introduction  
Digital systems power computers, phones, and other smart devices. Learning digital design helps you build hardware, improve software, or pass exams. This guide explains the main ideas from Onur Mutlu’s first six lectures in simple words.

---

## Lecture 1: Foundations of Digital Design and Computer Architecture  

### Why Use Computers?  
We use computers to solve problems quickly and efficiently such as performing calculations, analyzing data, or running applications. Computers solve problems by orchestrating the movement of electrons.

### The Transformation Hierarchy: How Problems Become Solutions  


Computers solve problems through a series of layered steps, from high-level tasks to low-level hardware:

- **Problem**
  - A task to solve (e.g., sorting data, calculating numbers).

- **Algorithm**
  - A step-by-step method or recipe to solve the problem.

- **Program**
  - The algorithm written in a programming language (e.g., Python, C++).

- **System Software**
  - Tools that manage and run programs:
    - **Compiler/Interpreter**: Converts code into executable instructions.
    - **Operating System (OS)**: Manages hardware and apps (e.g., Windows, Linux).
    - **Memory Management**: Allocates memory to programs efficiently.
    - **Virtual Machine (VM)**: Enables platform-independent program execution.

- **Computer Architecture**
  - The interface between software and hardware.

  - **Instruction Set Architecture (ISA)**:
    - A set of commands the CPU can execute (e.g., `add`, `save`).
    - Acts as the boundary between software and hardware.
    - Examples: x86 (PCs), ARM (phones).

- **Microarchitecture**
  - The internal organization of the processor that implements the ISA:
    - **ALUs**: Perform arithmetic and logical operations.
    - **Registers**: Small, fast storage locations.
    - **Pipelines**: Allow parallel instruction execution.
    - **Control Units**: Direct and coordinate processor operations.

- **Logic Circuits**
  - Built from logic gates (AND, OR, NOT) to handle binary computations.

- **Devices**
  - Logic gates are made from **transistors**, which are tiny electronic switches.

- **Physics**
  - The movement of electrons in silicon enables all digital processing.

Following is a pictre from the lecture: 
<p align="center">
  <img src="https://raw.githubusercontent.com/rmknae/Meds_repo/main/Digital%20Design%20Onur's%20lectures/pngs/Capture.PNG" alt="Transformation Hierarchy" width="150">
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
- **n-type (nMOS)**  : Good for *pulling down* the output.
- **p-type (pMOS)**  : Good for *pulling up* the output.

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

