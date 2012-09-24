/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface EDPivotDataField : NSObject {
	int mBaseField;	// 4 = 0x4
	unsigned mBaseItem;	// 8 = 0x8
	unsigned mFieldId;	// 12 = 0xc
	unsigned mNumFmtId;	// 16 = 0x10
	NSString *mName;	// 20 = 0x14
	int mFormat;	// 24 = 0x18
}
@property(assign) int baseField;	// G=0x35084e05; S=0x35014971; converted property
@property(assign) unsigned baseItem;	// G=0x35084e15; S=0x35014981; converted property
@property(assign) unsigned fieldId;	// G=0x35084e25; S=0x35014991; converted property
@property(retain) id name;	// G=0x35084e45; S=0x350149b1; converted property
@property(assign) unsigned numFmtId;	// G=0x35084e35; S=0x350149a1; converted property
@property(assign) int showDataAs;	// G=0x35084e55; S=0x35014b15; converted property
+ (id)pivotDataField;	// 0x350148b1
- (id)init;	// 0x350148f9
// converted property getter: - (int)baseField;	// 0x35084e05
// converted property getter: - (unsigned)baseItem;	// 0x35084e15
- (void)dealloc;	// 0x350163f1
// converted property getter: - (unsigned)fieldId;	// 0x35084e25
// converted property getter: - (id)name;	// 0x35084e45
// converted property getter: - (unsigned)numFmtId;	// 0x35084e35
// converted property setter: - (void)setBaseField:(int)field;	// 0x35014971
// converted property setter: - (void)setBaseItem:(unsigned)item;	// 0x35014981
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x35014991
// converted property setter: - (void)setName:(id)name;	// 0x350149b1
// converted property setter: - (void)setNumFmtId:(unsigned)anId;	// 0x350149a1
// converted property setter: - (void)setShowDataAs:(int)as;	// 0x35014b15
// converted property getter: - (int)showDataAs;	// 0x35084e55
@end
