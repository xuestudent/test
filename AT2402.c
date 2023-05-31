#include <REGX52.H>
#include "Delay.h"
#include "key.h"
#include "I2C.h"


#define AT24C02_ADDRESS      0XA0

void AT2402_WriteByte(unsigned char WordAddress,Data)
{
	I2C_Start();
	I2C_SendByte(AT24C02_ADDRESS);
	I2C_ReceiveAck();//接收应答
	I2C_SendByte(WordAddress);
	I2C_ReceiveAck();//接收应答
	I2C_SendByte(Data);
	I2C_ReceiveAck();//接收应答
	I2C_Stop();
}
unsigned char AT2402_ReadByte(unsigned char WordAddress)
{
	unsigned char Data;
	I2C_Start();
	I2C_SendByte(AT24C02_ADDRESS);
	I2C_ReceiveAck();//接收应答
	I2C_SendByte(WordAddress);
	I2C_ReceiveAck();//接收应答
	I2C_Start();
	I2C_SendByte(AT24C02_ADDRESS|0x01);
	I2C_ReceiveAck();//接收应答
	Data=I2C_ReceiveByte();
	I2C_SendAck(1);
	I2C_Stop();
	return Data;
}