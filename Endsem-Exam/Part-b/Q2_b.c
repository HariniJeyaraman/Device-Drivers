#include<linux/module.h>
static int num = 10;

int init_module(void)
{
    printk("Module is inserted !!\n");
    printk(" My name is Harini !! Printing this to log :) \n");
    return 0;
}

void cleanup_module(void)
{
    printk("bye!! module removed\n");
}

module_param(num,int,0);
MODULE_LICENSE("GPL");