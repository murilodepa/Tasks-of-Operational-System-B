/*
Arquivo: start.c - Illustration of multi filed modules

Nome dos integrantes: CHRISTOPHER OLIVEIRA      RA:18726430
					  GIULIANO SANFINS			   17142837
					  MATHEUS MORETTI			   18082974
					  MURILO ARAUJO				   17747775
					  VICTOR REIS				   18726471
*/

#include <linux/kernel.h>
#include <linux/module.h>
/* We're doing kernel work */
/* Specifically, a module */
int init_module(void)
{
pr_info("Hello, world - this is the kernel speaking\n");
return 0;
}
