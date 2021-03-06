/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDTable, WMTableColumnInfo, WMBordersProperty, WMTableStyle;

@interface WMTableMapper : CMMapper {
	WDTable *mWdTable;	// 8 = 0x8
	WMBordersProperty *mInsideBorders;	// 12 = 0xc
	WMTableStyle *mStyle;	// 16 = 0x10
	WMTableColumnInfo *mColumnInfo;	// 20 = 0x14
}
@property(retain) id insideBorders;	// G=0x31770915; S=0x318a3de5; converted property
+ (BOOL)isTableDeleted:(id)deleted;	// 0x3176e809
- (id)initWithWDTable:(id)wdtable parent:(id)parent;	// 0x3176cd39
- (id)columnInfo;	// 0x3176f731
- (id)copyColumnInfo;	// 0x3176de29
- (id)copyStopArrayForRow:(unsigned)row;	// 0x3176df19
- (void)dealloc;	// 0x31770981
// converted property getter: - (id)insideBorders;	// 0x31770915
- (void)mapAt:(id)at withState:(id)state;	// 0x3176e4b1
// converted property setter: - (void)setInsideBorders:(id)borders;	// 0x318a3de5
@end

