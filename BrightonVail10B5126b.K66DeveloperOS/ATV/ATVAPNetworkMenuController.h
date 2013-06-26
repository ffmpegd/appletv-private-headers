/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuListItemProvider.h"
#import "ATVAPPasswordEntryDelegate.h"
#import "BRTextFieldDelegate.h"
#import "BRMenuController.h"
#import "ATVAPTestResultDelegate.h"

@class NSString, NSArray, ATVAPTestController, BRAirportNetworksProvider, BRAirportNetwork;
@protocol ATVAPNetworkSelectionDelegate;

__attribute__((visibility("hidden")))
@interface ATVAPNetworkMenuController : BRMenuController <ATVAPTestResultDelegate, ATVAPPasswordEntryDelegate, BRTextFieldDelegate, BRMenuListItemProvider> {
	id<ATVAPNetworkSelectionDelegate> _delegate;	// 144 = 0x90
	ATVAPTestController *_testController;	// 148 = 0x94
	NSArray *_networks;	// 152 = 0x98
	BRAirportNetwork *_selectedNetwork;	// 156 = 0x9c
	NSString *_otherNetworkName;	// 160 = 0xa0
	NSString *_attemptedPassword;	// 164 = 0xa4
	BOOL _isCollectingNetworks;	// 168 = 0xa8
	BOOL _forOOB;	// 169 = 0xa9
	BRAirportNetworksProvider *_networksProvider;	// 172 = 0xac
}
- (id)initWithNotifying:(id)notifying duringOOB:(BOOL)oob;	// 0x2141b9
- (void).cxx_destruct;	// 0x2148c1
- (void)_associateWithNetworkCompleted:(id)networkCompleted;	// 0x215995
- (void)_collectPasswordForNetwork:(id)network;	// 0x214c5d
- (void)_collectWirelessNetworks;	// 0x214bc5
- (id)_currentNetworkListItem;	// 0x215d75
- (BOOL)_exitErrorDialogWithAnyPress:(id)anyPress;	// 0x215cc1
- (void)_networkHasBeenCollected:(id)collected;	// 0x215839
- (void)_networkStateChanged:(id)changed;	// 0x2161bd
- (void)_networksHaveBeenCollected:(id)collected;	// 0x215419
- (id)_otherNetworkListItem;	// 0x215e61
- (void)_removeDirectedScanControllerIfPresent;	// 0x215b85
- (void)_removeTestControllerIfPresent;	// 0x215c25
- (void)_selectNetwork:(id)network usingPassword:(id)password;	// 0x214e69
- (void)_showFailedNetworkConnection:(id)connection error:(id)error;	// 0x215059
- (void)_updateMenuWidth;	// 0x214955
- (void)_updateNetworksProvider;	// 0x2155ad
- (BOOL)brEventAction:(id)action;	// 0x214855
- (void)dealloc;	// 0x2145d1
- (void)itemSelected:(long)selected;	// 0x21463d
- (void)passwordEntered:(id)entered forNetwork:(id)network;	// 0x215fd5
- (void)testCompleted:(BOOL)completed;	// 0x215f89
- (void)textDidChange:(id)text;	// 0x21602d
- (void)textDidEndEditing:(id)text;	// 0x216031
@end
