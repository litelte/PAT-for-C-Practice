<!--

 * @Date: 2020-04-19 14:08:17
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:08:44
 * @FilePath: /CProject/zju_c/week13/week13.md
 * @Description: 第13周的学习内容的知识点
 -->

### 格式化的输入和输出

- printf
  - %[][][flag] [width] [.prec] [hIL]type
- scanf
  - %[flag]type

对于%[][][flag] [width] [.prec] [hIL]type

**Flag**

| Flag      | 含义         |
| --------- | ------------ |
| -         | 左对齐       |
| +         | 在前面放+或- |
| （space） | 正数留空     |
| 0         | 0填充        |

```c
/*
 * @Date: 2020-04-19 14:23:59
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:32:27
 * @FilePath: /CProject/zju_c/week13/1.c
 * @Description: 格式化输入和输出flag
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%9d\n", 123);
    printf("%-9d\n", 123);
    printf("%09d\n", 123);
    printf("Hello World!\n");
    return 0;
}
/* 
      123
123      
000000123
Hello World!
 */
```

**width或prec**

| width或prec | 含义                       |
| ----------- | -------------------------- |
| number      | 最小字符数                 |
| *           | 下一个参数是字符数         |
| .number     | 小数点后的位数             |
| .*          | 下一个参数是小数点后的位数 |

```c
/*
 * @Date: 2020-04-19 14:35:02
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:40:20
 * @FilePath: /CProject/zju_c/week13/2.c
 * @Description: width或prec
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 整个输出占9位，小数点后有两位
    printf("%9.2f\n", 123.0);
    // 6被填入*，而123则被填入d
    printf("%*d\n", 6, 123);
    printf("Hello World!\n");
    return 0;
}

/* 
   123.00
   123
Hello World!
 */
```

hlL类型修饰

| 类型修饰 | 含义        |
| -------- | ----------- |
| hh       | 单个字节    |
| h        | short       |
| l        | long        |
| ll       | long long   |
| L        | long double |

```c
/*
 * @Date: 2020-04-19 14:42:08
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:46:33
 * @FilePath: /CProject/zju_c/week13/3.c
 * @Description: 类型修饰
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%hhd\n", 12345);
    printf("%9.2f\n", 123.0);
    printf("Hello World!\n");
    return 0;
}
/* 
运行结果：
57
   123.00
得到57的原因是：
拿int类型的数
12345的16进制为3039，取最后面的两位39，39的十进制为57
 */

```

字符类型type

| type | 用于               | type | 用于            |
| ---- | ------------------ | ---- | --------------- |
| i或d | int                | g    | float           |
| u    | unsigned int       | G    | float           |
| o    | 八进制             | a或A | 十六进制浮点    |
| x    | 十六进制           | c    | char            |
| X    | 字母大写的十六进制 | s    | 字符串          |
| f或F | float，6           | P    | 指针            |
| e或E | 指数               | n    | 读入/写出的个数 |

```c
/*
 * @Date: 2020-04-19 14:50:12
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:54:59
 * @FilePath: /CProject/zju_c/week13/4.c
 * @Description: 字符类型
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("%hhd%n\n", (char)12345, &num);
    printf("%d%n\n", 12345, &num);
    printf("%dty%n\n", 12345, &num);
    printf("%d\n", num);
    printf("Hello World!\n");
    return 0;
}

/* 
57
12345
12345ty
7
Hello World!
 */
```

**scanf: %[flag]type**

| flag | 含义       | flag | 含义        |
| ---- | ---------- | ---- | ----------- |
| *    | 跳过       | l    | long,double |
| 数字 | 最大字符数 | ll   | long long   |
| hh   | char       | L    | long double |
| h    | short      |      |             |

```c
/*
 * @Date: 2020-04-19 14:57:22
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:59:22
 * @FilePath: /CProject/zju_c/week13/5.c
 * @Description: scanf字符类型
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%*d%d",&num);
    printf("%d\n", num);
    printf("Hello World!\n");
    return 0;
}

/* 
123 234
234
Hello World!
 */
```

**type**

| type    | 用于                         | type  | 用于           |
| ------- | ---------------------------- | ----- | -------------- |
| d       | int                          | s     | 字符串（单词） |
| i       | 整数，可能为十六进制或八进制 | [...] | 所允许的字符   |
| u       | unsigned int                 | p     | 指针           |
| o       | 八进制                       | x     | 十六进制       |
| a,e,f,g | float                        | c     | char           |

```c
/*
 * @Date: 2020-04-19 15:02:35
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 15:06:10
 * @FilePath: /CProject/zju_c/week13/6.c
 * @Description: scanf中的字符类型
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%i",&num);
    printf("%d\n", num);
    printf("Hello World!\n");
    return 0;
}
/* 
0x12
18
Hello World!
 */
```

printf和scanf的返回值

- 读入的项目数
- 输出的字符数
- 在要求严格的程序中，应该判断每次调用scanf或printf的返回值，从而了解程序运行中是否存在的问题

```c
/*
 * @Date: 2020-04-19 15:08:21
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 15:10:49
 * @FilePath: /CProject/zju_c/week13/7.c
 * @Description: printf和scanf的返回值
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int i1 = scanf("%i", &num);
    int i2 = printf("%d\n", num);
    printf("%d:%d\n", i1, i2);
    printf("Hello World!\n");
    return 0;
}
/* 
1234
1234
1:5
Hello World!
 */
```

### 文件输入输出

使用>和<进入输出重定向

```shell
➜  week13 ./7            
123
123
1:4
Hello World!
➜  week13 ./7 > 12.out
12345
➜  week13 more 12.out 
12345
1:6
Hello World!
➜  week13 cat > 12.in   
12345
➜  week13 more 12.in 
12345
➜  week13 ./7 < 12.in 
12345
1:6
Hello World!
➜  week13 ./7 < 12.in > 12.out
➜  week13 more 12.out
12345
1:6
Hello World!
➜  week13 ls
1    12.in   2    3    4    5    6    7    week13.md
1.c  12.out  2.c  3.c  4.c  5.c  6.c  7.c
```

FILE

> - FILE* fopen(const char * restrict path,const char * restrict mode);
> - int fclose(FILE *stream)
> - fscanf(FILE*, ...)
> - fprint(FILE*, ...)

```c
FILE* fp = fopen("file","r");
if(fp){
    fscanf(fp,...)
    fscolse(fp);
}
else{
    ...
}
```

```c
/*
 * @Date: 2020-04-19 15:30:30
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 15:35:46
 * @FilePath: /CProject/zju_c/week13/8.c
 * @Description: 打开文件
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp = fopen("zju_c/week13/temp.txt", "r");
    if (fp)
    {
        int num;
        fscanf(fp, "%d", &num);
        printf("%d\n", num);
        fclose(fp);
    }
    else
    {
        printf("无法打开文件\n");
    }

    printf("Hello World!\n");
    return 0;
}
/* 
12345
Hello World!
 */
```

### fopen

| r    | 打开只读                                           |
| ---- | -------------------------------------------------- |
| r+   | 打开独写，从文件头开始                             |
| w    | 打开只写，如果不存在则新建，如果存在则清空         |
| w+   | 打开读写。如果不存在则新建，如果存在则清空         |
| a    | 打开追加。如果不存在则新建，如果存在则从文件尾开始 |
| ..x  | 只新建，如果文件已存在则不能打开                   |

### 二进制文件

- 其实所有的文件最终都是二进制的
- 文本文件无非是用最简单的方式可以读写的文件
  - more、tail
  - cat
  - vi
- 而二进制文件是需要专门的程序来读些的文件
- 文本文件的输入输出是格式化，可能经过转码

### 二进制读些

- size_t fread(void *restrict ptr,size_t size, size_t nitems, FILE *restrict stream);
- size_t fwrite(const void *restrict ptr,size_t size, size_t nitems, FILE *restrict stream);
- 上面的size_t是一个结构的大小
- 注意FILE指针是最后一个参数
- 返回的是成功独写的字节数
- 因为二进制文件的读写一般都是通过对一个结构变量的操作来进行的
- 于是nitem就是用来说明这次读写几个结构变量！

### 在文件中定位

- long ftell(FILE *stream)
- int fseek(FILE *stream,long offset,int whence)
  - SEEK_SET:从头开始
  - SEEK_CUR:从当前位置开始
  - SEEK_END:从尾开始（倒过来）

**二进制文件和文本文件的区别**

