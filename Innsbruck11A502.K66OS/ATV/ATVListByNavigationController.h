/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "BRTumblerDelegate.h"
#import "BRTumblerDataSource.h"
#import "AppleTV-Structs.h"
#import "ATVListPreviewController.h"

@class ATVTabWithTitleListHeaderControl, ATVTumblerWithTextListHeaderControl, NSString, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVListByNavigationController : ATVListPreviewController <BRTumblerDelegate, BRTumblerDataSource, BRTabControlDelegate> {
	ATVTumblerWithTextListHeaderControl *_tumblerListHeader;	// 104 = 0x68
	ATVTabWithTitleListHeaderControl *_tabListHeader;	// 108 = 0x6c
	ATVURLDocument *_documentForTumblerChange;	// 112 = 0x70
	NSString *_onNavigate;	// 116 = 0x74
	OpaqueJSValue *_lastEvent;	// 120 = 0x78
	unsigned _currentTumblerItemIndex;	// 124 = 0x7c
}
@property(assign, nonatomic) unsigned currentTumblerItemIndex;	// G=0xb9351; S=0xb8ed5; @synthesize=_currentTumblerItemIndex
- (id)initWithDictionary:(id)dictionary;	// 0xb8d3d
- (id)initWithFeedElement:(id)feedElement;	// 0xb8c99
- (void)_callJavaScriptEventOnCancel;	// 0xba57d
- (void)_callJavaScriptOnNavigateHandler:(id)handler;	// 0xba669
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0xbac15
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0xbab41
- (void)_cancelAllDocumentRequests;	// 0xba52d
- (void)_didMove;	// 0xba935
- (void)_didNavigateToIndex:(unsigned)index;	// 0xba989
- (void)_documentReady:(id)ready;	// 0xb9721
- (void)_initWithStartingIndex:(unsigned)startingIndex;	// 0xb9361
- (void)_loadListForURL:(id)url;	// 0xb9535
- (void)_showList;	// 0xbad41
- (void)_showSpinner:(BOOL)spinner;	// 0xbacb5
- (id)_tumblerCustomTextAttributes;	// 0xb9511
- (id)_tumblerTextAttributes;	// 0xb94ed
- (void)_updateListHeader;	// 0xb9b29
- (id)accessibilityLabel;	// 0xb90b1
// declared property getter: - (unsigned)currentTumblerItemIndex;	// 0xb9351
- (void)dealloc;	// 0xb8e1d
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0xb90f1
// declared property setter: - (void)setCurrentTumblerItemIndex:(unsigned)index;	// 0xb8ed5
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0xb930d
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0xb933d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0xb934d
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0xb9181
- (void)tumblerControlDidTumble:(id)tumblerControl;	// 0xb92fd
- (void)wasPushed;	// 0xb8f49
@end

