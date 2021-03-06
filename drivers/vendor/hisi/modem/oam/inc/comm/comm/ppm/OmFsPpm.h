

#ifndef __OM_FS_PPM_H__
#define __OM_FS_PPM_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*******************************************************************************
  3 枚举定义
*******************************************************************************/


/*****************************************************************************
  4 结构体定义
*****************************************************************************/


/*****************************************************************************
  4 函数声明
*****************************************************************************/
extern VOS_UINT32 OM_FSInitCfgFile(VOS_VOID);

extern VOS_UINT32 OM_FSCheckSpace(VOS_VOID);

extern VOS_UINT32 OM_FSWriteLogFile(VOS_CHAR *pcLogData, VOS_UINT32 ulLength);

VOS_UINT32 PPM_FSStartLog(VOS_VOID);
VOS_UINT32 PPM_FSWriteLogProc(VOS_UINT8 *pucVirAddr, VOS_UINT8 *pucPhyAddr, VOS_UINT32 ulLength);
VOS_UINT32 PPM_FSInitLogFile(VOS_VOID);
/*****************************************************************************
  5 全局变量声明
*****************************************************************************/


/*****************************************************************************
  6 OTHERS定义
*****************************************************************************/




#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of OmCommonPpm.h*/

