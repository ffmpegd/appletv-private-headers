/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface BRTableView : BRControl {
	id _dataSource;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	BOOL _showingHeader;	// 92 = 0x5c
	NSArray *_rows;	// 96 = 0x60
	NSMutableArray *_widthValues;	// 100 = 0x64
	BOOL _reloadNeeded;	// 104 = 0x68
	BOOL _rowsUseColorBanding;	// 105 = 0x69
}
@property(assign, nonatomic) id dataSource;	// G=0x2bef8d; S=0x2bea85; @synthesize=_dataSource
@property(assign, nonatomic) id delegate;	// G=0x2bef9d; S=0x2befad; @synthesize=_delegate
@property(assign, nonatomic) BOOL rowsUseColorBanding;	// G=0x2befbd; S=0x2befcd; @synthesize=_rowsUseColorBanding
- (id)init;	// 0x2be9dd
- (void)_createRows;	// 0x2befdd
- (void)_reloadIfNeeded;	// 0x2bf6c9
- (id)_widthValues;	// 0x2bf48d
- (id)accessibilityLabel;	// 0x2bf589
// declared property getter: - (id)dataSource;	// 0x2bef8d
- (void)dealloc;	// 0x2bea21
// declared property getter: - (id)delegate;	// 0x2bef9d
- (float)headerYOrigin;	// 0x2beb05
- (void)layoutSubcontrols;	// 0x2bed69
- (void)reload;	// 0x2beaa5
// declared property getter: - (BOOL)rowsUseColorBanding;	// 0x2befbd
// declared property setter: - (void)setDataSource:(id)source;	// 0x2bea85
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2befad
// declared property setter: - (void)setRowsUseColorBanding:(BOOL)banding;	// 0x2befcd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2beb85
@end

