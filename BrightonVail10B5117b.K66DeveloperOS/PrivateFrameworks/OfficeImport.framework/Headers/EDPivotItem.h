/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

@interface EDPivotItem : NSObject {
	unsigned mRepeatedItemCounts;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDCollection *mItemIndexes;	// 12 = 0xc
}
@property(assign) unsigned repeatedItemCounts;	// G=0x34b98fcd; S=0x34b99095; converted property
@property(assign) int type;	// G=0x34b98fdd; S=0x34b9752d; converted property
+ (id)pivotItem;	// 0x34b97461
- (id)init;	// 0x34b974a9
- (void)dealloc;	// 0x34b99359
- (id)itemIndexes;	// 0x34b9753d
// converted property getter: - (unsigned)repeatedItemCounts;	// 0x34b98fcd
// converted property setter: - (void)setRepeatedItemCounts:(unsigned)counts;	// 0x34b99095
// converted property setter: - (void)setType:(int)type;	// 0x34b9752d
// converted property getter: - (int)type;	// 0x34b98fdd
@end
