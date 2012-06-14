/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVAPPasswordEntryDelegate.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class BRAirportNetwork;

__attribute__((visibility("hidden")))
@interface ATVAPWEPPasswordMenuController : BRMenuController <BRMenuListItemProvider, ATVAPPasswordEntryDelegate> {
@private
	BRAirportNetwork *_network;	// 128 = 0x80
	long _passwordType;	// 132 = 0x84
	id<ATVAPPasswordEntryDelegate> _delegate;	// 136 = 0x88
}
- (id)initForNetwork:(id)network notifying:(id)notifying;	// 0x365a5511
- (void)dealloc;	// 0x365a56e9
- (float)heightForRow:(long)row;	// 0x365a586d
- (long)itemCount;	// 0x365a5865
- (id)itemForRow:(long)row;	// 0x365a57d1
- (void)itemSelected:(long)selected;	// 0x365a5735
- (void)passwordEntered:(id)entered forNetwork:(id)network;	// 0x365a5875
- (BOOL)rowSelectable:(long)selectable;	// 0x365a5871
- (id)titleForRow:(long)row;	// 0x365a5869
@end
