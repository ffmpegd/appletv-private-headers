/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotDataField : NSObject {
@private
	int mBaseField;	// 4 = 0x4
	unsigned mBaseItem;	// 8 = 0x8
	unsigned mFieldId;	// 12 = 0xc
	unsigned mNumFmtId;	// 16 = 0x10
	NSString *mName;	// 20 = 0x14
	int mFormat;	// 24 = 0x18
}
@property(assign) int baseField;	// G=0x345c55e1; S=0x345803c9; converted property
@property(assign) unsigned baseItem;	// G=0x345c55f1; S=0x345803d9; converted property
@property(assign) unsigned fieldId;	// G=0x345c5601; S=0x345803e9; converted property
@property(retain) id name;	// G=0x345c5621; S=0x34580409; converted property
@property(assign) unsigned numFmtId;	// G=0x345c5611; S=0x345803f9; converted property
@property(assign) int showDataAs;	// G=0x345c5631; S=0x3458055d; converted property
+ (id)pivotDataField;	// 0x34580309
- (id)init;	// 0x34580351
// converted property getter: - (int)baseField;	// 0x345c55e1
// converted property getter: - (unsigned)baseItem;	// 0x345c55f1
- (void)dealloc;	// 0x34581fad
// converted property getter: - (unsigned)fieldId;	// 0x345c5601
// converted property getter: - (id)name;	// 0x345c5621
// converted property getter: - (unsigned)numFmtId;	// 0x345c5611
// converted property setter: - (void)setBaseField:(int)field;	// 0x345803c9
// converted property setter: - (void)setBaseItem:(unsigned)item;	// 0x345803d9
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x345803e9
// converted property setter: - (void)setName:(id)name;	// 0x34580409
// converted property setter: - (void)setNumFmtId:(unsigned)anId;	// 0x345803f9
// converted property setter: - (void)setShowDataAs:(int)as;	// 0x3458055d
// converted property getter: - (int)showDataAs;	// 0x345c5631
@end

