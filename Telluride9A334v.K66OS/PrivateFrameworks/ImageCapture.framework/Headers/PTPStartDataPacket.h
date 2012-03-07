/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPStartDataPacket : NSObject {
	unsigned _transactionID;	// 4 = 0x4
	unsigned long long _totalDataSize;	// 8 = 0x8
}
@property(assign) unsigned long long totalDataSize;	// G=0x32251a29; S=0x32251a41; converted property
@property(assign) unsigned long transactionID;	// G=0x32251a09; S=0x32251a19; converted property
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x32251ba5
- (id)initWithTransactionID:(unsigned long)transactionID totalDataSize:(unsigned long long)size;	// 0x32251a55
- (id)contentForTCP;	// 0x32251b0d
- (id)description;	// 0x32251aa9
// converted property setter: - (void)setTotalDataSize:(unsigned long long)size;	// 0x32251a41
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x32251a19
// converted property getter: - (unsigned long long)totalDataSize;	// 0x32251a29
// converted property getter: - (unsigned long)transactionID;	// 0x32251a09
@end

