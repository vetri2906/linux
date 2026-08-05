#include <linux/module.h>

static __init int pcd_init(void)
{
	pr_info("init");
	return 0;
}

static __exit void pcd_deinit(void)
{
	pr_info("deinit");
}

module_init(pcd_init);
module_exit(pcd_deinit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("VETRI");
MODULE_DESCRIPTION("pcd driver");
