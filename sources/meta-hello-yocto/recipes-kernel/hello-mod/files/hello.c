#include <linux/module.h>

int init_module(void)
{
	printk("Hello World!, I'm NIO\n");
	return 0;
}

void cleanup_module(void)
{
	printk("Taking a nap, be right back into the game!\n");
}

MODULE_LICENSE("GPL");
