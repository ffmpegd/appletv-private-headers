/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPGraphicUser.h"
#import "CPChunk.h"


@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {
	CGRect tableBounds;	// 52 = 0x34
	unsigned rowCount;	// 68 = 0x44
	float *rowY;	// 72 = 0x48
	unsigned columnCount;	// 76 = 0x4c
	float *columnX;	// 80 = 0x50
	CGColorRef backgroundColor;	// 84 = 0x54
	unsigned backgroundGraphicCount;	// 88 = 0x58
	id *backgroundGraphics;	// 92 = 0x5c
	unsigned usedGraphicCount;	// 96 = 0x60
	BOOL disposed;	// 100 = 0x64
}
@property(readonly, assign) CGColorRef backgroundColor;	// G=0x305e7ee1; converted property
@property(readonly, assign, nonatomic) unsigned backgroundGraphicCount;	// G=0x305e813d; @synthesize
@property(assign, nonatomic) unsigned columnCount;	// G=0x305e7ed1; S=0x305e7e85; 
@property(readonly, assign, nonatomic) float *columnX;	// G=0x305e812d; @synthesize
@property(assign, nonatomic) unsigned rowCount;	// G=0x305e7e75; S=0x305e7e29; 
@property(readonly, assign, nonatomic) float *rowY;	// G=0x305e811d; @synthesize
@property(readonly, assign, nonatomic) CGRect tableBounds;	// G=0x305e8105; @synthesize
@property(readonly, assign) unsigned usedGraphicCount;	// G=0x305e80f5; converted property
- (id)initWithBounds:(CGRect)bounds;	// 0x305e7c85
// converted property getter: - (CGColorRef)backgroundColor;	// 0x305e7ee1
- (id)backgroundGraphicAtIndex:(unsigned)index;	// 0x305e80b5
// declared property getter: - (unsigned)backgroundGraphicCount;	// 0x305e813d
// declared property getter: - (unsigned)columnCount;	// 0x305e7ed1
// declared property getter: - (float *)columnX;	// 0x305e812d
- (void)dealloc;	// 0x305e7de9
- (void)dispose;	// 0x305e7cd9
- (void)finalize;	// 0x305e7da9
- (void)incrementUsedGraphicCount;	// 0x305e80e1
// declared property getter: - (unsigned)rowCount;	// 0x305e7e75
// declared property getter: - (float *)rowY;	// 0x305e811d
- (void)setBackgroundGraphics:(id)graphics;	// 0x305e7fc1
// declared property setter: - (void)setColumnCount:(unsigned)count;	// 0x305e7e85
// declared property setter: - (void)setRowCount:(unsigned)count;	// 0x305e7e29
// declared property getter: - (CGRect)tableBounds;	// 0x305e8105
// converted property getter: - (unsigned)usedGraphicCount;	// 0x305e80f5
@end
