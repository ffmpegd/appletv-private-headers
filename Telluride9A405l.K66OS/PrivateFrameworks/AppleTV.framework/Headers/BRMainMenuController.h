/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSMutableArray, NSArray, BRMainMenuControl, BRBackgroundTask;
@protocol BRAppliance;

@interface BRMainMenuController : BRController {
@private
	NSArray *_applianceInfos;	// 80 = 0x50
	NSMutableArray *_topShelfControllers;	// 84 = 0x54
	BRMainMenuControl *_browser;	// 88 = 0x58
	BOOL _enabled;	// 92 = 0x5c
	BOOL _handlingMainMenuEvent;	// 93 = 0x5d
	BRBackgroundTask *_topShelfRefreshTask;	// 96 = 0x60
}
@property(readonly, assign) id<BRAppliance> currentAppliance;	// G=0x35dc4c6d; 
+ (BOOL)handlingMainMenuEvent;	// 0x35dc47cd
+ (void)highlightApplianceWithKey:(id)key andCategoryWithIdentifier:(id)identifier;	// 0x35dc473d
+ (void)setHandlingMainMenuEvent:(BOOL)event;	// 0x35dc4849
- (id)init;	// 0x35dc48cd
- (BOOL)_browserItemSelected:(id)selected;	// 0x35dc51e5
- (BOOL)_handlingMainMenuEvent;	// 0x35dc52c9
- (void)_highlightApplianceWithKey:(id)key andCategoryWithIdentifier:(id)identifier;	// 0x35dc51c5
- (void)_loadAppliances;	// 0x35dc5061
- (void)_reloadTopShelvesByRecreating:(BOOL)recreating;	// 0x35dc536d
- (void)_setHandlingMainMenuEvent:(BOOL)event;	// 0x35dc52d9
- (void)_shelfNoLongerFocusable:(id)focusable;	// 0x35dc52e9
- (void)_topShelfControllerWillBeHidden:(id)_topShelfController;	// 0x35dc55ed
- (void)_topShelfControllerWillBeShown:(id)_topShelfController;	// 0x35dc55b5
- (id)accessibilityLabel;	// 0x35dc4c8d
- (BOOL)canBeRemovedFromStack;	// 0x35dc4ae1
- (void)clearRemembery;	// 0x35dc4c4d
- (void)controlWasActivated;	// 0x35dc4f1d
- (void)controlWasDeactivated;	// 0x35dc4fdd
// declared property getter: - (id)currentAppliance;	// 0x35dc4c6d
- (void)dealloc;	// 0x35dc4a09
- (void)enable;	// 0x35dc4ae5
- (void)mainMenu:(id)menu didSelectCategoryAtIndexPath:(id)indexPath;	// 0x35dc4d35
- (id)mainMenu:(id)menu shelfForApplianceAtIndex:(unsigned)index;	// 0x35dc4cb5
- (void)mainMenu:(id)menu willHideShelfAtApplianceIndex:(long)applianceIndex;	// 0x35dc4e9d
- (void)mainMenu:(id)menu willShowShelfAtApplianceIndex:(long)applianceIndex;	// 0x35dc4edd
- (void)reloadMainMenu;	// 0x35dc4af9
@end

