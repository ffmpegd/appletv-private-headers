/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRHorizontalDividerControl;

__attribute__((visibility("hidden")))
@interface BRDividerProvider : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory, BRProvider> {
	id<BRProvider> _provider;	// 4 = 0x4
	BRHorizontalDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x2deb39; S=0x2deb0d; converted property
+ (id)providerWithProvider:(id)provider;	// 0x2de9e5
- (id)initWithProvider:(id)provider;	// 0x2de85d
- (void)_providerDataSetChanged:(id)changed;	// 0x2deeb1
- (void)_providerItemsModified:(id)modified;	// 0x2dee3d
- (id)_shiftRangesDown:(id)down;	// 0x2ded65
- (BOOL)_shouldShowDivider;	// 0x2ded15
- (void)_updateTopDividerControl;	// 0x2dec79
- (id)accessibilityLabel;	// 0x2def19
- (void)addDividerWithLabel:(id)label;	// 0x2dea41
- (id)controlFactory;	// 0x2deb69
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2def39
- (id)dataAtIndex:(long)index;	// 0x2deba9
- (long)dataCount;	// 0x2deb6d
- (void)dealloc;	// 0x2de955
- (id)divider;	// 0x2deb59
// converted property getter: - (BOOL)dividerHidden;	// 0x2deb39
- (BOOL)dividerVisible;	// 0x2deb49
- (id)hashForDataAtIndex:(long)index;	// 0x2debf5
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x2def8d
- (id)identifier;	// 0x2dec31
- (id)provider;	// 0x2dea31
- (void)removeDivider;	// 0x2deacd
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x2deb0d
@end
