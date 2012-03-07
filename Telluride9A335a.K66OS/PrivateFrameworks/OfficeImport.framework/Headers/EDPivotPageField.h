/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotPageField : NSObject {
@private
	unsigned mFieldId;	// 4 = 0x4
	NSString *mCap;	// 8 = 0x8
	NSString *mName;	// 12 = 0xc
}
@property(retain) id cap;	// G=0x35377781; S=0x353778b9; converted property
@property(assign) unsigned fieldId;	// G=0x35377751; S=0x35377761; converted property
@property(retain) id name;	// G=0x35377771; S=0x35377901; converted property
+ (id)pivotPageField;	// 0x35377871
- (id)init;	// 0x35377831
// converted property getter: - (id)cap;	// 0x35377781
- (void)dealloc;	// 0x35377949
// converted property getter: - (unsigned)fieldId;	// 0x35377751
// converted property getter: - (id)name;	// 0x35377771
// converted property setter: - (void)setCap:(id)cap;	// 0x353778b9
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x35377761
// converted property setter: - (void)setName:(id)name;	// 0x35377901
@end

