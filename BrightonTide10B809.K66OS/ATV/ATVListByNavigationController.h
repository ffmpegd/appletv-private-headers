/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTumblerDelegate.h"
#import "BRTumblerDataSource.h"
#import "ATVListPreviewController.h"
#import "AppleTV-Structs.h"
#import "BRTabControlDelegate.h"

@class ATVTabWithTitleListHeaderControl, ATVTumblerWithTextListHeaderControl, NSString, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVListByNavigationController : ATVListPreviewController <BRTumblerDelegate, BRTumblerDataSource, BRTabControlDelegate> {
	ATVTumblerWithTextListHeaderControl *_tumblerListHeader;	// 104 = 0x68
	ATVTabWithTitleListHeaderControl *_tabListHeader;	// 108 = 0x6c
	ATVURLDocument *_documentForTumblerChange;	// 112 = 0x70
	NSString *_onNavigate;	// 116 = 0x74
	OpaqueJSValue *_lastEvent;	// 120 = 0x78
}
- (id)initWithDictionary:(id)dictionary;	// 0x11be61
- (id)initWithFeedElement:(id)feedElement;	// 0x11bdbd
- (void)_callJavaScriptEventOnCancel;	// 0x11d559
- (void)_callJavaScriptOnNavigateHandler:(id)handler;	// 0x11d699
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x11dc5d
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x11db49
- (void)_cancelAllDocumentRequests;	// 0x11d509
- (void)_didNavigateToIndex:(unsigned)index;	// 0x11d991
- (void)_documentReady:(id)ready;	// 0x11c779
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x11dcfd
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x11dc1d
- (void)_initWithStartingIndex:(unsigned)startingIndex;	// 0x11c401
- (void)_loadListForURL:(id)url;	// 0x11c5a1
- (id)_tumblerCustomTextAttributes;	// 0x11c57d
- (id)_tumblerTextAttributes;	// 0x11c559
- (void)_updateListHeader;	// 0x11cb3d
- (void)_willNavigate;	// 0x11d645
- (id)accessibilityLabel;	// 0x11dd3d
- (void)dealloc;	// 0x11bf45
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0x11c165
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x11c3bd
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x11c3ed
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x11c3fd
- (void)tumblerControl:(id)control didTumbleToItemAtIndex:(unsigned)index;	// 0x11c381
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0x11c1f5
- (void)tumblerControlWillTumble:(id)tumblerControl;	// 0x11c371
- (void)wasPushed;	// 0x11bffd
@end

