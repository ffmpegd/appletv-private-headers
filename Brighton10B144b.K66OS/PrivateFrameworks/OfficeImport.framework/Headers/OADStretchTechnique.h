/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADImageFillTechnique.h"
#import "OfficeImport-Structs.h"

@class OADRelativeRect;

@interface OADStretchTechnique : OADImageFillTechnique {
	OADRelativeRect *mFillRect;	// 12 = 0xc
	BOOL mIsFillRectOverridden;	// 16 = 0x10
}
@property(retain) id fillRect;	// G=0x34a4b485; S=0x34866dad; converted property
+ (id)defaultProperties;	// 0x34866cd5
- (id)initWithDefaults;	// 0x34866d1d
- (id)copyWithZone:(NSZone *)zone;	// 0x34a4b3e9
- (void)dealloc;	// 0x34888ed1
// converted property getter: - (id)fillRect;	// 0x34a4b485
- (unsigned)hash;	// 0x34a4b4e9
- (BOOL)isEqual:(id)equal;	// 0x34a4b51d
- (BOOL)isFillRectOverridden;	// 0x34a4b4b5
// converted property setter: - (void)setFillRect:(id)rect;	// 0x34866dad
@end

