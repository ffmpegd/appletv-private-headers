/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotConditionalFormat : NSObject {
@private
	unsigned mPriority;	// 4 = 0x4
	int mType;	// 8 = 0x8
	int mScope;	// 12 = 0xc
	EDCollection *mPivotAreas;	// 16 = 0x10
}
@property(assign) unsigned priority;	// G=0x32985641; S=0x32985651; converted property
@property(assign) int scope;	// G=0x32985681; S=0x32985691; converted property
@property(assign) int type;	// G=0x32985661; S=0x32985671; converted property
+ (id)pivotConditionalFormat;	// 0x32985b01
- (id)init;	// 0x32985a69
- (void)dealloc;	// 0x32985b49
- (id)pivotAreas;	// 0x329856a1
// converted property getter: - (unsigned)priority;	// 0x32985641
// converted property getter: - (int)scope;	// 0x32985681
// converted property setter: - (void)setPriority:(unsigned)priority;	// 0x32985651
// converted property setter: - (void)setScope:(int)scope;	// 0x32985691
// converted property setter: - (void)setType:(int)type;	// 0x32985671
// converted property getter: - (int)type;	// 0x32985661
@end
