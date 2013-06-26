/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library


@interface ABRecordMerger : NSObject {
}
- (BOOL)_propertiesArray:(id)array containsProperty:(int)property;	// 0x30926079
- (BOOL)addMultiValueEntry:(void *)entry atIndex:(unsigned)index toMultiValue:(void *)multiValue withProperty:(int)property existingValues:(CFSetRef)values;	// 0x30925ea9
- (void)addValue:(void *)value withProperty:(int)property toExistingValues:(CFSetRef)existingValues;	// 0x30925e7d
- (BOOL)mergeMultiValueProperty:(int)property fromRecord:(void *)record intoRecord:(void *)record3;	// 0x30925f2d
- (BOOL)mergeSingleValueProperty:(int)property fromRecord:(void *)record intoRecord:(void *)record3;	// 0x30925d99
- (void)mergeVCardRecord:(void *)record withProperties:(CFArrayRef)properties intoRecord:(void *)record3;	// 0x30926129
@end
