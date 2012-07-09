/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPBrush.h"

@class TSUColor;

__attribute__((visibility("hidden")))
@interface MFPSolidBrush : MFPBrush {
@private
	TSUColor *mColor;	// 4 = 0x4
}
@property(retain) id color;	// G=0x312fee19; S=0x312fee29; converted property
- (id)initWithColor:(id)color;	// 0x312fed79
// converted property getter: - (id)color;	// 0x312fee19
- (void)dealloc;	// 0x312fedcd
- (void)fillPath:(CGPathRef)path evenOddRule:(BOOL)rule;	// 0x312fee69
// converted property setter: - (void)setColor:(id)color;	// 0x312fee29
@end
