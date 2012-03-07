/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@class BRDividerControl;

@interface BRDividerProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider> {
@private
	id<BRProvider> _provider;	// 4 = 0x4
	BRDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x341ed215; S=0x341ed1e5; converted property
+ (id)providerWithProvider:(id)provider;	// 0x341ed091
- (id)initWithProvider:(id)provider;	// 0x341ecefd
- (void)_providerDataSetChanged:(id)changed;	// 0x341ed569
- (void)_providerItemsModified:(id)modified;	// 0x341ed4f5
- (id)_shiftRangesDown:(id)down;	// 0x341ed415
- (BOOL)_shouldShowDivider;	// 0x341ed3c5
- (void)_updateTopDividerControl;	// 0x341ed325
- (id)accessibilityLabel;	// 0x341ed5d1
- (void)addDividerWithLabel:(id)label;	// 0x341ed0ed
- (void)addDividerWithLabel:(id)label andOrientation:(int)orientation;	// 0x341ed101
- (id)controlFactory;	// 0x341ed245
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x341ed5f1
- (id)dataAtIndex:(long)index;	// 0x341ed289
- (long)dataCount;	// 0x341ed249
- (void)dealloc;	// 0x341ed001
- (id)divider;	// 0x341ed235
// converted property getter: - (BOOL)dividerHidden;	// 0x341ed215
- (BOOL)dividerVisible;	// 0x341ed225
- (id)hashForDataAtIndex:(long)index;	// 0x341ed2dd
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x341ed64d
- (id)provider;	// 0x341ed0dd
- (void)removeDivider;	// 0x341ed1a5
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x341ed1e5
@end

