/*
Arquivo: hello-1.c - The simplest kernel module.

Nome dos integrantes: CHRISTOPHER OLIVEIRA      RA:18726430
					  GIULIANO SANFINS			   17142837
					  MATHEUS MORETTI			   18082974
					  MURILO ARAUJO				   17747775
					  VICTOR REIS				   18726471
*/

#include <linux/module.h>
/* Needed by all modules */
#include <linux/kernel.h>
/* Needed for KERN_INFO */
int init_module(void)
{
pr_info("Hello world 1.\n");
/*
* A non 0 return means init_module failed; module can't be loaded.
*/
return 0;
}
void cleanup_module(void)
{
pr_info("Goodbye world 1.\n");
}
