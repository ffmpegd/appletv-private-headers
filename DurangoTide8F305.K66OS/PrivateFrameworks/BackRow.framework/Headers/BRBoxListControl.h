/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRDropShadowControl, BRListControl;

__attribute__((visibility("hidden")))
@interface BRBoxListControl : BRControl {
@private
	BRListControl *_list;	// 44 = 0x2c
	BRDropShadowControl *_shadow;	// 48 = 0x30
}
@property(retain) id providers;	// G=0x329669bd; S=0x329669dd; converted property
- (id)init;	// 0x32967519
- (void)dealloc;	// 0x32966a45
- (void)layoutSubcontrols;	// 0x329676a5
- (float)listHeightToMaximum:(float)maximum;	// 0x3296699d
// converted property getter: - (id)providers;	// 0x329669bd
- (void)setProvider:(id)provider;	// 0x32966a11
// converted property setter: - (void)setProviders:(id)providers;	// 0x329669dd
@end

