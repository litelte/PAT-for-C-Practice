<!--
 * @Date: 2020-05-01 18:32:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 18:33:08
 * @FilePath: /CProject/zju_c/week3/summary.md
 * @Description: 浙大C语言翁恺第三周学习内容
 -->

## 0的故事

终端中的0都是有一个斜线的，这样做的原因是为了和o区分开来，便于识别。

## 找零计算器

- 找零计算机需要用户做两个操作：

  - 输入购买的金额，输入支付的票面，找零计算器根据用户的输入做出相应的动作：
    - 计算并打印找零
    - 或告知用户余额不足以购买

- 从计算机程序的角度来看，意味着程序需要读用户的两个输入，然后进行一些计算和判断，最后输出结果

  ```c
  /*
   * @Date: 2020-05-01 18:45:21
   * @LastEditors: litelte
   * @LastEditTime: 2020-05-01 19:03:32
   * @FilePath: /CProject/zju_c/week3/2.c
   * @Description: 找零计算器
   */
  #include <stdio.h>
  int main(int argc, char const *argv[])
  {
      float sum = 0;
      int money = 0;
      printf("你好，我是找零计算机，请输入你要购买的金额，以及支付的票面：\n");
      scanf("%f %d", &sum, &money);
      printf("正在计算:\n");
      if (sum > money)
      {
          printf("余额不足以购买\n");
      }
      else
      {
          printf("，找零中-----\n");
          printf("购买成功，找零%.01f元，欢迎下次再来！\n", money - sum);
      }
  
      return 0;
  }
  ```

## 关于if...else...的用法

if、else、else if后面可以没有花括号，直接写表达式，需要注意的是缩进，这个很重要。

### 计算薪水

```c
/*
 * @Date: 2020-05-01 19:12:49
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 19:16:37
 * @FilePath: /CProject/zju_c/week3/3.c
 * @Description: 计算薪水
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    const double RATE = 8.25;
    const int STANDARD = 40;
    double pay = 0.0;
    int hours;
    printf("请输入工作的小时数：\n");
    scanf("%d", &hours);
    printf("\n");
    if (hours > STANDARD)
        pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
    else
        pay = hours * RATE;
    printf("应付工资：%f\n", pay);
    return 0;
}
```

## 比较三个数大小

```c
/*
 * @Date: 2020-05-01 19:20:13
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 20:10:29
 * @FilePath: /CProject/zju_c/week3/4.c
 * @Description: 比较三个数的大小
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a = 0, b = 0, c = 0;
    float max = 0;
    printf("请输入三个数的大小：\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("The max is %.01f\n", max);

    return 0;
}
```

- 当if的条件满足或者不满足的时候要执行的语句也可以是一条if或if-else语句，这就是嵌套的if语句
- if(xxx){};这样也是可行的，if的括号内的式子结果为真，则继续执行
- 作为一种良好的编程习惯，不管语句有多短，都在if或else后加上花括号

## 级联的if-else if

```c
if (/* condition */)
    {
    	st1;
    }
    else if (/* condition */)
    {
        st2;
    }
    else if (/* condition */)
    {
        st3;
    }
    else
    {
        st4;
    }
```

## 使用if-else需要注意的事情

- 永远在if/else后面加上花括号
- if(xxx);{}，即便if括号中的表达式成立，仍然什么都不做，也就是说if语句到分号结束
- 错误使用==和=
- 解决程序运行过程中的warning和error!
- 代码风格，注意缩进，至少一个tab键

## Switch-Case型语句

```c
switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
// 常量也可以是常数计算表达式，但计算结果最终必须为常数，这是在C99而言
// ANSI C不支持
```

程序示例

```c
/*
 * @Date: 2020-05-01 20:18:30
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 22:40:23
 * @FilePath: /CProject/zju_c/week3/5.c
 * @Description: switch-case型语句
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int type;
    // const int MRN = 2;
    // 在C99中case的表达式可以为整型常量
    scanf("%d", &type);
    // switch()括号中的参数必须为整型数
    switch (type)
    {
    case 1:
        printf("你好");
        break;
    case 2:
        printf("早上好");
        break;
    case 3:
        printf("晚上好");
        break;
    case 4:
        printf("再见");
        break;
    default:
        printf("啊，什么呀？");
        break;
    }
    return 0;
}
```

**注意事项**

- case不是分支的终点，break才是

程序示例

```c
/*
 * @Date: 2020-05-01 22:44:55
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 22:47:50
 * @FilePath: /CProject/zju_c/week3/6.c
 * @Description: 使用switch实现成绩转换
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("输入一个学生的成绩：");
    int grade;
    scanf("%d", &grade);
    grade /= 10;
    switch (grade)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("F\n");
        break;
    }
    return 0;
}
```

