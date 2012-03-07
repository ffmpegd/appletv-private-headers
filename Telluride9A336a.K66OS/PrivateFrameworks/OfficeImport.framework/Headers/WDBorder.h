/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface WDBorder : NSObject <NSCopying> {
@private
	int mStyle;	// 4 = 0x4
	NSColorStub *mColor;	// 8 = 0x8
	unsigned char mWidth;	// 12 = 0xc
	unsigned char mSpace;	// 13 = 0xd
	BOOL mShadow;	// 14 = 0xe
	BOOL mFrame;	// 15 = 0xf
}
@property(retain) id color;	// G=0x34cc0bc9; S=0x34cb90e1; converted property
@property(assign) BOOL frame;	// G=0x34e04ffd; S=0x34cb9151; converted property
@property(assign) BOOL shadow;	// G=0x34e04fed; S=0x34cb9141; converted property
@property(assign) unsigned char space;	// G=0x34e04fdd; S=0x34cb9131; converted property
@property(assign) int style;	// G=0x34cc08cd; S=0x34cb9039; converted property
@property(assign) unsigned char width;	// G=0x34cc0bb9; S=0x34cb9121; converted property
- (id)init;	// 0x34c9b3e5
// converted property getter: - (id)color;	// 0x34cc0bc9
- (id)copyWithZone:(NSZone *)zone;	// 0x34e0500d
- (void)dealloc;	// 0x34c20521
// converted property getter: - (BOOL)frame;	// 0x34e04ffd
- (BOOL)isEqual:(id)equal;	// 0x34e052f5
- (BOOL)isEqualToBorder:(id)border;	// 0x34e05351
- (void)setBorder:(id)border;	// 0x34e051f9
// converted property setter: - (void)setColor:(id)color;	// 0x34cb90e1
// converted property setter: - (void)setFrame:(BOOL)frame;	// 0x34cb9151
- (void)setNullBorder;	// 0x34e05159
// converted property setter: - (void)setShadow:(BOOL)shadow;	// 0x34cb9141
- (void)setSingleBlackBorder;	// 0x34e050b9
// converted property setter: - (void)setSpace:(unsigned char)space;	// 0x34cb9131
// converted property setter: - (void)setStyle:(int)style;	// 0x34cb9039
// converted property setter: - (void)setWidth:(unsigned char)width;	// 0x34cb9121
// converted property getter: - (BOOL)shadow;	// 0x34e04fed
// converted property getter: - (unsigned char)space;	// 0x34e04fdd
// converted property getter: - (int)style;	// 0x34cc08cd
// converted property getter: - (unsigned char)width;	// 0x34cc0bb9
@end

