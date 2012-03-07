/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDKeyedObject.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class EDReference, EDResources, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	EDWorksheet *mWorksheet;	// 8 = 0x8
	int mWidth;	// 12 = 0xc
	bool mHidden;	// 16 = 0x10
	EDReference *mRange;	// 20 = 0x14
	unsigned mStyleIndex;	// 24 = 0x18
	unsigned char mOutlineLevel;	// 28 = 0x1c
}
@property(assign, getter=isHidden) bool hidden;	// G=0x30cd9a01; S=0x30ccf329; converted property
@property(assign) unsigned char outlineLevel;	// G=0x30e2f1d9; S=0x30ccf49d; converted property
@property(retain) id range;	// G=0x30cd99f1; S=0x30ccf445; converted property
@property(retain) id style;	// G=0x30cdce5d; S=0x30e2f239; converted property
@property(assign) unsigned styleIndex;	// G=0x30ddcbfd; S=0x30ccf48d; converted property
@property(assign) double width;	// G=0x30cdb0dd; S=0x30dbae8d; converted property
@property(assign) int widthInXlUnits;	// G=0x30cdb16d; S=0x30ccf319; converted property
+ (id)columnInfoWithResources:(id)resources worksheet:(id)worksheet;	// 0x30e2f1e9
- (id)initWithResources:(id)resources worksheet:(id)worksheet;	// 0x30ccf275
- (id)copyWithZone:(NSZone *)zone;	// 0x30e2f281
- (void)dealloc;	// 0x30cf3541
// converted property getter: - (bool)isHidden;	// 0x30cd9a01
- (unsigned)key;	// 0x30ccf4dd
// converted property getter: - (unsigned char)outlineLevel;	// 0x30e2f1d9
// converted property getter: - (id)range;	// 0x30cd99f1
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x30ccf329
// converted property setter: - (void)setOutlineLevel:(unsigned char)level;	// 0x30ccf49d
// converted property setter: - (void)setRange:(id)range;	// 0x30ccf445
- (void)setRangeWithFirstColumn:(int)firstColumn lastColumn:(int)column;	// 0x30ccf339
// converted property setter: - (void)setStyle:(id)style;	// 0x30e2f239
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x30ccf48d
// converted property setter: - (void)setWidth:(double)width;	// 0x30dbae8d
// converted property setter: - (void)setWidthInXlUnits:(int)xlUnits;	// 0x30ccf319
// converted property getter: - (id)style;	// 0x30cdce5d
// converted property getter: - (unsigned)styleIndex;	// 0x30ddcbfd
// converted property getter: - (double)width;	// 0x30cdb0dd
// converted property getter: - (int)widthInXlUnits;	// 0x30cdb16d
@end

