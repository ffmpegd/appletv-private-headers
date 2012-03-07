/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class EDString, EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellTextMapper : CMMapper {
@private
	EDString *edString;	// 8 = 0x8
	EDStyle *edStyle;	// 12 = 0xc
}
- (id)initWithEDString:(id)edstring style:(id)style parent:(id)parent;	// 0x355dd541
- (double)contentWidth;	// 0x355ddba1
- (void)mapAt:(id)at withState:(id)state columnWidth:(double)width height:(double)height spreadLeft:(BOOL)left;	// 0x355dd591
- (void)mapTextRunsAt:(id)at;	// 0x355ddce1
- (void)mapVerticalTextAt:(id)at withState:(id)state width:(double)width height:(double)height;	// 0x35698371
@end

