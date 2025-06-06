<div align="center">
  <h1>Digital Design & Computer Architecture</h1>
</div>
<p align="center">
  <strong>Key Takeaways from Onur Mutlu’s Lectures</strong>
</p>



## Introduction  
Digital systems power computers, phones, and other smart devices. Learning digital design helps you build hardware, improve software, or pass exams. This guide explains the main ideas from Onur Mutlu’s first six lectures in simple words.

---

## *Lecture 1*  

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

These step by step process is the transformation hierarchy.


<p align="center">
  <img src="https://raw.githubusercontent.com/rmknae/Meds_repo/main/Digital%20Design%20Onur's%20lectures/pngs/Capture.PNG" alt="Capture" width="100">
</p>

## General-Purpose vs. Special-Purpose Systems

###  General-Purpose Systems
- Can execute **any program**
- **Easy to program**
- **Not the best performance or efficiency**

###  Special-Purpose Systems
- Designed for a **limited set of programs**
- **Efficient and high-performance**
- **Difficult to program and use**

## 🔌 Transistors

Computers are built from **very large numbers of very small structures** called **transistors**.

### 🧱 MOS Transistors
These are made from:
- **Conductors**
- **Insulators**
- **Semiconductors**

### ❓ Why Are Transistors Useful?
We can **combine many transistors** to build **simple logic gates**, which are the foundation of digital circuits.

### 🔄 Types of MOS Transistors

#### n-type (nMOS)
<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/N-Ch-MOSFET_en.svg/512px-N-Ch-MOSFET_en.svg.png" width="300" alt="nMOS Transistor">
</p>

#### p-type (pMOS)
<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/P-Ch-MOSFET_en.svg/512px-P-Ch-MOSFET_en.svg.png" width="300" alt="pMOS Transistor">
</p>

how these transistopres are connected to form logic gates?
how logic gates are inetconnected to form l,arger units that are needed to construct a computer?





