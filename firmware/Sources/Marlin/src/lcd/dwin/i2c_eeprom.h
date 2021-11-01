#ifndef __I2C_EEPROM_H
#define __I2C_EEPROM_H

#include "../../inc/MarlinConfig.h"
#include "../../MarlinCore.h"


/******************** EEPROM ********************/
#define BL24C01		127
#define BL24C02		255
#define BL24C04		511
#define BL24C08		1023
#define BL24C16		2047
#define BL24C32		4095
#define BL24C64	  8191
#define BL24C128	16383
#define BL24C256	32767  
#define EE_TYPE   BL24C16
					  
uint8_t BL24CXX_ReadOneByte(uint16_t ReadAddr);							          //ָ����ַ��ȡһ���ֽ�
void BL24CXX_WriteOneByte(uint16_t WriteAddr,uint8_t DataToWrite);		//ָ����ַд��һ���ֽ�
void BL24CXX_WriteLenByte(uint16_t WriteAddr,uint32_t DataToWrite,uint8_t Len);//ָ����ַ��ʼд��ָ�����ȵ�����
uint32_t BL24CXX_ReadLenByte(uint16_t ReadAddr,uint8_t Len);					//ָ����ַ��ʼ��ȡָ����������
void BL24CXX_Write(uint16_t WriteAddr,uint8_t *pBuffer,uint16_t NumToWrite);	//��ָ����ַ��ʼд��ָ�����ȵ�����
void BL24CXX_Read(uint16_t ReadAddr,uint8_t *pBuffer,uint16_t NumToRead);   	//��ָ����ַ��ʼ����ָ�����ȵ�����

uint8_t BL24CXX_Check(void);  //�������
void BL24CXX_Init(void); //��ʼ��IIC


#endif

