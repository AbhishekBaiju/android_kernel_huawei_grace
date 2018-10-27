

#ifndef __FCCSTINTERFACE_H__
#define __FCCSTINTERFACE_H__


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include  "vos.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  1 消息头定义
*****************************************************************************/
enum CST_FC_MSG_TYPE_ENUM
{
    ID_CST_FC_SET_FLOWCTRL_REQ      = 0x0001,     /* _H2ASN_MsgChoice CST_FC_SET_FLOWCTRL_REQ_STRU */
    ID_CST_FC_STOP_FLOWCTRL_REQ     = 0x0002,     /* _H2ASN_MsgChoice CST_FC_STOP_FLOWCTRL_REQ_STRU */
    ID_CST_FC_MSG_TYPE_BUTT         = 0xFFFF
};
typedef VOS_UINT32 CST_FC_MSG_TYPE_ENUM_UINT32;


/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                          /* _H2ASN_Skip */
    CST_FC_MSG_TYPE_ENUM_UINT32         enMsgName;          /* _H2ASN_Skip */
    VOS_UINT8                           ucRabId;            /* 多CSD业务使用，暂不使用 */
    VOS_UINT8                           aucReserved[3];
} CST_FC_SET_FLOWCTRL_REQ_STRU;

typedef struct
{
    VOS_MSG_HEADER                                          /* _H2ASN_Skip */
    CST_FC_MSG_TYPE_ENUM_UINT32         enMsgName;          /* _H2ASN_Skip */
    VOS_UINT8                           ucRabId;            /* 多CSD业务使用，暂不使用 */
    VOS_UINT8                           aucReserved[3];
} CST_FC_STOP_FLOWCTRL_REQ_STRU;


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/
/*****************************************************************************
  H2ASN顶级消息结构定义
*****************************************************************************/
typedef struct
{
    CST_FC_MSG_TYPE_ENUM_UINT32         enMsgID;    /*_H2ASN_MsgChoice_Export CST_FC_MSG_TYPE_ENUM_UINT32*/

    VOS_UINT8                           aucMsgBlock[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          CST_FC_MSG_TYPE_ENUM_UINT32
    ****************************************************************************/
}FC_CST_MSG_DATA;
/*_H2ASN_Length UINT32*/

typedef struct
{
    VOS_MSG_HEADER
    FC_CST_MSG_DATA                     stMsgData;
}FcCstInterface_MSG;


/*****************************************************************************
  10 函数声明
*****************************************************************************/


#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of FcCstInterface.h */

