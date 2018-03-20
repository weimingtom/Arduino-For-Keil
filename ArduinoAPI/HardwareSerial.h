<<<<<<< HEAD
#ifndef HardwareSerial_h
#define HardwareSerial_h

extern "C"{
#include "usart.h"
}
#include "Print.h"
#include "Stream.h"

class HardwareSerial : public Stream
{
	public:
		HardwareSerial(USART_TypeDef *USARTx);
		void begin(uint32_t baud);
		void end(void);
		void attachInterrupt(void (*f)());
		virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
		virtual void flush(void);
		
		virtual size_t write(uint8_t n);
    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
    using Print::write; // pull in write(str) and write(buf, size) from Print
	
	private:
		USART_TypeDef *USARTx;
		uint8_t USART_Num;
};

extern HardwareSerial Serial;
extern HardwareSerial Serial2;
extern HardwareSerial Serial3;

#endif
=======
#ifndef HardwareSerial_h
#define HardwareSerial_h

extern "C"{
#include "usart.h"
}
#include "Print.h"
#include "Stream.h"

class HardwareSerial : public Stream
{
	public:
		HardwareSerial(USART_TypeDef *USARTx);
		void begin(u32 baud);
		void end(void);
		void attachInterrupt(void (*f)());
		virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
		virtual void flush(void);
		
		virtual size_t write(uint8_t n);
    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
    using Print::write; // pull in write(str) and write(buf, size) from Print
	
	private:
		USART_TypeDef *USARTx;
		u8 USART_Num;
};

extern HardwareSerial Serial;
extern HardwareSerial Serial2;
extern HardwareSerial Serial3;

#endif
>>>>>>> 301cbab54594d1de84f6a7e456407b3a84e8d255