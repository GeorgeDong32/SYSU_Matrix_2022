# 21程设Ⅱ-周19-课堂2

# Description

C++11 defines function ``stoi`` to to interpret a **signed integer** value in the **string** str. We hope to implement our ``myStoi`` function to do that. We only need to consider integer with **base 10** and deal with all the possible exceptions.

C++ 中使用``stoi()``函数来将字符串转换成数字。我们将通过实现``myStoi``来实现类似的功能。我们仅考虑10进制的数字转换，需要注意处理转换过程中可能出现的异常情况。

# Guiding

## Valid integer number 
Discards any whitespace characters (as identified by calling isspace()) until the first non-whitespace character is found, then takes as many characters as possible to form a valid integer number representation and converts them to an integer value. The valid integer value consists of the following parts:
* (optional) plus or minus sign
* a sequence of digits
合法的输入包括：（可选）前缀的空格，（可选）正负号，一连串的数字

## Possible Exceptions
* invalid_argument if no conversion could be performed
* out_of_range if the converted value would fall out of the range of the result type.
可能出现的异常：不合法的输入 和 数字越界 

### Sample Input
（main函数中已有样例："123", "  -123", "++34", "", "7878cici9", "-2147483649"）
120
### Sample Output
123 -> 123    
  -123 -> -123
Input:++34 ; Exception : invalid stoi argument
Input: ; Exception : invalid stoi argument
Input:7878cici9 ; Exception : invalid stoi argument
Input:-2147483649 ; Exception : stoi argument out of range
120 -> 120

# Hint
通过#include<limits.h>可以得到INT_MIN=-2147483648，INT_MAX=2147483647。