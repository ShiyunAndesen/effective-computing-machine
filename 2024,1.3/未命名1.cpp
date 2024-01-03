#include <stdio.h>  
  
int main() {  
    char s[80];  
    int i, j = 0; // j初始化为0，用于记录非'H'字符的下一个位置  
  
    gets(s); // 读取用户输入的字符串  
  
    for (i = 0; s[i] != '\0'; i++) 
	{ // 遍历整个字符串  
        if (s[i] != 'H')
		 { // 如果当前字符不是'H'  
            s[j] = s[i]; // 将当前字符复制到j的位置  
            j++; // 更新j的值，指向下一个位置  
        }  
    }  
    s[j] = '\0'; // 在字符串末尾添加结束符  
  
    puts(s); // 输出处理后的字符串  
  
    return 0;  
}
