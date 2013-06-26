/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRTableRow : BRControl {
	NSArray *_items;	// 84 = 0x54
	NSArray *_widthValues;	// 88 = 0x58
}
+ (id)tableRowWithItems:(id)items widthValues:(id)values;	// 0x2b633d
- (id)initWithItems:(id)items widthValues:(id)values;	// 0x2b637d
- (void)dealloc;	// 0x2b63f5
- (void)layoutSubcontrols;	// 0x2b6545
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2b6459
@end
