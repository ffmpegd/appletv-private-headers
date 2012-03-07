/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffectsParent.h"
#import <NSObject.h> // Unknown library

@class OADFill, NSArray;

__attribute__((visibility("hidden")))
@interface OADTableBackground : NSObject <OADEffectsParent> {
@private
	OADFill *mFill;	// 4 = 0x4
	NSArray *mEffects;	// 8 = 0x8
}
@property(retain) id effects;	// G=0x357881c5; S=0x356cfd81; converted property
@property(retain) id fill;	// G=0x356cfed1; S=0x356cfbf9; converted property
- (void)dealloc;	// 0x356cfee1
// converted property getter: - (id)effects;	// 0x357881c5
// converted property getter: - (id)fill;	// 0x356cfed1
- (BOOL)hasEffects;	// 0x357881d5
// converted property setter: - (void)setEffects:(id)effects;	// 0x356cfd81
// converted property setter: - (void)setFill:(id)fill;	// 0x356cfbf9
@end
