/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

#import "ControlBitsIPxInterface.h"
#import "FactoryTest-Structs.h"
#import "ControlBits.h"


@interface ControlBits_iPX_1v0 : ControlBits <ControlBitsIPxInterface> {
}
+ (int)_eraseControlBitInternal:(unsigned char)internal withSWVersion:(id)swversion;	// 0x321507bd
+ (int)_readControlBits:(unsigned char)bits into:(XXStruct_Wlv0FA *)into;	// 0x32150755
+ (unsigned)_stationIdToOffset:(unsigned char)offset;	// 0x32150681
+ (int)_writeControlBitsInternal:(unsigned char)internal withProcCtrl:(XXStruct_Wlv0FA *)procCtrl;	// 0x32150689
+ (int)eraseControlBits:(int)bits;	// 0x32150af9
+ (id)readControlBits:(unsigned char)bits;	// 0x32150a59
+ (int)readControlBits:(unsigned char)bits status:(int *)status failCount:(int *)count secure:(BOOL *)secure;	// 0x32150a99
+ (int)writeControlBits:(unsigned char)bits status:(int)status;	// 0x32150a35
+ (int)writeControlBits:(unsigned char)bits status:(int)status swVersion:(id)version;	// 0x321508cd
@end

