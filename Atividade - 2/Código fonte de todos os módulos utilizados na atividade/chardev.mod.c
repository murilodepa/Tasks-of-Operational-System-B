/*
Arquivo: chardev.mod
Nome dos integrantes: CHRISTOPHER OLIVEIRA      RA:18726430
					  GIULIANO SANFINS			   17142837
					  MATHEUS MORETTI			   18082974
					  MURILO ARAUJO				   17747775
					  VICTOR REIS				   18726471
*/

#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C52A3F353B60D77D2154103");
