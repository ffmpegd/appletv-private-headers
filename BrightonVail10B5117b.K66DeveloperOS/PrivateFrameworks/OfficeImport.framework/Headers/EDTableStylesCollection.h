/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"

@class NSString;

@interface EDTableStylesCollection : EDCollection {
	NSString *mDefaultTableStyleName;	// 8 = 0x8
	NSString *mDefaultPivotStyleName;	// 12 = 0xc
}
@property(retain) id defaultPivotStyleName;	// G=0x34c0a6c1; S=0x34ae727d; converted property
@property(retain) id defaultTableStyleName;	// G=0x34c0a6b1; S=0x34ae7239; converted property
- (void)dealloc;	// 0x34a9dc59
- (id)defaultPivotStyle;	// 0x34c0a691
// converted property getter: - (id)defaultPivotStyleName;	// 0x34c0a6c1
- (id)defaultTableStyle;	// 0x34c0a671
// converted property getter: - (id)defaultTableStyleName;	// 0x34c0a6b1
- (id)objectWithName:(id)name;	// 0x34b92381
// converted property setter: - (void)setDefaultPivotStyleName:(id)name;	// 0x34ae727d
// converted property setter: - (void)setDefaultTableStyleName:(id)name;	// 0x34ae7239
@end
