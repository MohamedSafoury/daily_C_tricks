/**
 * @file static_insertion_example.c
 * @author mohamed elsafoury (you@domain.com)
 * @brief static_assert ( expression , message ) 
 * @details the constant expression is evaluated at compile time and compared to zero 
 *          if it compares to zero , a compile time error occurs and the compiler must display message 
 * @version 0.1
 * @date 2023-05-16
 * 
 * @copyright Copyright (c) 2023
 * 
 * 
 * 
 * 
 */


#include <assert.h> // no longer needed since C23
int main(void)
{
    // Test if math works.
    static_assert(2 + 2 == 4, "Whoa dude!"); // or _Static_assert(...
 
    // This will produce an error at compile time.
    static_assert(sizeof(int) < sizeof(char),"program requires that int is less than char");

    return 0 ; 
}