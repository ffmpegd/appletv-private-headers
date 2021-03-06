/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsPINEntryViewDelegate.h"
#import "BRViewController.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SettingsTouchRemotePINEntryController : BRViewController <SettingsPINEntryViewDelegate> {
	NSDictionary *_remoteInfo;	// 104 = 0x68
}
- (id)initWithTouchRemoteInfo:(id)touchRemoteInfo;	// 0xadcad
- (void).cxx_destruct;	// 0xae04d
- (void)_pairingCanceled:(id)canceled;	// 0xae19d
- (void)_pairingFailed:(id)failed;	// 0xae115
- (void)_pairingSucceeded:(id)succeeded;	// 0xae061
- (void)dealloc;	// 0xadf41
- (void)pinEntryComplete:(id)complete;	// 0xadfad
@end

