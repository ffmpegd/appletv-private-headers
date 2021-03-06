/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDTableRow;

@interface WMTableRowMapper : CMMapper {
	WDTableRow *mWdTableRow;	// 8 = 0x8
	double mHeight;	// 12 = 0xc
}
+ (BOOL)isTableRowDeleted:(id)deleted;	// 0x31c852b5
- (id)initWithWDTableRow:(id)wdtableRow parent:(id)parent;	// 0x31c854ed
- (double)height;	// 0x31c85995
- (void)mapAt:(id)at withState:(id)state;	// 0x31c85659
- (void)setRowProperties:(id)properties;	// 0x31c85569
@end

