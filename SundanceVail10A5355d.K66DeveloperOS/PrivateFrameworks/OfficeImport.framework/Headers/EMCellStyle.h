/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMStyle.h"

@class EDStyle;

@interface EMCellStyle : CMStyle {
	EDStyle *edStyle;	// 12 = 0xc
	BOOL _nameContainsItalic;	// 16 = 0x10
	BOOL _nameContainsBold;	// 17 = 0x11
}
- (id)init;	// 0x31bfa6c1
- (id)initWithEDStyle:(id)edstyle;	// 0x31c3ef69
- (id)_parseFontName:(id)name;	// 0x31c3f3e1
- (void)addAlignmentStyle:(id)style;	// 0x31c3f961
- (void)addBordersStyle:(id)style;	// 0x31c48a89
- (void)addFillStyle:(id)style;	// 0x31c3f859
- (void)addFontStyle:(id)style;	// 0x31c3f069
- (void)changeWithContentFormatType:(int)contentFormatType;	// 0x31c405e1
- (void)changeWithContentWidth:(double)contentWidth columnWidth:(double)width;	// 0x31c40415
@end

