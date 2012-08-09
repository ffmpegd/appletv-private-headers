/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextEntryController.h"
#import "BRTextFieldDelegate.h"

@class BRAirportNetwork;
@protocol ATVAPPasswordEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVAPPasswordEntryController : BRTextEntryController <BRTextFieldDelegate> {
	BRAirportNetwork *_network;	// 180 = 0xb4
	id<ATVAPPasswordEntryDelegate> _delegate;	// 184 = 0xb8
}
- (id)initForNetwork:(id)network acceptOnlyHex:(BOOL)hex notifying:(id)notifying;	// 0x1fded1
- (void).cxx_destruct;	// 0x1fe2b1
- (void)setInitialPassword:(id)password;	// 0x1fe2a1
- (void)textDidChange:(id)text;	// 0x1fe235
- (void)textDidEndEditing:(id)text;	// 0x1fe239
@end
