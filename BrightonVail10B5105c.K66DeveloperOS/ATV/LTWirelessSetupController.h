/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAPNetworkSelectionDelegate.h"
#import "BRViewController.h"

@protocol LTWirelessSetupResultDelegate;

__attribute__((visibility("hidden")))
@interface LTWirelessSetupController : BRViewController <ATVAPNetworkSelectionDelegate> {
	id<LTWirelessSetupResultDelegate> _delegate;	// 104 = 0x68
	BOOL _didJoinNetwork;	// 108 = 0x6c
}
@property(assign) id delegate;	// G=0x18425; S=0x183e1; converted property
- (id)init;	// 0x18395
- (void).cxx_destruct;	// 0x186d1
- (void)_showNetworkMenu;	// 0x186e5
// converted property getter: - (id)delegate;	// 0x18425
- (void)network:(id)network wasSelected:(BOOL)selected;	// 0x18555
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x183e1
- (void)wasExhumed;	// 0x184a5
- (void)wasPopped;	// 0x18479
- (void)wasPushed;	// 0x18439
@end

