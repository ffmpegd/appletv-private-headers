/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"
#import "ATVTCPIPConfigDelegate.h"

@class NSString, BRAirportNetwork;

__attribute__((visibility("hidden")))
@interface LTNetworkFailureController : BRMenuController <BRMenuListItemProvider, ATVTCPIPConfigDelegate> {
	BRAirportNetwork *_network;	// 144 = 0x90
	BOOL _localNetworkUp;	// 148 = 0x94
	NSString *_popToLabel;	// 152 = 0x98
}
- (id)initForNetwork:(id)network withPopToLabel:(id)label;	// 0x19899
- (void).cxx_destruct;	// 0x19c91
- (void)_setTitleAndPromptStrings;	// 0x19cc5
- (void)configurationComplete:(BOOL)complete forInterface:(int)interface;	// 0x19bf1
- (void)configurationPending:(id)pending forInterface:(int)interface;	// 0x19bed
- (float)heightForRow:(long)row;	// 0x19be5
- (long)itemCount;	// 0x19bc9
- (id)itemForRow:(long)row;	// 0x19b25
- (void)itemSelected:(long)selected;	// 0x199cd
- (BOOL)rowSelectable:(long)selectable;	// 0x19be9
- (id)titleForRow:(long)row;	// 0x19be1
@end

