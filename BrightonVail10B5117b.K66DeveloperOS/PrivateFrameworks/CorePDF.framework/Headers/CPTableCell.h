/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPChunk.h"


@interface CPTableCell : CPChunk <CPDisposable> {
	CGRect cellBounds;	// 52 = 0x34
	XXStruct_ny2fMB rowSpan;	// 68 = 0x44
	XXStruct_ny2fMB columnSpan;	// 76 = 0x4c
	XXStruct_gGnVvB *borders;	// 84 = 0x54
	CGColorRef backgroundColor;	// 88 = 0x58
	unsigned backgroundGraphicCount;	// 92 = 0x5c
	id *backgroundGraphics;	// 96 = 0x60
}
@property(readonly, assign) CGColorRef backgroundColor;	// G=0x33a2f5d9; converted property
@property(readonly, assign, nonatomic) unsigned backgroundGraphicCount;	// G=0x33a2fbf1; @synthesize
@property(readonly, assign, nonatomic) CGRect cellBounds;	// G=0x33a2fb75; @synthesize
@property(assign, nonatomic) XXStruct_ny2fMB columnSpan;	// G=0x33a2fbc5; S=0x33a2fbdd; @synthesize
@property(assign, nonatomic) XXStruct_ny2fMB rowSpan;	// G=0x33a2fb99; S=0x33a2fbb1; @synthesize
- (id)initWithBounds:(CGRect)bounds;	// 0x33a2f379
// converted property getter: - (CGColorRef)backgroundColor;	// 0x33a2f5d9
- (id)backgroundGraphicAtIndex:(unsigned)index;	// 0x33a2f7ad
// declared property getter: - (unsigned)backgroundGraphicCount;	// 0x33a2fbf1
- (CGRect)boundsOfBorder:(int)border;	// 0x33a2f8ed
// declared property getter: - (CGRect)cellBounds;	// 0x33a2fb75
- (CGColorRef)colorOfBorder:(int)border;	// 0x33a2f919
// declared property getter: - (XXStruct_ny2fMB)columnSpan;	// 0x33a2fbc5
- (int)compareCellOrdinal:(id)ordinal;	// 0x33a2fac9
- (void)dealloc;	// 0x33a2f599
- (void)dispose;	// 0x33a2f459
- (void)finalize;	// 0x33a2f559
- (unsigned)graphicCountOfBorder:(int)border;	// 0x33a2fa85
- (id)graphicObjectOfBorder:(int)border atIndex:(unsigned)index;	// 0x33a2faa1
// declared property getter: - (XXStruct_ny2fMB)rowSpan;	// 0x33a2fb99
- (void)setBackgroundGraphics:(id)graphics;	// 0x33a2f6b5
- (void)setBorder:(int)border bounds:(CGRect)bounds graphics:(id)graphics;	// 0x33a2f7d9
// declared property setter: - (void)setColumnSpan:(XXStruct_ny2fMB)span;	// 0x33a2fbdd
// declared property setter: - (void)setRowSpan:(XXStruct_ny2fMB)span;	// 0x33a2fbb1
@end

