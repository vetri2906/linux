#include<linux/module.h>

static __init int pcd_init(void)
{
	pr_info("module_init successful");
	return 0;
}

static __exit void pcd_deinit(void)
{
	pr_info("module deinit successful");
}
module_init(pcd_init);
module_exit(pcd_deinit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vetri only");
MODULE_DESCRIPTION("This is the beginning of new magics");
