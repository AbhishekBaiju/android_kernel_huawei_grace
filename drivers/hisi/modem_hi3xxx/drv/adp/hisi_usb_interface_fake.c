

#include <linux/module.h>
/*lint -e715*/

/*************************************************************************
*
*   USB
*
*************************************************************************/
typedef void (*USB_ENABLE_CB_T)(void);
typedef void (*USB_DISABLE_CB_T)(void);

/*****************************************************************************
* 函 数 名  : bsp_acm_open
*
* 功能描述  : 打开设备
*
* 输入参数  : dev_id 要打开的设备id
*
* 输出参数  : 无
*
* 返 回 值  : 非0 返回的handle
			  NULL 错误
*
* 其它说明  : kernel
*
*****************************************************************************/
__attribute__((weak)) void *bsp_acm_open(unsigned int dev_id)
{
	return NULL;
}

/*****************************************************************************
* 函 数 名  : bsp_acm_close
*
* 功能描述  : 关闭设备
*
* 输入参数  : 要关闭的设备handle
*
* 输出参数  : 无
*
* 返 回 值  : 0  处理成功
			  <0 处理失败
*
* 其它说明  : kernel
*
*****************************************************************************/
__attribute__((weak)) int bsp_acm_close(void *handle)
{
	return -1;
}

/*****************************************************************************
* 函 数 名  : bsp_acm_write
*
* 功能描述  : 数据写
*
* 输入参数  : handle 设备handle
			  buf  待写入的数据
			  size 代写入的数据大小
*
* 输出参数  : 无
*
* 返 回 值  : >0  处理成功的数据大小
			  <=0 处理失败
*
* 其它说明  : kernel
*
*****************************************************************************/
__attribute__((weak)) int bsp_acm_write(void *handle, void *buf, unsigned int size)
{
	return -1;
}

/*****************************************************************************
* 函 数 名  : bsp_acm_read
*
* 功能描述  : 数据写
*
* 输入参数  : handle 设备handle
			  size 代写入的数据大小
*
* 输出参数  : buf  待返回的数据
*
* 返 回 值  : >0  处理成功的数据大小
			  <=0 处理失败
*
* 其它说明  : kernel
*
*****************************************************************************/
__attribute__((weak)) int bsp_acm_read(void *handle, void *buf, unsigned int size)
{
	return -1;
}

/*****************************************************************************
* 函 数 名  : bsp_acm_ioctl
*
* 功能描述  : 根据命令码进行设置
*
* 输入参数  : handle 设备handle
			  cmd 命令码
			  para 命令参数
*
* 输出参数  : 无
*
* 返 回 值  : 0  处理成功
			  <0 处理失败
*
* 其它说明  : kernel
*
*****************************************************************************/
__attribute__((weak)) int bsp_acm_ioctl(void *handle, unsigned int cmd, void *para)
{
	return -1;
}

/*****************************************************************************
* 函 数 名  : BSP_USB_RegUdiEnableCB
*
* 功能描述  : 注册usb枚举完成回调
*
* 输入参数  : pFunc 回调指针
*
* 输出参数  : 无
*
* 返 回 值  : 0  处理成功
			  <0 处理失败
*
* 其它说明  : kernel
*
*****************************************************************************/
__attribute__((weak)) unsigned int BSP_USB_RegUdiEnableCB(USB_ENABLE_CB_T pFunc)
{
	return (unsigned int)-1;
}

/*****************************************************************************
* 函 数 名  : BSP_USB_RegUdiDisableCB
*
* 功能描述  : 注册usb拔出完成回调
*
* 输入参数  : pFunc 回调指针
*
* 输出参数  : 无
*
* 返 回 值  : 0  处理成功
			  <0 处理失败
*
* 其它说明  : kernel
*
*****************************************************************************/
__attribute__((weak)) unsigned int BSP_USB_RegUdiDisableCB(USB_DISABLE_CB_T pFunc)
{
	return (unsigned int)-1;
}
__attribute__((weak)) void bsp_usb_register_notify(struct notifier_block *nb)
{
	return;
}
/*lint +e715*/
