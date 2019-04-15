# Shape Modeling and Geometry Processing - Course Assignments

## Student data

Name: 'Your real name'  
Legi-Nr: 'Your legi number'

Follow the [instructions](#workflow) to updated your private repository.

## Assignments Overview

[Assignment 1](assignment1) (Due date: 15.03.2019 08:00)  
[Assignment 2](assignment2) (Due date: 29.03.2019 09:00)  
[Assignment 3](assignment3) (Due date: None (optional task))  
[Assignment 4](assignment4) (Due date: 03.05.2019 08:00)  
[Assignment 5](assignment5) (Due date: 17.05.2019 09:00)  

## General Rules and Instructions

### Plagiarism Note and Late Policy
Copying code (either from other students or from external sources) is strictly prohibited! We will be using automatic anti-plagiarism tools, and any violation of this rule will lead to expulsion from the class. Late submissions will generally not be accepted. In case of serious illness or emergency, please notify Michael and provide a relevant medical certificate.

### Provided Libraries
For each assignment, you will use the geometry processing library [libigl](https://github.com/libigl/libigl), which includes implementations of many of the algorithms presented in class. The libigl library includes a set of tutorials, an introduction which can be found [online](https://libigl.github.io/tutorial/). You are advised to look over the relevant tutorials before starting the implementation for the assignments; you are also encouraged to examine the source code of all the library functions that you use in your code to see how they were implemented. To simplify compilation, we will use libigl as a header-only library (note that, if you prefer, you can compile it into a set of static libraries for faster builds at your own risk (this can be brittle on some platforms). We already included libigl as a git submodule in the course assignment repository [https://github.com/eth-igl/GP2019-Assignments.git](https://github.com/eth-igl/GP2019-Assignments.git) and you don't need to download it yourself. All further dependencies of libigl (like Eigen) are included as submodules in the directory 'libigl/external/' No libraries apart from those are permitted unless stated otherwise.

### Installing Git and CMAKE
Before we can begin, you must have Git running, a distributed revision control system which you need to handin your assignments as well as keeping track of your code changes. We refer you to the online [Pro Git book](https://git-scm.com/book/en/v2) for more information. There you will also find [instructions](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git]) on how to to install it. On windows we suggest using [git for windows](https://git-for-windows.github.io/).

CMake is the system libigl uses for cross-platform builds. If you are using Linux or macOS, I recommend installing it with a package manager instead of the CMake download page. E.g. on Debian/Ubuntu:
```
sudo apt-get install cmake
```
or with MacPorts on macOS:
```
sudo port install cmake.
```
On Windows you can download it from:
[https://cmake.org/download/](https://cmake.org/download/)

### Cloning the Assignment Repository
Before you are able to clone your private assignment repository, you need to have a active [Github](https://github.com/) account. Then you can create your own private online repository by following this link: https://classroom.github.com/a/8vO7LxYa

In the next step you need to clone it to your local harddrive
```
git clone --recursive https://github.com/eth-igl/gp19-'Your_Git_Username'.git
```
'Your_Git_Username' needs to be replaced accordingly. This can take a moment.

Next, cd into the newly created folder, and add the base assignment repository as a remote:
```
cd gp19-'Your_Git_Username'
git remote add base https://github.com/eth-igl/GP2019-Assignments.git
```
Now you should have your local clone of the assignment repository ready. Have a look at the new repository folder and open the 'README.md'. It contains the text you are just reading. Please fill in your name and student number at the top of this file and save. Then you need to stage and commit this changed file:
```
git add README.md
git commit -m "Adjust README.md"
git push
```
You should now be able to see your name online on your private repository: https://github.com/eth-igl/gp19-'Your_Git_Username'

### Building Each Assignment
In the assignment repository you will find the different assignment directories 'assignmentX'. For now you only see the first one 'assignment1'. To compile the assignment code we will use the CMake building system.

Create a directory called build in the assignment directory, e.g.:
```
cd assignment1; mkdir build
```
Use CMake to generate the Makefiles needed for compilation inside the build/ directory:
```
cd build; cmake -DCMAKE_BUILD_TYPE=Release ../
```
On windows use the CMAKE gui with the buttons Configure and Generate.

Compile and run the executable, e.g.:
```
make && ./assignment1 <some mesh file>
```
Or use your favorite IDE.

If you encounter any problems, please create an issue on the assignments repository on GitHub or ask the assistant in the exercise session.

### Workflow
In general, you should use Git to commit your edits as often as possible. This will help you with backtracking bugs and also serve as a backup mechanism. For more information we refer you to the [Pro Git book](https://git-scm.com/book/en/v2/Git-Basics-Recording-Changes-to-the-Repository).

Every new assignment needs to be pulled from the base repository:
```
git pull base master
```

To pull bug fixes or changes you can do the following steps:
```
git pull base master
rm -r libigl
git submodule sync
git submodule update --init --recursive
```

### Solution Submission
In every assignment directory you will find a 'README.md' file in which we will specify the required screenshots and console outputs. You should briefly summarize and report your results and observations, or discuss possible problems. For a quick introduction of the Markdown syntax see: https://guides.github.com/features/mastering-markdown/

To submit your final solution of the assignment please add the following commit message: "Solution assignment X". E.g:
```
git commit -m "Solution assignment X"
git push
```

**The solutions must be submitted before the corresponding demo session. Late submissions will not be accepted.**
