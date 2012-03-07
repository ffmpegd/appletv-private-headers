/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class ATVStoreFavorite, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVStoreFavoriteRefreshTask : BRBackgroundTask {
@private
	ATVStoreFavorite *_favorite;	// 44 = 0x2c
	ATVURLDocument *_curDocumentBeingFetched;	// 48 = 0x30
}
- (id)initWithFavorite:(id)favorite;	// 0x33136741
- (void)_catalogControlRequestProcessed:(id)processed;	// 0x331369f1
- (void)_checkForPurchasesComplete:(id)purchasesComplete;	// 0x33136cad
- (void)_finalizePageRefresh:(id)refresh;	// 0x33136d31
- (void)dealloc;	// 0x331367b9
- (void)disable:(id)disable;	// 0x33136971
- (BOOL)perform:(id)perform;	// 0x33136835
- (void)stop;	// 0x331369b1
@end

