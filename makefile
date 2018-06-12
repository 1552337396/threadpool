test.out: *.o
	gcc -o test.out *.o -pthread
*.o: *.c *.h
	gcc -c *.c
clean:
	rm -rf *.o *.out
