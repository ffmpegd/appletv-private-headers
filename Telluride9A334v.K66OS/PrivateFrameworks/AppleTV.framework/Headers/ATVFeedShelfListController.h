/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ATVFeedShelfListController : ATVFeedController {
}
- (id)initWithDictionary:(id)dictionary;	// 0x33339d49
- (id)initWithFeedElement:(id)feedElement;	// 0x33339b3d
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x33339fc9
- (id)_elementAtIndexPath:(id)indexPath;	// 0x3333a385
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x3333a015
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3333a155
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3333a275
@end

