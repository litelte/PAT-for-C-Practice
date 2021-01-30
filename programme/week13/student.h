/*** 
 * @Date: 2020-04-19 16:33:20
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 17:08:37
 * @FilePath: /CProject/zju_c/week13/student.h
 * @Description: 学生信息结构
 */
#ifndef _STUDENT_H_
#define _STUDENT_H_
#define STR_LEN 20

// C语言使用const定义数组时的错误原因:https://blog.csdn.net/zr1076311296/article/details/50927227
// const int STR_LEN = 20;
// 所以可以使用宏定义或者enum来枚举
// 该头文件中声明了一个学生结构
typedef struct _student
{
    char name[STR_LEN];
    int gender;
    int age;
} Student;

#endif
