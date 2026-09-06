#include <linux/module.h>
#include <linux/fs.h>
#include <linux/init.h>

dev_t device_number;

static int __init pcd_init(void)
{
    pr_info("init entered\n");
    
    if (alloc_chrdev_region(&device_number, 0, 1, "flash") < 0) {
        pr_err("Failed to allocate chrdev region\n");
        return -1;
    }

    int minor_no = MINOR(device_number);
    int major_no = MAJOR(device_number);

    pr_info("minor : %d, major : %d\n", minor_no, major_no);
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
