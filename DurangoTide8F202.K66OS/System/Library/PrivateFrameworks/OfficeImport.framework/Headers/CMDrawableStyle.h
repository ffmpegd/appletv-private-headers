/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EMCellStyle.h"

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface CMDrawableStyle : EMCellStyle {
@private
	OADDrawable *mDrawable;	// 20 = 0x14
}
- (void)addPositionProperties:(CGRect)properties;	// 0x3195c265
- (void)addPositionUsingOffsets:(CGRect)offsets;	// 0x319e94cd
@end
