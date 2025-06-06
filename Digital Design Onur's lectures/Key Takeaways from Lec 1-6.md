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







