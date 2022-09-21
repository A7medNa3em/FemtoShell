# FemtoShell

## Comands 
### Create dynamic libarry for helper functions fact(n) and fin(n)
  $ gcc -shared -fpic -o libhelpf.so helper.c
### Compile main project of dynamic libarry libhelper.so
  $ gcc -o femtoshell main.c ./libhelpf.so

## Example output
![image](https://user-images.githubusercontent.com/67152047/191567650-c9d368f2-7b45-4bd8-8714-65f3c315ee92.png)



