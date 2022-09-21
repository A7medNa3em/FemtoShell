# FemtoShell

## Comands 
### Create statc libarry for helper functions fact(n) and fin(n)
  $ gcc -shared -fpic -o libhelper.so helper.c
### Compile main project of static libarry libhelper.so
  $ gcc -o femtoshell main.c ./libhelper.so

## Example output
![image](https://user-images.githubusercontent.com/67152047/191567650-c9d368f2-7b45-4bd8-8714-65f3c315ee92.png)
