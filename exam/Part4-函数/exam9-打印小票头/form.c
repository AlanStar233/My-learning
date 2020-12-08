/*9．输出如下所示的超市购物小票的票头。
______________________________
+                            +
+                            +
+    Welcome to XX Shop      +
+                            +
+                            +
￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣
*/
#include <stdio.h>
void head()
{
    printf("______________________________\n");
}
void line()
{
    printf("+                            +\n");
}
void welcome()
{
    printf("+    Welcome to XX Shop      +\n");
}
void end()
{
    printf("______________________________\n");
}
void ticket_head()
{
    head();
    line();
    line();
    welcome();
    line();
    line();
    end();
}
void main()
{
    ticket_head();
}