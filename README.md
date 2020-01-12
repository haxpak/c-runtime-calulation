# c-runtime-calulation

- As part of a project I was required to calculate runtime of a C program multiple times and across multiple files.

- my initial approach was to make the calulations time and again. but it was best achieved by making a header file.

- I decided to share the timecalc.h

- Very useful. To use in your project just add a refence 

```c
#include "timecalc.h"
```

- You will need to make amendment to your makefile to include the C runtime library.

```makefile
gcc ....... -lrt
```

- In your code just call the startTimer() and endTimer() functions

```c
startTimer();
endTimer();
```

```cosole
[Out] : [+] Time elapsed was 121854461276ns or 121.854461276s
```