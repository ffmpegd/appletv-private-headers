/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "BRSelectionHandler.h"


__attribute__((visibility("hidden")))
@interface ATVFavoritesSelectionHandler : BRSingleton <BRSelectionHandler> {
}
+ (void)setSingleton:(id)singleton;	// 0x330c4661
+ (id)singleton;	// 0x330c4651
- (BOOL)_handleFavoriteSelection:(id)selection autoPlay:(BOOL)play;	// 0x330c4751
- (BOOL)handlePlayForControl:(id)control;	// 0x330c46e1
- (BOOL)handleSelectionForControl:(id)control;	// 0x330c4671
@end

