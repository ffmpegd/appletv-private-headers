/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPOperationResponsePacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned short _responseCode;	// 8 = 0x8
	unsigned _transactionID;	// 12 = 0xc
	unsigned _parameters[5];	// 16 = 0x10
}
@property(readonly, assign) int numParameters;	// G=0x35514e71; converted property
@property(assign) unsigned long parameter1;	// G=0x35514eb5; S=0x35514ec5; converted property
@property(assign) unsigned long parameter2;	// G=0x35514ed5; S=0x35514ee9; converted property
@property(assign) unsigned long parameter3;	// G=0x35514efd; S=0x35514f11; converted property
@property(assign) unsigned long parameter4;	// G=0x35514f25; S=0x35514f39; converted property
@property(assign) unsigned long parameter5;	// G=0x35514f4d; S=0x35514f61; converted property
@property(assign) unsigned short responseCode;	// G=0x35514e31; S=0x35514e41; converted property
@property(assign) unsigned long transactionID;	// G=0x35514e51; S=0x35514e61; converted property
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId;	// 0x355157f9
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId numParameters:(unsigned long)parameters parameters:(unsigned *)parameters4;	// 0x35514f75
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1;	// 0x35515789
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x3551570d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x3551567d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x355155e5
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x3551553d
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x35515475
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x355153ad
- (id)contentForTCP;	// 0x355152c5
- (id)contentForUSB;	// 0x355151dd
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x35515101
- (id)description;	// 0x35514ff9
// converted property getter: - (int)numParameters;	// 0x35514e71
// converted property getter: - (unsigned long)parameter1;	// 0x35514eb5
// converted property getter: - (unsigned long)parameter2;	// 0x35514ed5
// converted property getter: - (unsigned long)parameter3;	// 0x35514efd
// converted property getter: - (unsigned long)parameter4;	// 0x35514f25
// converted property getter: - (unsigned long)parameter5;	// 0x35514f4d
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x35514e81
// converted property getter: - (unsigned short)responseCode;	// 0x35514e31
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x35514ec5
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x35514ee9
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x35514f11
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x35514f39
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x35514f61
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x35514e9d
// converted property setter: - (void)setResponseCode:(unsigned short)code;	// 0x35514e41
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x35514e61
// converted property getter: - (unsigned long)transactionID;	// 0x35514e51
@end

