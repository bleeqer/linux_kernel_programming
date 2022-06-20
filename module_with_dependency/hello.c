#include <linux/module.h> // needed by all modules 
#include <linux/kernel.h> // needed for KERN_INFO

extern int add(int x, int y);

int init_module()
{
	printk(KERN_INFO "Hello world!\n 1+1=%d", add(1, 1));

	return 0;
}

void cleanup_module()
{
	printk(KERN_INFO "Goodbye world!\n");
}

MODULE_LICENSE("GPL");
