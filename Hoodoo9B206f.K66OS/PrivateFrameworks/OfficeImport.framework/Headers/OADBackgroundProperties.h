/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBackground.h"

@class OADFill, NSArray;

__attribute__((visibility("hidden")))
@interface OADBackgroundProperties : OADBackground {
@private
	OADFill *mFill;	// 4 = 0x4
	NSArray *mEffects;	// 8 = 0x8
}
@property(retain) id effects;	// G=0x3461041d; S=0x345396c5; converted property
@property(retain) id fill;	// G=0x343feacd; S=0x343fda65; converted property
- (void)dealloc;	// 0x343fdb8d
// converted property getter: - (id)effects;	// 0x3461041d
// converted property getter: - (id)fill;	// 0x343feacd
- (BOOL)isEqual:(id)equal;	// 0x346104bd
// converted property setter: - (void)setEffects:(id)effects;	// 0x345396c5
// converted property setter: - (void)setFill:(id)fill;	// 0x343fda65
@end
