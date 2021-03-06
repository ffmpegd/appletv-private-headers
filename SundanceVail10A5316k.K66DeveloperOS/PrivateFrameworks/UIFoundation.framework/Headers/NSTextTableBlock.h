/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSTextBlock.h"

@class NSTextTable;

__attribute__((visibility("hidden")))
@interface NSTextTableBlock : NSTextBlock {
@private
	NSTextTable *_table;	// 32 = 0x20
	int _rowNum;	// 36 = 0x24
	int _colNum;	// 40 = 0x28
	int _rowSpan;	// 44 = 0x2c
	int _colSpan;	// 48 = 0x30
	void *_tableBlockPrimary;	// 52 = 0x34
	void *_tableBlockSecondary;	// 56 = 0x38
}
@property(readonly, assign) int rowSpan;	// G=0x35f0555d; converted property
@property(readonly, retain) NSTextTable *table;	// G=0x35f0553d; converted property
+ (void)initialize;	// 0x35f04fc1
- (id)initWithCoder:(id)coder;	// 0x35f05291
- (id)initWithTable:(id)table startingRow:(int)row rowSpan:(int)span startingColumn:(int)column columnSpan:(int)span5;	// 0x35f05001
- (void)_setColumnSpan:(int)span;	// 0x35f0559d
- (void)_setRowSpan:(int)span;	// 0x35f0558d
- (CGRect)boundsRectForContentRect:(CGRect)contentRect inRect:(CGRect)rect textContainer:(id)container characterRange:(NSRange)range;	// 0x35f05621
- (int)columnSpan;	// 0x35f0557d
- (id)copyWithZone:(NSZone *)zone;	// 0x35f0548d
- (void)dealloc;	// 0x35f050c5
- (void)drawBackgroundWithFrame:(CGRect)frame inView:(id)view characterRange:(NSRange)range layoutManager:(id)manager;	// 0x35f056a1
- (void)encodeWithCoder:(id)coder;	// 0x35f05111
- (CGRect)rectForLayoutAtPoint:(CGPoint)point inRect:(CGRect)rect textContainer:(id)container characterRange:(NSRange)range;	// 0x35f055ad
// converted property getter: - (int)rowSpan;	// 0x35f0555d
- (int)startingColumn;	// 0x35f0556d
- (int)startingRow;	// 0x35f0554d
// converted property getter: - (id)table;	// 0x35f0553d
@end

