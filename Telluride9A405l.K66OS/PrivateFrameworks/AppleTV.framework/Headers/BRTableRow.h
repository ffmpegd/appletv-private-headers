/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray;

@interface BRTableRow : BRControl {
@private
	NSArray *_items;	// 48 = 0x30
	NSArray *_widthValues;	// 52 = 0x34
}
+ (id)tableRowWithItems:(id)items widthValues:(id)values;	// 0x35dd54c1
- (id)initWithItems:(id)items widthValues:(id)values;	// 0x35dd5501
- (void)dealloc;	// 0x35dd5579
- (void)layoutSubcontrols;	// 0x35dd56a5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35dd55d9
@end
