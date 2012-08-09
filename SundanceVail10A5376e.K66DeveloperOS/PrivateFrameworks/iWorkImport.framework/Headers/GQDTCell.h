/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQDSStyle;

@interface GQDTCell : NSObject {
	unsigned short mColumnIndex;	// 4 = 0x4
	unsigned short mRowIndex;	// 6 = 0x6
	unsigned short mColumnSpan;	// 8 = 0x8
	unsigned short mRowSpan;	// 10 = 0xa
	GQDSStyle *mStyle;	// 12 = 0xc
}
@property(retain) id cellStyle;	// G=0x35816d59; S=0x35816d69; converted property
// converted property getter: - (id)cellStyle;	// 0x35816d59
- (unsigned short)columnIndex;	// 0x35816d19
- (unsigned short)columnSpan;	// 0x35816d39
- (void)dealloc;	// 0x35816ccd
- (void)incrementColumnSpan;	// 0x358171ad
- (int)readAttributesForBaseCell:(xmlTextReader *)baseCell processor:(id)processor;	// 0x35816da5
- (int)readAttributesForBaseTabularCell:(xmlTextReader *)baseTabularCell processor:(id)processor;	// 0x35816e21
- (int)readBaseAttributesForBaseCell:(xmlTextReader *)baseCell processor:(id)processor;	// 0x3581707d
- (unsigned short)rowIndex;	// 0x35816d29
- (unsigned short)rowSpan;	// 0x35816d49
// converted property setter: - (void)setCellStyle:(id)style;	// 0x35816d69
@end
