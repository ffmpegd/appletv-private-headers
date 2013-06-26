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
- (id)initWithDictionary:(id)dictionary;	// 0x118829
- (id)initWithFeedElement:(id)feedElement;	// 0x118785
- (void)_callJavaScriptEventOnCancel;	// 0x119f21
- (void)_callJavaScriptOnNavigateHandler:(id)handler;	// 0x11a061
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x11a625
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x11a511
- (void)_cancelAllDocumentRequests;	// 0x119ed1
- (void)_didNavigateToIndex:(unsigned)index;	// 0x11a359
- (void)_documentReady:(id)ready;	// 0x119141
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x11a6c5
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x11a5e5
- (void)_initWithStartingIndex:(unsigned)startingIndex;	// 0x118dc9
- (void)_loadListForURL:(id)url;	// 0x118f69
- (id)_tumblerCustomTextAttributes;	// 0x118f45
- (id)_tumblerTextAttributes;	// 0x118f21
- (void)_updateListHeader;	// 0x119505
- (void)_willNavigate;	// 0x11a00d
- (id)accessibilityLabel;	// 0x11a705
- (void)dealloc;	// 0x11890d
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0x118b2d
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x118d85
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x118db5
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x118dc5
- (void)tumblerControl:(id)control didTumbleToItemAtIndex:(unsigned)index;	// 0x118d49
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0x118bbd
- (void)tumblerControlWillTumble:(id)tumblerControl;	// 0x118d39
- (void)wasPushed;	// 0x1189c5
@end
