/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQHTrbl : NSObject {
	int mTop;	// 4 = 0x4
	int mRight;	// 8 = 0x8
	int mBottom;	// 12 = 0xc
	int mLeft;	// 16 = 0x10
}
@property(assign) int bottom;	// G=0x368e09c9; S=0x368e09b9; converted property
@property(assign) int left;	// G=0x368e09e9; S=0x368e09d9; converted property
@property(assign) int right;	// G=0x368e09a9; S=0x368e0999; converted property
@property(assign) int top;	// G=0x368e0989; S=0x368e0979; converted property
- (id)init;	// 0x368e08d1
// converted property getter: - (int)bottom;	// 0x368e09c9
- (CFStringRef)createStringRef;	// 0x368e09f9
// converted property getter: - (int)left;	// 0x368e09e9
// converted property getter: - (int)right;	// 0x368e09a9
// converted property setter: - (void)setBottom:(int)bottom;	// 0x368e09b9
// converted property setter: - (void)setLeft:(int)left;	// 0x368e09d9
// converted property setter: - (void)setRight:(int)right;	// 0x368e0999
// converted property setter: - (void)setTop:(int)top;	// 0x368e0979
- (void)setTop:(int)top right:(int)right bottom:(int)bottom left:(int)left;	// 0x368e0939
// converted property getter: - (int)top;	// 0x368e0989
@end

