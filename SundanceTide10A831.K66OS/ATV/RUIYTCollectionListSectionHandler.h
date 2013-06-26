/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSectionHandling.h"
#import "RUIYTDocumentLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, RUIYTListDataSourceAspect, RUIYTDocumentLoader, BRControllerStack, NSCache;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 4 = 0x4
	NSMutableArray *_resultsBeingLoaded;	// 8 = 0x8
	NSCache *_resultsCache;	// 12 = 0xc
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 16 = 0x10
	BRControllerStack *_controllerStack;	// 20 = 0x14
}
@property(readonly, assign) BRControllerStack *controllerStack;	// G=0x25f039; @synthesize=_controllerStack
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0x25f019; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect controllerStack:(id)stack;	// 0x25e0a9
- (void).cxx_destruct;	// 0x25f059
- (id)_cacheItemForItem:(id)item;	// 0x25f235
- (id)_cachedResultsForItem:(id)item resultsFound:(BOOL *)found;	// 0x25f0c5
- (void)_clearCachedResultsForItem:(id)item;	// 0x25f1e9
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x25f699
- (BOOL)_loadResultsForItem:(id)item;	// 0x25f2d1
- (void)_setCachedResults:(id)results forItem:(id)item timeInterval:(double)interval;	// 0x25f121
- (void)_showError;	// 0x25f54d
- (void)_showErrorWithText:(id)text;	// 0x25f589
// declared property getter: - (id)controllerStack;	// 0x25f039
- (void)dealloc;	// 0x25e259
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x25ed39
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0x25e5a1
- (id)itemForIndex:(id)index;	// 0x25e2f9
- (id)itemIDForIndex:(id)index;	// 0x25e475
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x25e939
// declared property getter: - (id)listDataSourceAspect;	// 0x25f019
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0x25e6fd
@end
