#include<linux/module.h>
static int num = 10; //integer initialized with 10. If no parameters are passed in CLI, it will print this value

int init_module(void)
{
    printk("Hey!! module inserted\n");
    printk("value entered = %d\n",num); //prints integer parameter when it is loaded with insmod command
    return 0;
}

void cleanup_module(void)
{
    printk("bye!! module removed\n");
}

module_param(num,int,0); //API for command line parameters. If we do not pass command line arguments, the variable will use its default initialization
MODULE_LICENSE("GPL");
