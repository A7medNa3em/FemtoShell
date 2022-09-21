# FemtoShell

## Comands 
### Create statc libarry for helper functions fact(n) and fin(n)
  $ gcc -shared -fpic -o libhelper.so helper.c
### Compile main project of static libarry libhelper.so
  $ gcc -o  main.c ./libhelper.so
