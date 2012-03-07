/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ODDFillColorList : NSObject {
@private
	NSArray *mColors;	// 4 = 0x4
	int mHueDirection;	// 8 = 0x8
	int mMethod;	// 12 = 0xc
}
- (id)colorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;	// 0x34d4cb45
- (id)cycleColorAtIndex:(unsigned)index;	// 0x34d8463d
- (void)dealloc;	// 0x34d4e8a9
- (void)getComponentsForIndex:(unsigned)index hue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness state:(id)state;	// 0x34e2d401
- (id)repeatColorAtIndex:(unsigned)index;	// 0x34d4cbd1
- (void)setColors:(id)colors;	// 0x34d46639
- (void)setHueDirection:(int)direction;	// 0x34d46591
- (void)setMethod:(int)method;	// 0x34d46629
- (id)spanColorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;	// 0x34d6fdb1
@end

