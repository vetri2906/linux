#include <linux/module.h>
#include <linux/kernel.h>   /* Required for pr_info */

static int __init pcd_init(void)  /* __init comes AFTER int */
{
    pr_info("module_init successful\n");
    return 0;
}

static void __exit pcd_deinit(void)
{
    pr_info("module deinit successful\n");
}

module_init(pcd_init);
module_exit(pcd_deinit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vetri only");
MODULE_DESCRIPTION("This is the beginning of new magics");
MODULE_INFO(board,"Beaglebone black REV A5");

