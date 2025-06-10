<div align="center">
  <h1>Digital Design & Computer Architecture</h1>
</div>
<p align="center">
  <strong>Key Takeaways from Onur Mutlu’s Lectures</strong>
</p>

# Introduction  
Digital systems power computers, phones, and other smart devices. Learning digital design helps you build hardware, improve software, or pass exams. This guide explains the main ideas from Onur Mutlu’s first six lectures in simple words.

---

# *Lecture 1: Foundations of Digital Design and Computer Architecture*  

## *Why Use Computers?*
We use computers to solve problems quickly and efficiently such as performing calculations, analyzing data, or running applications. Computers solve problems by orchestrating the movement of electrons.


## *The Transformation Hierarchy: How Problems Become Solutions*  
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
    - A set of commands the CPU can execute (e.g., add, save).
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



## *General-Purpose vs. Special-Purpose Systems*

### General-Purpose Systems
- Can execute **any program**  
- **Easy to program**  
- **Not the best performance or efficiency**

### Special-Purpose Systems
- Designed for a **limited set of programs**  
- **Efficient and high-performance**  
- **Difficult to program and use**



## *Transistors and CMOS Technology*

- Computers are built from **very large numbers of very small structures** called **transistors**.
- We can **combine many transistors** to build **simple logic gates**, which are the foundation of digital circuits.
  
These are few important transistors:

### MOS Transistors  
- These are made from:
   - **Conductors**  
   - **Insulators**  
   - **Semiconductors**

- These are the few types of MOS transistors:
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

## *Basic Logic Gates*  

- **AND Gate:** Outputs 1 only if **all inputs** are 1.  
- **OR Gate:** Outputs 1 if **at least one input** is 1.  
- **NOT Gate (Inverter):** Outputs the **opposite** of the input (0 → 1, 1 → 0).  
- **NAND Gate:** Outputs 0 only if **all inputs** are 1 (NOT of AND).  
- **NOR Gate:** Outputs 0 if **at least one input** is 1 (NOT of OR).  
- **XOR Gate:** Outputs 1 if **an odd number of inputs** are 1.  
- **XNOR Gate:** Outputs 1 if **an even number of inputs** are 1 (NOT of XOR).

---
# *Lecture 2: Power, Energy & Logic Circuits*

Understanding power and energy consumption is crucial in digital design. Efficient systems must manage both **dynamic** and **static** power while performing computation through well-structured **logic circuits**.


## *Power and Energy Consumption in Digital Circuits*
### Power Consumption

####      Dynamic Power Consumption
- Power used when signals **switch between 0 and 1**
- Formula:  
  **P_dynamic = C × V² × f**  
  - C = Capacitance  
  - V = Supply Voltage  
  - f = Switching Frequency

####  Static Power Consumption
- Power used **when signals are not switching**
- Caused by **leakage currents** in transistors
- Formula:  
  **P_static = V × I_leakage**



### Energy Consumption

- Energy is the total power used **over time**
- Formula:  
  **Energy = Power × Time**
- In digital systems:  
  **Total Energy = (P_dynamic + P_static) × Time**

We must include both dynamic and static power in calculations to estimate real-world energy usage.



## *Moore’s Law*

- **Moore’s Law**: The number of transistors on a chip doubles approximately **every two years**.
- Effects:
  - Improved performance
  - Reduced size
  - Lower cost per transistor
  - Increased power and heat challenges (especially leakage)



##  *Logic Circuits*

Logic circuits are essential for processing binary data. They consist of **inputs**, **outputs**, and **interconnections** defined by logic rules.

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/logic_circuit.PNG?raw=true" width="400" alt="Logic Circuit Diagram">
</p>



### Functional vs. Timing Specifications

#### Functional Specification
- Describes **what** the circuit does
- Input-output relationship via logic equations or truth tables

####  Timing Specification
- Describes **delay** between inputs changing and outputs responding
- Includes:
  - Propagation delays
  - Combination delays
  - Clock constraints (for sequential circuits)



###  Types of Logic Circuits

#### 1. **Combinational Logic Circuits**
- Output depends on **combination of current inputs**
- No memory element
- Examples: AND, OR, NOT, Multiplexer, Adder etc.

#### 2. **Sequential Logic Circuits**
- Output depends on **current inputs and past states**
- Uses memory elements (e.g., flip-flops)
- Examples: Counters, Shift Registers, FSMs (Finite State Machines)

##  *Boolean Algebra*

**Boolean algebra** is the mathematics of binary logic used in digital circuits. It defines operations, identities, and simplifications that help us analyze and design logic circuits.

####  Boolean Algebra Laws

<div align="center">

| **Law Name**           | **OR Form**                           | **AND (Dual) Form**                    |
|------------------------|----------------------------------------|----------------------------------------|
| Identity Law           | X + 0 = X                              | X · 1 = X                              |
| Null Law               | X + 1 = 1                              | X · 0 = 0                              |
| Idempotent Law         | X + X = X                              | X · X = X                              |
| Involution Law         | (X̅)̅ = X                               | (X̅)̅ = X                               |
| Complement Law         | X + X̅ = 1                             | X · X̅ = 0                             |
| Commutative Law        | X + Y = Y + X                          | X · Y = Y · X                          |
| Associative Law        | (X + Y) + Z = X + (Y + Z)              | (X · Y) · Z = X · (Y · Z)              |
| Distributive Law       | X + (Y · Z) = (X + Y) · (X + Z)        | X · (Y + Z) = X · Y + X · Z            |
| De Morgan’s Law        | (X · Y)̅ = X̅ + Y̅                      | (X + Y)̅ = X̅ · Y̅                      |

</div>



####  Boolean Simplification Theorems

<div align="center">

| **Theorem Name**        | **OR Form**                              | **AND (Dual) Form**                  |
|-------------------------|------------------------------------------|--------------------------------------|
| Absorption              | X + X·Y = X                               | X · (X + Y) = X                      |
| Combining Terms         | X·Y + X·Y̅ = X                            | (X + Y) · (X + Y̅) = X               |
| Redundancy              | (X · Y̅) + Y = X + Y                      | (X + Y̅) · Y = X · Y                 |
| Inversion Pairing       | X + X̅·Y = X + Y                          | X · (X̅ + Y) = X · Y                 |
| Elimination             | X + X̅·Y = X + Y                          | X · (X̅ + Y) = X · Y                 |

</div>


### Boolean Terms

- **Complement**  
  Variable with a bar over it.  
  Examples: X̅ 

- **Literal**  
  A variable or its complement in a Boolean expression.  
  Examples: `A`, `A̅`

- **Implicant**  
  A product term (AND) of literals.

- **Minterm**  
  A product (AND) term that includes all input variables.  
  For 2 variables `A` and `B`:  
  - `A̅B` is a minterm that is true only when `A=0` and `B=1`.

- **Maxterm**  
  A sum (OR) term that includes all input variables .  
  For 2 variables `A` and `B`:  
  - `A + B̅` is false only when `A=0` and `B=1`.


## *Canonical Forms: SOP & POS*

Canonical forms express Boolean functions in standard formats.

###  Sum of Products (SOP)
- OR of AND terms (minterms)
- True for output = 1
- Example:  
  F(A, B, C) = A̅·B·C + A·B̅·C̅ + A·B·C

###  Product of Sums (POS)
- AND of OR terms (maxterms)
- True for output = 0
- Example:  
  F(A, B) = (A + B̅) · (A̅ + B)


## *Some Basic Combinational circuits*
###  1. Decoder

- A **decoder** decodes an input pattern 
- n inputs and 2^n outputs. Only one the outputs evaluates to one depending on the pattern that comes on the input.

####  Example: 2-to-4 Line Decoder

- **Inputs:** 2 (A1, A0)  
- **Outputs:** 4 (D0–D3)
<div align="center">

| A1 | A0 | D0 | D1 | D2 | D3 |
|----|----|----|----|----|----|
| 0  | 0  | 0  | 0  | 0  | 1  |
| 0  | 1  | 0  | 0  | 1  | 0  |
| 1  | 0  | 0  | 1  | 0  | 0  |
| 1  | 1  | 1  | 0  | 0  | 0  |

</div>
- Only one output is HIGH for each input combination.



### 2. Multiplexer (MUX)

A **multiplexer** selects one of `N` input lines and connects it to a **single output**, based on **select lines**.

####  Basic Use:

- **MUX = Selector**
- **1 Output, N Inputs, log₂N Select lines**

####  Example: 2-input AND gate using 2-to-1 MUX

<div align="center">

| A | B | Select (S) | MUX Output |
|---|---|-------------|------------|
| 0 | 0 | 0           | 0          |
| 0 | 1 | 0           | 0          |
| 1 | 0 | 1           | 0          |
| 1 | 1 | 1           | 1          |

</div>

You can implement an AND gate by wiring MUX inputs such that the output = `A • B`.



###  3. Full Adder

A **full adder** adds three bits: `A`, `B`, and carry-in (`Cin`), producing a **sum** and **carry-out** (`Cout`).

#### Truth Table

<div align="center">

| A | B | Cin | Sum | Cout |
|---|---|-----|-----|------|
| 0 | 0 |  0  |  0  |  0   |
| 0 | 0 |  1  |  1  |  0   |
| 0 | 1 |  0  |  1  |  0   |
| 0 | 1 |  1  |  0  |  1   |
| 1 | 0 |  0  |  1  |  0   |
| 1 | 0 |  1  |  0  |  1   |
| 1 | 1 |  0  |  0  |  1   |
| 1 | 1 |  1  |  1  |  1   |

</div>

#### Logic Equations:
- **Sum = A ⊕ B ⊕ Cin**  
- **Cout = AB + BCin + ACin**


### 4. PLA – Programmable Logic Array

A **PLA** is a configurable logic device used to implement **combinational logic circuits**.

- Consists of:
  - A programmable **AND array** (for minterms).
  - A programmable **OR array** (to combine minterms into functions).

- Useful when:
  - You want to implement multiple Boolean functions efficiently.
  - You need flexibility in logic design without using many gates manually.

####  Example:
To implement `F1 = A • B + A̅ • C` and `F2 = A + B • C`, a PLA would:
- Use a shared set of product terms.
- Connect these via OR gates to generate F1 and F2 outputs.



---

# *Lecture #3: Data Processing & Storage Elements & Seqential circiuts*I


## *More Combinational Circuits*

### 1. Comparator

A **comparator** is a combinational logic circuit that compares two binary numbers and determines their relative magnitudes.

####  Example: 4-bit Equality Comparator

- Compares two 4-bit inputs: `A[3:0]` and `B[3:0]`
- Output is high (`1`) if both inputs are equal.

##### Logic:
```
A == B ⇨ (A3 ⊕ B3̅) · (A2 ⊕ B2̅) · (A1 ⊕ B1̅) · (A0 ⊕ B0̅)
```

##### Simplified Equality Logic:
```
A == B ⇨ (A3 XNOR B3) · (A2 XNOR B2) · (A1 XNOR B1) · (A0 XNOR B0)
```



### 2. Arithmetic Logic Unit (ALU)

The **ALU** is a fundamental building block of digital systems. It combines **arithmetic** and **logic operations** into a single hardware unit.

- Performs **one operation at a time**
- Controlled by **mux or operation codes**
- It's symbol is:

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/alu.PNG?raw=true" alt="ALU Symbol" width="200">
</p>

These are the operations it performs and the internal logic of ALU using the circuits explained above: 

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/al%20internal.PNG?raw=true" alt="ALU Internal Logic" width="500">
</p>

###  3. Tri-State Buffer

A **tri-state buffer** allows **gating different signals** onto a wire using an enable signal. It has three output states:
- Logic 0
- Logic 1
- High Impedance (Z) — disconnected from the line

####  Symbol

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/tri_buffer.PNG?raw=true" width="150" alt="Tri-State Buffer Symbol">
</p>

####  Truth Table

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/Tri_table.PNG?raw=true" width="150" alt="Tri-State Buffer Truth Table">
</p>

- If **Enable = 0**, output **Y = Z** (floating)
- If **Enable = 1**, output **Y = A**

####  Example: MUX using Tri-State Buffers

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/mux_using_buffer.PNG?raw=true" width="250" alt="MUX using Tri-State Buffers">
</p>


## *Simplifications*
###  Logic Simplification

Logic simplification helps reduce:
- **Gate count**
- **Power consumption**
- **Delay**

It aims to rewrite Boolean expressions in simpler forms without changing functionality.



###  Karnaugh Maps (K-Maps)

A **K-Map** is a visual method for minimizing Boolean expressions.

- Each cell corresponds to a **minterm**
- Adjacent cells differ by **1 variable**
- Group **1s** in powers of 2 (1, 2, 4, 8...)
- Each group represents a **simplified product term**

Helps in:
- Identifying common patterns
- Eliminating redundant variables
- Deriving minimal SOP or POS forms
## *Storing Elemetns*
### Storing Information in Circuits

To design memory, circuits must be able to capture and retain binary data.

### 1. Cross-Coupled Inverters

- A pair of inverters connected in a feedback loop.
- Forms a bistable circuit with two stable output states.
- It looks like this: 

<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/croos_coupled_invertors.PNG?raw=true" width="150" alt="Cross Coupled Inverters">
</p>

There are two States:

- **Stable States:**
  - Q = 0, Q̅ = 1
  - Q = 1, Q̅ = 0
- **Metastable (Unstable) State:**
  - The circuit may oscillate or produce undefined outputs.
  - Not reliable for storing data in this condition.


### 2. R-S (Reset-Set) Latch

- Built using cross-coupled **NAND** gates
- Stores data in `Q` (with complement `Q'`)

These are the inputs:
- **S (Set)**:  
  `S = 0`, `R = 1` → `Q = 1`

- **R (Reset)**:  
  `R = 0`, `S = 1` → `Q = 0`

- **Idle**:  
  `S = 1`, `R = 1` → `Q` holds previous value

- **Invalid**:  
  `S = 0`, `R = 0` → Forbidden state

#### Why is `S = R = 0` Invalid?
- Causes `Q = Q' = 1`, violating the rule `Q = NOT Q'`
- May lead to metastability (oscillations)

#### Symbol & Truth Table
<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/sr_Latch_.PNG?raw=true" width="400" />
</p>



### 3. Gated D Latch

- Solves the R-S latch problem using extra NAND gates
- Takes input **D** (Data) and **WE** (Write Enable)

#### Behavior:
- When `WE = 1`: `Q = D` → Data is latched
- When `WE = 0`: `Q` holds its previous value

- Ensures `S` and `R` are **never 0 at the same time**

#### Symbol & Truth Table
<p align="center">
  <img src="https://github.com/rmknae/Meds_repo/blob/main/Digital%20Design%20Onur's%20lectures/pngs/g_sr_latch.PNG?raw=true" width="400" />
</p>


### 4. Register

- A **register** is a group of D latches used to store multiple bits
- All D latches share a common **Write Enable (WE)** signal

#### Example: 4-bit Register
- Inputs: `D₀, D₁, D₂, D₃`
- Outputs: `Q₀, Q₁, Q₂, Q₃`
- When `WE = 1`, entire `D[3:0]` is stored into `Q[3:0]` simultaneously
- 
### 5. Memory

- Memory consists of locations that can be **written to** or **read from**.



#### Example: Memory Array with 4 Locations

- Each location is identified using a **unique address**
- For 4 locations: `log₂(4) = 2` address bits are needed

#### Key Terms

- **Addressability**: Number of bits stored in each memory location  
  → In this example: **8 bits** per location

- **Address Space**: The complete set of unique memory locations  
  → For 4 locations, address space has 4 entries

- **Scalability**:  
  Real-world memory is **much larger** (e.g., **billions** of locations)

#  *Lecture 4: Sequential Logic Design II*



## *Sequential Logic*
- Sequential circuits **depend on current and past inputs** (have memory).
- Examples of memory elements:
  - Cross-coupled inverter
  - R-S Latch, Gated D Latch
  - D Flip-Flop, Register, Memory



## *Finite State Machines (FSMs)*
### Components:
1. **Finite number of states**
2. **Finite inputs and outputs**
3. **State transition logic**
4. **Output logic**

### FSM Building Blocks:
- **Next state logic** (combinational)
- **State register** (sequential - D Flip-Flops)
- **Output logic** (combinational)



## *D Flip-Flop*
- Captures value on **rising edge** of the clock.
- Maintains stable output during rest of the clock cycle.
- Key to implementing edge-triggered state registers.



## *FSM Example: Traffic Light Controller*
- Inputs: `TA`, `TB` (traffic sensors)
- Outputs: `LA`, `LB` (traffic lights)
- FSM type: **Moore Machine** (outputs depend only on state)
- Transition diagram and state/output tables defined

## *FSM Design Procedure*
1. Identify all states
2. Define transitions and outputs
3. Create:
   - **State transition diagram**
   - **State transition table**
   - **Output table**
4. Select suitable **state encoding** method:
   - Binary encoding
   - One-hot encoding
   - Output-based encoding



## *Moore vs. Mealy FSMs*
- **Moore**: output depends only on state
- **Mealy**: output depends on state **and** input



##  *FSM Optimization Techniques*
- Simplify next state and output logic using logic equations
- Trade-offs in encoding:
  - One-hot: simpler logic, more flip-flops
  - Binary: fewer flip-flops, more logic
  - Output encoding: reduces output logic in Moore machines



##  *Conclusion*
- FSMs are a fundamental model for designing sequential systems
- Use flip-flops (especially D) as basic building blocks for state registers
- Carefully choose encoding and transition logic for efficiency

# *Lecture 5: HDL & Verilog: Design and Timing Concepts*

## *Hardware Description Languages & Verilog II*

### 1. Verilog Design Methodologies

- Hierarchical design is emphasized: complex modules are built from simpler modules using top-down or bottom-up approaches.
- Verilog allows both structural (gate-level) and behavioral (functional) modeling.

### 2. Structural Modeling

- Modules can be instantiated multiple times to build larger systems.
- Short-form instantiations should be avoided for maintainability.
- Predefined gate primitives (e.g., `and`, `or`, `not`) are supported.

### 3. Behavioral Modeling

- `assign` statements describe logic using operators: `&`, `|`, `^`, `~`, `? :`.
- Supports bitwise operations, reductions, and conditional assignments.

### 4. Multi-bit Signals (Buses)

- Syntax: `[31:0] a` for a 32-bit signal.
- Bit slicing and duplication via `{}` and `{n{expr}}`.

### 5. Parameterization

- Modules can be parameterized to support reuse across different bit widths.

```verilog
module mux2 #(parameter width = 8)(...);
```

### 6. Sequential Logic Basics

- Requires `always` blocks, `posedge`/`negedge`, and `reg` types.
- D flip-flops model memory behavior.
- Use `<=` (non-blocking) inside `always` blocks for sequential logic.

### 7. Reset Strategies

- Asynchronous Reset: triggered independently of clock.
- Synchronous Reset: triggered only on clock edges.

### 8. Best Practices

- Use consistent naming and bus ordering (`[MSB:LSB]`).
- Define one module per file and match file names to module names.

## *Timing and Verification*

### 1. Combinational Circuit Timing

- Real circuits have delays due to transistor switching times.
- Defined by:
  - Propagation delay (tpd) – max delay until output is stable.
  - Contamination delay (tcd) – min delay until output starts to change.

### 2. Glitches

- Arise due to unequal path delays.
- Often harmless but important in sensitive designs.

### 3. Sequential Timing Constraints

- Flip-flops require:
  - Setup time (tsetup): input must be stable before clock edge.
  - Hold time (thold): input must remain stable after clock edge.
  - Clock-to-Q delays: tpcq and tccq.

### 4. Timing Violations

- Setup violation: causes data corruption.
- Hold violation: harder to fix post-fabrication; must ensure `tccq + tcd > thold`.

### 5. Clock Skew

- Clock signals don’t arrive simultaneously everywhere.
- Affects both setup and hold time constraints.

### 6. Circuit Verification

- Simulation is essential:
  - Functional simulation (HDL-level).
  - Timing simulation (includes delay modeling).
- Formal verification and testbenches ensure correctness.
- Testbenches:
  - Generate inputs.
  - Check outputs.
  - Use simulation-only constructs like `#10`, `$display`.


---

# *Lecture 6: Timing and Verification II*

## *Focus Topics*
- Combinational and sequential timing analysis
- Setup and hold time constraints
- Glitches and how to handle them
- Circuit verification techniques
- Testbenches and Verilog simulation
- Clock skew and timing violations



## *Combinational Circuit Timing*
- Circuit delay arises from transistor switching time and wire delays.
- Delay types:
  - **Propagation delay (tpd):** maximum time from input to stable output
  - **Contamination delay (tcd):** minimum time until output begins to change
- **Critical path:** longest tpd in the circuit
- Timing affected by environmental conditions and design variations



## *Glitches*
- Occur when input changes cause momentary incorrect output values
- Caused by unequal path delays
- Can be visualized using Karnaugh maps
- Glitch avoidance increases complexity and area, and is not always necessary



## *Sequential Circuit Timing*
- D flip-flops require inputs to be stable for:
  - **tsetup** before clock edge
  - **thold** after clock edge
- Output of flip-flop is delayed by:
  - **tpcq (propagation clock-to-q)**
  - **tccq (contamination clock-to-q)**



## *Setup Time Constraint*
- To avoid setup violations:

```
Tc > tpcq + tpd + tsetup
```

- Tc (clock period) is determined by the longest data path delay



## *Hold Time Constraint*
- To avoid hold violations:

```
tccq + tcd > thold
```

- Short paths must have minimum delay to ensure hold is maintained



## *Clock Skew*
- Clock signals arrive at different components at slightly different times
- Affects both setup and hold constraints:
- Increases tsetup and thold margins
- Must be minimized via intelligent clock network design



## *Circuit Verification*
- Ensures both logical correctness and timing compliance
- High-level functional simulation using Verilog or other languages
- Low-level circuit simulation for detailed timing and power analysis



## *Functional Verification*
- Use **testbenches** to simulate DUT (Device Under Test)
- Simple testbench: hardcoded input/output
- Self-checking testbench: automatically checks expected outputs
- Testvectors: read from a file
- Automatic testbench: uses a golden model for correctness
- Testbench types:
  - Manual
  - Self-checking
  - Automatic with testvectors
  - Automatic with golden model



## *Timing Verification*
- Performed after synthesis using tools like Xilinx Vivado
- Tools report:
  - Worst-case path delay
  - Maximum operating frequency
  - Timing violations


## *Meeting Timing Constraints*
- Optimize logic on critical paths
- Add buffers to short paths for hold violations
- Manual iteration may be needed to meet tight timing
- Design principles:
  - **Critical path design**: shorten the longest logic path
  - **Balanced design**: evenly distribute delay
  - **Optimize for common case**, but don't ignore edge cases



---







