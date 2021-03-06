/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDReference.h"


__attribute__((visibility("hidden")))
@interface EDSheetReference : EDReference {
@private
	int mSheetIndex;	// 20 = 0x14
}
+ (id)referenceWithSheetIndex:(int)sheetIndex firstRow:(int)row lastRow:(int)row3 firstColumn:(int)column lastColumn:(int)column5;	// 0x328a6c4d
- (id)init;	// 0x32990c85
- (id)initWithSheetIndex:(int)sheetIndex firstRow:(int)row lastRow:(int)row3 firstColumn:(int)column lastColumn:(int)column5;	// 0x328a6cb1
- (bool)fullyAdjacentToReference:(id)reference;	// 0x32908bfd
- (unsigned)hash;	// 0x32990cc5
- (BOOL)isEqual:(id)equal;	// 0x32990d05
- (BOOL)isEqualToTableReference:(id)tableReference;	// 0x32990d61
- (bool)isSheedIndexValid;	// 0x32990c6d
- (int)sheetIndex;	// 0x328aa41d
- (void)unionWithReference:(id)reference;	// 0x32908c7d
@end

