/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"

@class BluetoothManager;

@interface SKBluetoothIndicator : SKLayer {
	BluetoothManager *_bt;	// 56 = 0x38
}
- (id)init;	// 0x3544650d
- (void)dealloc;	// 0x354465b9
- (void)drawInContext:(CGContextRef)context;	// 0x35446615
- (void)powerChanged:(id)changed;	// 0x35446769
@end

