/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BREventDelegate.h"
#import "BRSelectionHandler.h"
#import "BRViewController.h"

@class ATVMainMenuButtonGrid, BRImage, NSMutableArray, BRImageControl, NSDictionary, NSArray, BRFadeMaskLayer, NSMutableDictionary, BRPreferences, BRShimmerControl, BRTopShelfView, BRCursorControl, ATVTopShelfRefreshTask, BRImageManager, BRURLDocument;
@protocol BRTopShelfController, ATVMainMenuControllerDelegate, BRAppliance;

@interface ATVMainMenuController : BRViewController <BRSelectionHandler, BREventDelegate> {
@private
	BRControl *_containerView;	// 88 = 0x58
	id<BRTopShelfController> _shelfController;	// 92 = 0x5c
	BRImageControl *_shelfBackground;	// 96 = 0x60
	BRImageControl *_appsBackground;	// 100 = 0x64
	BRImageControl *_appsBackgroundShroud;	// 104 = 0x68
	BRTopShelfView *_topShelfView;	// 108 = 0x6c
	BOOL _shelfTransitionInFlight;	// 112 = 0x70
	BOOL _suppressShelfReloadFromFocusedAppliance;	// 113 = 0x71
	ATVMainMenuButtonGrid *_mainApplicationsGrid;	// 116 = 0x74
	ATVMainMenuButtonGrid *_internetContentGrid;	// 120 = 0x78
	BRShimmerControl *_topDivider;	// 124 = 0x7c
	BRFadeMaskLayer *_internetContentFadeMask;	// 128 = 0x80
	id<ATVMainMenuControllerDelegate> _delegate;	// 132 = 0x84
	BRCursorControl *_cursor;	// 136 = 0x88
	BRImage *_blackBrickImage;	// 140 = 0x8c
	id<BRAppliance> _focusedAppliance;	// 144 = 0x90
	NSMutableDictionary *_shelfControllersByApplication;	// 148 = 0x94
	ATVTopShelfRefreshTask *_topShelfRefreshTask;	// 152 = 0x98
	id _musicStoreUpdateObserver;	// 156 = 0x9c
	NSMutableArray *_changedMerchants;	// 160 = 0xa0
	NSMutableArray *_changedAppliances;	// 164 = 0xa4
	BRPreferences *_imageCachePrefs;	// 168 = 0xa8
	NSDictionary *_layoutInfo;	// 172 = 0xac
	BRURLDocument *_layoutDocument;	// 176 = 0xb0
	NSArray *_internetMerchants;	// 180 = 0xb4
	NSArray *_appliances;	// 184 = 0xb8
}
@property(copy, nonatomic) NSArray *appliances;	// G=0x367dead5; S=0x367deae5; @synthesize=_appliances
@property(assign, nonatomic) id<ATVMainMenuControllerDelegate> delegate;	// G=0x367ddd55; S=0x367ddd45; 
@property(readonly, assign, nonatomic) id<BRAppliance> focusedAppliance;	// G=0x367ddd0d; 
@property(readonly, assign, nonatomic) BRImageManager *imageManager;	// G=0x367deb09; 
@property(copy, nonatomic) NSArray *internetMerchants;	// G=0x367deac5; S=0x367db4a9; @synthesize=_internetMerchants
+ (BOOL)automaticallyNotifiesObserversOfInternetMerchants;	// 0x367db4a5
+ (id)mainMenu;	// 0x367dac41
- (id)init;	// 0x367dacb1
- (void)_animateContainerViewToPosition:(CGPoint)position;	// 0x367dcdd1
- (id)_blackBrickImage;	// 0x367debf1
- (void)_cacheImageForAppliance:(id)appliance;	// 0x367df171
- (void)_cacheImageForMerchant:(id)merchant;	// 0x367df2cd
- (void)_cleanupLayoutDocument;	// 0x367dbe11
- (void)_coalescedUpdateImagesForChangedAppliances;	// 0x367df725
- (void)_coalescedUpdateImagesForChangedMerchants;	// 0x367df59d
- (id)_extraInfoForAppliance:(id)appliance;	// 0x367dee99
- (void)_handleImageManagerImageUpdatedNotification:(id)notification;	// 0x367df3a5
- (BOOL)_handleRemoteEvent:(id)event;	// 0x367de48d
- (BOOL)_handleTouchEvent:(id)event;	// 0x367de661
- (void)_handleWindowMaxBoundsChanged;	// 0x367dba69
- (id)_identifierFromImageID:(id)imageID;	// 0x367df0ad
- (id)_imageBaseNameFromAppliance:(id)appliance;	// 0x367def51
- (id)_imageForAppliance:(id)appliance;	// 0x367decd5
- (id)_imageForMerchant:(id)merchant;	// 0x367dec3d
- (id)_imageNameFromAppliance:(id)appliance;	// 0x367defa5
- (id)_imageNameFromMerchant:(id)merchant;	// 0x367dee61
- (id)_imageNameWithBaseName:(id)baseName;	// 0x367dedbd
- (void)_layoutContainerView;	// 0x367dc08d
- (void)_layoutViews;	// 0x367dc1fd
- (id)_newBackgroundWithImageNamed:(id)imageNamed;	// 0x367dc809
- (id)_newInternetContentGrid;	// 0x367dcb55
- (id)_newMainApplicationsGrid;	// 0x367dc8bd
- (id)_prefsVersionKeyFromName:(id)name;	// 0x367defdd
- (void)_refreshTopShelfControllers;	// 0x367dc7cd
- (void)_reload;	// 0x367db9a5
- (void)_reloadTopShelf;	// 0x367dd87d
- (void)_reloadTopShelfWithoutAnimating;	// 0x367dd77d
- (void)_saveVersion:(id)version forAppID:(id)appID;	// 0x367df06d
- (void)_scrollApplicationsToVisible;	// 0x367dd315
- (void)_scrollShelfToVisible;	// 0x367dceed
- (void)_setupTopShelfView;	// 0x367dc695
- (void)_updateCachedApplianceImages;	// 0x367db7d1
- (void)_updateCachedMerchantImages;	// 0x367db725
- (id)_versionForAppID:(id)appID;	// 0x367df031
- (id)accessibilityLabel;	// 0x367dea9d
- (id)accessibilityScreenContent;	// 0x367dea4d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x367ddc51
// declared property getter: - (id)appliances;	// 0x367dead5
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x367ddf41
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x367de78d
- (BOOL)canBeRemovedFromStack;	// 0x367dea49
- (void)controlWasActivated;	// 0x367db43d
- (void)dealloc;	// 0x367db281
// declared property getter: - (id)delegate;	// 0x367ddd55
- (void)focusApplianceWithIdentifier:(id)identifier;	// 0x367ddd65
// declared property getter: - (id)focusedAppliance;	// 0x367ddd0d
- (BOOL)handleSelectionForControl:(id)control;	// 0x367dea45
// declared property getter: - (id)imageManager;	// 0x367deb09
// declared property getter: - (id)internetMerchants;	// 0x367deac5
- (void)loadApplication:(id)application;	// 0x367de791
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x367dbead
// declared property setter: - (void)setAppliances:(id)appliances;	// 0x367deae5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x367ddd45
- (void)setFocusedAppliance:(id)appliance;	// 0x367ddca5
// declared property setter: - (void)setInternetMerchants:(id)merchants;	// 0x367db4a9
- (id)topShelfControllerForApp:(id)app;	// 0x367dde59
- (void)updateBoundAvailableAppliances;	// 0x367db87d
- (void)updateBoundFocusedControlOfContainerView;	// 0x367db909
- (void)updateBoundInternetMerchants;	// 0x367db615
- (void)updateBoundMusicStoreMerchantInfo;	// 0x367db8f9
- (id)view;	// 0x367dbacd
@end

