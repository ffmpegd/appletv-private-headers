/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import </libobjc.A.h>


@interface AVFileProcessor : NSObject {
	float _percentComplete;	// 4 = 0x4
}
+ (id)fileProcessor;	// 0x302c081d
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes;	// 0x302c0861
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes progressBlock:(id)block;	// 0x302c0889
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info;	// 0x302c08b9
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info progressBlock:(id)block;	// 0x302c08dd
- (id)rentalInfo:(id)info;	// 0x302c09fd
- (id)sinfInfoFromFilePath:(id)filePath;	// 0x302c0b55
- (id)sinfsFromFilePath:(id)filePath;	// 0x302c0b2d
@end
