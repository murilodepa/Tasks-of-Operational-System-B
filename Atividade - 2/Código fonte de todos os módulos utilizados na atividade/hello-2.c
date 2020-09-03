/*
Arquivo: hello-2.c - Demonstrating the module_init() and module_exit() macros.* This

Nome dos integrantes: CHRISTOPHER OLIVEIRA      RA:18726430
					  GIULIANO SANFINS			   17142837
					  MATHEUS MORETTI			   18082974
					  MURILO ARAUJO				   17747775
					  VICTOR REIS				   18726471
*/

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

/* Needed by all modules */
/* Needed for KERN_INFO */
/* Needed for the macros */
static int __init hello_2_init(void)
{
pr_info("Hello, world 2\n");
return 0;
}
static void __exit hello_2_exit(void)
{
pr_info("Goodbye, world 2\n");
}
module_init(hello_2_init);
module_exit(hello_2_exit);
