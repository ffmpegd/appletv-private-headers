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
	BRAirportNetwork *_network;	// 184 = 0xb8
	id<ATVAPPasswordEntryDelegate> _delegate;	// 188 = 0xbc
}
- (id)initForNetwork:(id)network acceptOnlyHex:(BOOL)hex notifying:(id)notifying;	// 0x229105
- (void).cxx_destruct;	// 0x2293e1
- (void)setInitialPassword:(id)password;	// 0x2293d1
- (void)textDidChange:(id)text;	// 0x229349
- (void)textDidEndEditing:(id)text;	// 0x22934d
@end

