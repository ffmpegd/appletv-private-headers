/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTListSectionHandling.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class NSCache, BRControllerStack, NSMutableArray, RUIYTListDataSourceAspect, RUIYTDocumentLoader;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 4 = 0x4
	NSMutableArray *_resultsBeingLoaded;	// 8 = 0x8
	NSCache *_resultsCache;	// 12 = 0xc
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 16 = 0x10
	BRControllerStack *_controllerStack;	// 20 = 0x14
}
@property(readonly, assign) BRControllerStack *controllerStack;	// G=0x24f681; @synthesize=_controllerStack
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0x24f661; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect controllerStack:(id)stack;	// 0x24e6f1
- (void).cxx_destruct;	// 0x24f6a1
- (id)_cacheItemForItem:(id)item;	// 0x24f87d
- (id)_cachedResultsForItem:(id)item resultsFound:(BOOL *)found;	// 0x24f70d
- (void)_clearCachedResultsForItem:(id)item;	// 0x24f831
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x24fce1
- (BOOL)_loadResultsForItem:(id)item;	// 0x24f919
- (void)_setCachedResults:(id)results forItem:(id)item timeInterval:(double)interval;	// 0x24f769
- (void)_showError;	// 0x24fb95
- (void)_showErrorWithText:(id)text;	// 0x24fbd1
// declared property getter: - (id)controllerStack;	// 0x24f681
- (void)dealloc;	// 0x24e8a1
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x24f381
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0x24ebe9
- (id)itemForIndex:(id)index;	// 0x24e941
- (id)itemIDForIndex:(id)index;	// 0x24eabd
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x24ef81
// declared property getter: - (id)listDataSourceAspect;	// 0x24f661
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0x24ed45
@end

