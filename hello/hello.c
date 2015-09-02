#include <linux/module.h> // included for all kernel modules
#include <linux/kernel.h> // included for KERN_INFO
#include <linux/init.h> // included for __init and __exit macros

static int __init hello_init(void)
{
printk(KERN_INFO "I'm here, printing live from inside the kernel.\n");
return 0; // Non-zero return means that the module couldn't be loaded.
}

static void __exit hello_cleanup(void)
{
printk(KERN_INFO "And that's all folks!");
}

module_init(hello_init);
module_exit(hello_cleanup);
