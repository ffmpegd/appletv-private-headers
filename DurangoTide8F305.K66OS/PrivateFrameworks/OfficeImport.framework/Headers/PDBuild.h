/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface PDBuild : NSObject {
@private
	BOOL mIsAnimateBackground;	// 4 = 0x4
	OADDrawable *mDrawable;	// 8 = 0x8
}
@property(retain) id drawable;	// G=0x345cb249; S=0x345cb5e9; converted property
@property(assign) BOOL isAnimateBackground;	// G=0x345cb229; S=0x345cb239; converted property
- (id)init;	// 0x34530599
- (void)dealloc;	// 0x34530949
// converted property getter: - (id)drawable;	// 0x345cb249
// converted property getter: - (BOOL)isAnimateBackground;	// 0x345cb229
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x345cb5e9
// converted property setter: - (void)setIsAnimateBackground:(BOOL)background;	// 0x345cb239
@end

