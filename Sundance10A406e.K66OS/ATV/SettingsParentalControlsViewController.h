/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSInvocation, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsParentalControlsViewController : BRViewController {
	BOOL _correctPIN;	// 104 = 0x68
	NSInvocation *_correctPINAction;	// 108 = 0x6c
	NSArray *_pcMerchants;	// 112 = 0x70
}
+ (id)localizedStringForAccessMode:(int)accessMode;	// 0x94f15
+ (int)nextModeFromAccessMode:(int)accessMode accessControlled:(BOOL)controlled;	// 0x94f79
- (id)init;	// 0x94f95
- (void).cxx_destruct;	// 0x954e1
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction;	// 0x97575
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction argument:(void *)argument;	// 0x97589
- (id)_buildPasscodeControllerWithMode:(int)mode;	// 0x96cdd
- (void)_changePIN;	// 0x95fc5
- (id)_controlledMerchants;	// 0x95e55
- (void)_handlePCEnabledSectionSelectionForRow:(long)row;	// 0x95d6d
- (void)_handlePCStoreSectionSelectionForRow:(long)row;	// 0x95d99
- (void)_iterateRatingThresholdForMediaType:(id)mediaType;	// 0x970d5
- (id)_ratingThresholdStringForMediaType:(id)mediaType;	// 0x96db1
- (void)_reloadMenuItems;	// 0x95f6d
- (void)_setTextForPCApplicationsSectionMenuItem:(id)pcapplicationsSectionMenuItem atRow:(long)row;	// 0x95645
- (void)_setTextForPCMatchSectionMenuItem:(id)pcmatchSectionMenuItem atRow:(long)row;	// 0x95515
- (void)_setTextForPCStoreSectionMenuItem:(id)pcstoreSectionMenuItem atRow:(long)row;	// 0x958cd
- (void)_successfulPINEntry:(id)entry;	// 0x97751
- (void)_toggleAirPlaySettings;	// 0x967c9
- (void)_toggleExplicitContentMode;	// 0x96a61
- (void)_toggleITunesMatchMode;	// 0x960c5
- (void)_toggleMerchantModeForIndex:(long)index;	// 0x96381
- (void)_toggleParentalControls;	// 0x96291
- (void)_togglePurchaseRentalMode;	// 0x9670d
- (void)_toggleRatingSystem;	// 0x968b5
- (void)_toggleRestrictMoviesMode;	// 0x96961
- (void)_toggleRestrictTVShowsMode;	// 0x969e1
- (void)controlWasActivated;	// 0x9515d
- (void)dealloc;	// 0x950f1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x9543d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x9519d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x9537d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x95341
- (long)numberOfSectionsInList:(id)list;	// 0x9533d
@end
