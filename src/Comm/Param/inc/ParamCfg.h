/*
 * ParamCfg.h
 *
 *  Created on: 20xx年x月x日
 *      Author: HeHuiBo
 */
#ifndef PARAMCFG_H_
#define PARAMCFG_H_

/*参数起始地址*/
#define PARAM_STARD_ADDR		0
#define PARAM_BLOCKPAGE_SIZE	0x1000
#define PARAM_MAGIC_VALID		0x5900

/***************eFLASH_ID_CS0*************/
/*机台参数起始地址*/
#define MACHINEGROUPPARAM_START_ADDR       PARAM_STARD_ADDR              
#define MACHINEGROUPPARAM_END_ADDR         0x000C2000 


/*记录起始地址*/
#define RDBEGIN_STARD_ADDR	     MACHINEGROUPPARAM_END_ADDR 


/***************eFLASH_ID_CS1*************/
/*****************************************************************************
 *	
 *	0  - 8K			:设备信息参数8K
 *	8  - 16K		:系统信息参数8K
 *	16 - 24K		:系统管理参数8K
 *	24 - 32K		:账号管理参数8K
 *	32 - 256K		:预留	224K
 *	256 - 768K		:应用程序存储地址:512K
 *	768 - 1768K		:用户账号存储地址:1M
 *	1768K - 4968K    :卡表:3200K
 *	4968 - 5000K    :预留	32K----->5M
 *  5000K-          :主机操作日志   
 */
 
/*设备信息参数地址:8K*/				
#define DEVICEPARAM_STARD_ADDR 	  PARAM_STARD_ADDR
#define DEVICEPARAM_END_ADDR	  (DEVICEPARAM_STARD_ADDR + 0x2000)
#define DEVICEPARAM_MAX_SIZE	  0x1000
#define DEVICEPARAM_MAGIC		  PARAM_MAGIC_VALID

/*系统管理参数:8K*/
#define SYSITEMPARAM_STARD_ADDR	 DEVICEPARAM_END_ADDR
#define SYSITEMPARAM_MAX_SIZE	 0x1000
#define SYSITEMPARAM_END_ADDR	(SYSITEMPARAM_STARD_ADDR + 0x2000)
#define SYSITEMPARAM_MAGIC		 0x9600

/*账号管理参数:8K*/
#define ACCITEMPARAM_STARD_ADDR	 SYSITEMPARAM_END_ADDR
#define ACCITEMPARAM_MAX_SIZE	 0x1000
#define ACCITEMPARAM_END_ADDR	(ACCITEMPARAM_STARD_ADDR + 0x2000)
#define ACCITEMPARAMM_MAGIC		 0x7900


#define MANAGELISTPARAM_STARD_ADDR	 ACCITEMPARAM_END_ADDR
#define MANAGELISTPARAM_MAX_SIZE	 0x1000
#define MANAGELISTPARAM_END_ADDR	(MANAGELISTPARAM_STARD_ADDR + 0x2000)
#define MANAGELISTPARAM_MAGIC		 0x8350  


/*系统信息参数地址:8K*/
#define SYSTEMPARAM_STARD_ADDR	 MANAGELISTPARAM_END_ADDR
#define SYSTEMPARAM_MAX_SIZE	 0x1000
#define SYSTEMPARAM_END_ADDR	(SYSTEMPARAM_STARD_ADDR + 0x2000)
#define SYSTEMPARAM_MAGIC		 0x8300   
   
/*预留	224K*/


/*应用程序存储地址:512K*/
#define APPCODE_STARD_ADDR	    0x40000	//256*1024
#define APPCODE_MAX_SIZE	    0x80000 
#define APPCODE_END_ADDR	    APPCODE_STARD_ADDR + APPCODE_MAX_SIZE

/*用户账号存储地址:1M*/
#define USERACC_STARD_ADDR	    APPCODE_END_ADDR
#define USERACC_END_ADDR	    0x1BA000
/*1768K*/

/*卡表：3200K+520K*/
#define CARDLIST_STARD_ADDR	    USERACC_END_ADDR //0x1BA000    //(256+512+1000)*1024
#define CARDLIST_END_ADDR	    0x007FB000//0x4E2000    //(256+512+512+3200+520)*1024
//5M

/*操作日志*/
#define HOSTOPLOGRD_START_ADDR	CARDLIST_END_ADDR


#define MACHINEGROUPMNT_START_ADDR    0x00EB2000
#define MACHINEGROUPMNT_END_ADDR      0x01000000  
   
/***************eFLASH_ID_CS2*************/
/*GBK汉字字库存储地址:6M*/
#define GBKFONT_STARD_ADDR	    PARAM_STARD_ADDR //1024*1024*6 = 0x600000
#define GBKFONT_MAX_SIZE	    0x600000
#define GBKFONT_END_ADDR	    GBKFONT_STARD_ADDR + GBKFONT_MAX_SIZE

#endif /* PARAMCFG_H_ */
