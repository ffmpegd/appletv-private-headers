/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EDTableStylesCollection : EDCollection {
@private
	NSString *mDefaultTableStyleName;	// 8 = 0x8
	NSString *mDefaultPivotStyleName;	// 12 = 0xc
}
@property(retain) id defaultPivotStyleName;	// G=0x31231cf1; S=0x3110e915; converted property
@property(retain) id defaultTableStyleName;	// G=0x31231ce1; S=0x3110e8d1; converted property
- (void)dealloc;	// 0x310c52f1
- (id)defaultPivotStyle;	// 0x31231cc1
// converted property getter: - (id)defaultPivotStyleName;	// 0x31231cf1
- (id)defaultTableStyle;	// 0x31231ca1
// converted property getter: - (id)defaultTableStyleName;	// 0x31231ce1
- (id)objectWithName:(id)name;	// 0x311b9a41
// converted property setter: - (void)setDefaultPivotStyleName:(id)name;	// 0x3110e915
// converted property setter: - (void)setDefaultTableStyleName:(id)name;	// 0x3110e8d1
@end
