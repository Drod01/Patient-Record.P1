finalExecutable: main.o
  gcc main.o -o finalExecutable
main.o: project.c
  gcc -c project.c -o main.o
clean:
  rm -rf *.o
  rm finalExecutable
  