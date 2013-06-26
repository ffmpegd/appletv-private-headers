/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRAsyncImageControl, NSDictionary, NSMutableArray, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVThunderGameCourtView : BRControl {
	NSDictionary *_data;	// 84 = 0x54
	BRAsyncImageControl *_court;	// 88 = 0x58
	BRControl *_courtContainer;	// 92 = 0x5c
	BRImageControl *_courtGlass;	// 96 = 0x60
	NSMutableArray *_homePlayerCards;	// 100 = 0x64
	NSMutableArray *_awayPlayerCards;	// 104 = 0x68
}
- (id)initWithDictionary:(id)dictionary;	// 0x243301
- (id)accessibilityLabel;	// 0x243db1
- (void)dealloc;	// 0x243891
- (void)layoutSubcontrols;	// 0x243975
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x243945
@end
