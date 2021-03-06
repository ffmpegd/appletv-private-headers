/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library


@interface AVFileProcessor : NSObject {
	float _percentComplete;	// 4 = 0x4
}
+ (id)fileProcessor;	// 0x36336139
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes;	// 0x3633617d
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes progressBlock:(id)block;	// 0x363361a5
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info;	// 0x363361c9
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info progressBlock:(id)block;	// 0x363361ed
- (id)rentalInfo:(id)info;	// 0x3633630d
- (id)sinfInfoFromFilePath:(id)filePath;	// 0x36336465
- (id)sinfsFromFilePath:(id)filePath;	// 0x3633643d
@end

