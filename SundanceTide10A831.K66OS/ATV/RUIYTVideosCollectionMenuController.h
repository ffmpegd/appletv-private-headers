/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListDataSourceAspectDelegate.h"
#import "BRViewController.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class RUIYTListDataSourceAspect, RUIYTDocumentLoader, BRMediaMenuView, RUIYTAssetsInfo, RUIYTCollectionsDocumentSpec;

__attribute__((visibility("hidden")))
@interface RUIYTVideosCollectionMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate> {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	RUIYTCollectionsDocumentSpec *_spec;	// 108 = 0x6c
	RUIYTDocumentLoader *_documentLoader;	// 112 = 0x70
	RUIYTAssetsInfo *_initialAssetsInfo;	// 116 = 0x74
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 120 = 0x78
}
+ (id)controllerWithSpec:(id)spec assetsInfo:(id)info;	// 0x275f15
- (id)initWithSpec:(id)spec assetsInfo:(id)info;	// 0x275f75
- (void).cxx_destruct;	// 0x276861
- (id)_sectionsWithAssetsInfo:(id)assetsInfo;	// 0x2768d1
- (void)dealloc;	// 0x276169
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x276555
- (id)identifier;	// 0x2761c9
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x2766a5
- (void)wasPushed;	// 0x2761e9
@end

