/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface EDReference : NSObject <NSCopying> {
@private
	EDAreaReference mAreaReference;	// 4 = 0x4
}
@property(assign) int firstColumn;	// G=0x3290a4fd; S=0x32a79029; converted property
@property(assign) int firstRow;	// G=0x329149b9; S=0x32a79015; converted property
@property(assign) int lastColumn;	// G=0x329149dd; S=0x32a79051; converted property
@property(assign) int lastRow;	// G=0x329149c9; S=0x32a7903d; converted property
+ (id)reference;	// 0x32a6eedd
+ (id)referenceWithAreaReference:(EDAreaReference *)areaReference;	// 0x329c4b51
+ (id)referenceWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x3290a385
- (id)init;	// 0x3292d049
- (id)initWithAreaReference:(EDAreaReference *)areaReference;	// 0x329c4b9d
- (id)initWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x3290a3e1
- (EDAreaReference)areaReference;	// 0x32a6ee49
- (bool)containsRow:(int)row column:(int)column;	// 0x32915c9d
- (id)copyWithZone:(NSZone *)zone;	// 0x32a2b025
- (unsigned)countOfCellsBeingReferenced;	// 0x3298fe29
// converted property getter: - (int)firstColumn;	// 0x3290a4fd
// converted property getter: - (int)firstRow;	// 0x329149b9
- (bool)fullyAdjacentToReference:(id)reference;	// 0x329291e9
- (unsigned)hash;	// 0x32a2b02d
- (bool)isCellReference;	// 0x32a6ee6d
- (bool)isColumnReference;	// 0x32a6eeb9
- (BOOL)isEqual:(id)equal;	// 0x32a2bec9
- (BOOL)isEqualToReference:(id)reference;	// 0x32929299
- (bool)isRowReference;	// 0x32a6ee95
- (bool)isValidAreaReference;	// 0x32912681
- (bool)isValidCellReference;	// 0x3298fe7d
// converted property getter: - (int)lastColumn;	// 0x329149dd
// converted property getter: - (int)lastRow;	// 0x329149c9
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x32a79029
// converted property setter: - (void)setFirstRow:(int)row;	// 0x32a79015
// converted property setter: - (void)setLastColumn:(int)column;	// 0x32a79051
// converted property setter: - (void)setLastRow:(int)row;	// 0x32a7903d
- (void)unionWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x3292d0bd
- (void)unionWithReference:(id)reference;	// 0x329f1cdd
- (void)unionWithRow:(int)row column:(int)column;	// 0x3292d09d
@end

