CS 460 - Operating Systems
Project 1 - Syscall tracing and ps command
Dean Feller - 2/1/2024

To run xv6, use: make qemu-nox
To stop xv6, in another terminal use: pkill qemu

Part 1: syscall tracing

	Modified files:
	- Makefile
	- syscall.c
	- syscall.h
	- user.h
	- usys.S
	- trace.c

	To run in xv6, use: trace


Part 2: listing processes

	Modified files:
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

	To run in xv6, use: ps

Since the original project instructions called for the trace and ps commands
to be implemented separately, I've put them on their own branches.