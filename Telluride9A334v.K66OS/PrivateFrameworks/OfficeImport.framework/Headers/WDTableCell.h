/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTableRow, WDTableCellProperties, WDText;

__attribute__((visibility("hidden")))
@interface WDTableCell : NSObject {
@private
	int mIndex;	// 4 = 0x4
	WDTableRow *mRow;	// 8 = 0x8
	WDTableCellProperties *mProperties;	// 12 = 0xc
	WDText *mText;	// 16 = 0x10
	BOOL mUseTrackedProperties;	// 20 = 0x14
}
@property(assign) BOOL useTrackedProperties;	// G=0x35776d51; S=0x35776d61; converted property
- (id)initWithRow:(id)row at:(int)at;	// 0x3562145d
- (double)cellWidth;	// 0x35626f59
- (void)clearProperties;	// 0x35776da5
- (int)compareIndex:(id)index;	// 0x35776d81
- (void)dealloc;	// 0x355840cd
- (int)index;	// 0x35776d71
- (id)properties;	// 0x35621921
- (id)row;	// 0x356221ed
// converted property setter: - (void)setUseTrackedProperties:(BOOL)properties;	// 0x35776d61
- (id)text;	// 0x356221dd
// converted property getter: - (BOOL)useTrackedProperties;	// 0x35776d51
@end

