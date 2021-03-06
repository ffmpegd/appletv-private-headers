/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADShapeGeometry : NSObject {
@private
	BOOL mIsEscher;	// 4 = 0x4
	NSMutableDictionary *mAdjustValues;	// 8 = 0x8
}
@property(assign) BOOL isEscher;	// G=0x3562d971; S=0x3555c1b5; converted property
- (id)init;	// 0x3555c151
- (long)adjustValueAtIndex:(unsigned)index;	// 0x3562d6e1
- (id)adjustValues;	// 0x355a9a11
- (void)dealloc;	// 0x3556dd2d
- (BOOL)hasAdjustValueAtIndex:(unsigned)index;	// 0x3578718d
// converted property getter: - (BOOL)isEscher;	// 0x3562d971
- (void)setAdjustValue:(long)value atIndex:(unsigned)index;	// 0x355ace51
// converted property setter: - (void)setIsEscher:(BOOL)escher;	// 0x3555c1b5
@end

