# GeneProject #

This Gene Project is a hobby brainchild born originally due to a hatred for punnett squares and the desire to trace alleles through multiple generations. It grew into a desire to emulate artificial selection through code (not IN code, I'm not doing AI code-writing-code), selecting and breeding in order to produce desired results. The program is built using C++ (using very intro level code), uses the G++ compiler, uses GLFW and Glad in order to provide platform-independent graphics for the user interface.  

### Code Information
- Made in VSCode
- Uses G++ terminal code in order to compile (MinGW must be installed in the case of Windows)
- Currently uses a .bat (Windows Batch) shell script
- Uses a .exe file

#
\
This program is intended to be designed in a manner that:
1. Allows any individual interested to use the program
2. Simulates real-world applications of genomes 
3. Is (theoretically, at least) infinitely expandable in order to suit anyone's needs
4. User-friendly

\
In order to fulfill these roles, the program MUST:

- Be platform-independent (Currently using the G++ compiler, however due to being a Windows user I cannot currently test, debug and build around Unix-based systems. See Makefile under To-Do List)
- Simulate:
  - Breeding of two genomes and saving of certain desired genomes using allele pairs
  - Support co-dominance and incomplete dominance
- The program must be modular and easily expandable
- The program needs to be user-friendly. If you send someone digging through the code then at least reward them with a real user interface

#

### Completed:
- GLFW, Glad integrated (Graphics interface, in order to ty and fulfill the first role)
  - Basic file structure built, including libraries for Glad, GLFW, and personal libraries
  - Window library, Generate library (contains the random allele sequence generator, the allele reader, and the phenotype transcriber)
  - Currently saves the phenotype to a .txt, can easily be altered to also include gene sequence
- Compiler has been based aroung G++ in order to fulfill the first role
- Genome simulation currently completed:
  - Randomly generate allele sequences, read and transcribe to gene sequences, and store phenotype sequences

#

### To Do List
- Genome simulation currently under development:
  - Breeding two genomes and calculating both the phenotype %, genotype %, as well as randomly generate genomes
  - Saving genomes (can be added to the phenotype.txt)
- Output to Window instead of Terminal
  - Add Font Library (And Handler, if needed), requires proper pointing and linking
- Debug & verify platform-independent compilation, execution & graphical interface
- The UI
  - There is an intention of "Throwing a game overlay" on top of the simulator (preferably once the simulator is complete, things like growing the phenotypes for profit, choosing where you live influencing the growing environment, therefore altering which phenotypes will suit you.)
  - Something turn-based, like 1 turn = 1 week (subj. to change), you can control light level, water level, fertilizer, etc., move to the next week, reevaluate and repeat.
  - Selling would depend upon (maybe a dynamic) market value, genotypes might have hidden values that influence quality, how you process can alter the quality, etc.
  - more "farming sim" than "game," is really meant to be more of an engaging user interface

#

### If you are interested in helping me with the project
- Any coders who can help debug and run the code successfully cross-platform
- Able to shrink C++ while still keeping it modular, legible & expandable
- Pretty much anyone who made it this far, is interested in assisting the project, and can find something in the To Do List that they want to do.
You can find my information on GitHub. 
