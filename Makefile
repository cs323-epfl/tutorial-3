
All: fork-wait open-write-close sighand sigstop-sigcont syscall

fork-wait: fork-wait.c
	gcc fork-wait.c -g -O0 -o fork-wait

open-write-close: open-write-close.c
	gcc open-write-close.c -g -O0 -o open-write-close

sighand: sighand.c
	gcc sighand.c -g -O0 -o sighand

sigstop-sigcont: sigstop-sigcont.c
	gcc sigstop-sigcont.c -g -O0 -o sigstop-sigcont

syscall: syscall.c
	gcc syscall.c -g -O0 -o syscall

clean:
	rm fork-wait open-write-close sighand sigstop-sigcont syscall
