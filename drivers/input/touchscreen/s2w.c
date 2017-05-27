#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/delay.h>
#include <linux/init.h>
#include <linux/input.h>
#include <linux/s2w.h>

int s2w;
static struct kobject *s2w_kobj;

static ssize_t s2w_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	return sprintf(buf, "%d\n", s2w);
}

static ssize_t s2w_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
{

	int new_s2w;

	sscanf(buf, "%du", &new_s2w);

	if (new_s2w >= 0 && new_s2w <= 5) {
		s2w = new_s2w;
	}
	
	return count;
}

static DEVICE_ATTR(sweep2wake, (S_IWUSR|S_IRUGO), s2w_show, s2w_store);

int s2w_init(void)
{
	int s2w_retval;

	s2w = 0;

	s2w_kobj = kobject_create_and_add("android_touch2", NULL);
	if (!s2w_kobj) {
		return -ENOMEM;
	}

	s2w_retval = sysfs_create_file(s2w_kobj, &dev_attr_sweep2wake.attr);

	if (s2w_retval)
		kobject_put(s2w_kobj);

	return (s2w_retval);
}

void s2w_exit(void)
{
	kobject_put(s2w_kobj);
}

module_init(s2w_init);
module_exit(s2w_exit);

