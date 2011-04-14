/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDReference.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EDSheetReference : EDReference {
@private
	int mSheetIndex;	// 20 = 0x14
}
+ (id)referenceWithSheetIndex:(int)sheetIndex firstRow:(int)row lastRow:(int)row3 firstColumn:(int)column lastColumn:(int)column5;	// 0x31a17161
- (id)init;	// 0x31ae0b51
- (id)initWithSheetIndex:(int)sheetIndex firstRow:(int)row lastRow:(int)row3 firstColumn:(int)column lastColumn:(int)column5;	// 0x31a171b9
- (bool)fullyAdjacentToReference:(id)reference;	// 0x31a75c41
- (unsigned)hash;	// 0x31ae0ac9
- (BOOL)isEqual:(id)equal;	// 0x31ae0b8d
- (BOOL)isEqualToTableReference:(id)tableReference;	// 0x31ae0b05
- (bool)isSheedIndexValid;	// 0x31ae0ab5
- (int)sheetIndex;	// 0x31a19cad
- (void)unionWithReference:(id)reference;	// 0x31a75cb1
@end
