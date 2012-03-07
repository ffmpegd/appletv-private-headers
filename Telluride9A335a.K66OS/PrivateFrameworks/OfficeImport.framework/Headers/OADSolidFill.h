/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADFill.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADSolidFill : OADFill {
@private
	OADColor *mColor;	// 12 = 0xc
	BOOL mIsColorOverridden;	// 16 = 0x10
}
@property(retain) id color;	// G=0x3512c8e5; S=0x351a7709; converted property
+ (id)blackFill;	// 0x353c6dbd
+ (id)defaultProperties;	// 0x351a76c1
+ (id)whiteFill;	// 0x353c6e39
- (id)initWithDefaults;	// 0x351d14f5
// converted property getter: - (id)color;	// 0x3512c8e5
- (id)copyWithZone:(NSZone *)zone;	// 0x35290b95
- (void)dealloc;	// 0x351acf5d
- (unsigned)hash;	// 0x353c6eb5
- (BOOL)isColorOverridden;	// 0x3512c915
- (BOOL)isEqual:(id)equal;	// 0x351ac8f9
// converted property setter: - (void)setColor:(id)color;	// 0x351a7709
- (void)setStyleColor:(id)color;	// 0x352d36f9
@end

