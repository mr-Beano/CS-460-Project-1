# CS 460 Operating Systems Project 1 - Syscall Tracing and Process Listing

Dean Feller 2/1/2024

## Part 1: System Call Tracing
The first task was to modify the xv6 kernel to print a line for each system call invocation. When tracing is enabled, each line of output will show the name of the system call and its return value, like this:

    fork -> 2
    exec -> 0
    open -> 3
    close -> 0
    $ write -> 1
    write -> 1

### Modified Files:
- Makefile
- syscall.c
- syscall.h
- user.h
- usys.S
- trace.c

## Part 2: Listing Current Processes
The second task was to add a command for listing information about the current processes running. When run, it prints a table of the processes, including their ID, parent's ID (-1 if no parent), state, size, and name, like so:

    $ ps
    PID  PPID  STATE  SIZE  NAME
    1  -1  sleeping  12288  init
    2  1  sleeping  16384  sh
    3  2  running  45056  ps

### Modified Files:
- Makefile
- syscall.c
- syscall.h
- sysproc.c
- proc.c
- uproc.h
- user.h
- usys.S
- defs.h
- ps.c

## Run Instructions

### Running xv6
- Use `make qemu-nox` to start xv6
- In another terminal, use `pkill qemu` to stop xv6
- Use `make clean` to remove generated files

### Tracing
To toggle tracing, run `trace` in xv6.

### Processes
To list the current processes, run `ps` in xv6.

Note: Since the original project instructions called for the trace and ps commands to be implemented separately, I've put them on their own branches.