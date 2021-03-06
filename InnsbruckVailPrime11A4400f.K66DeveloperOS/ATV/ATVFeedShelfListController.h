/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"


__attribute__((visibility("hidden")))
@interface ATVFeedShelfListController : ATVFeedController {
}
- (id)initWithDictionary:(id)dictionary;	// 0x10d06d
- (id)initWithFeedElement:(id)feedElement;	// 0x10ce1d
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x10d331
- (id)_elementAtIndexPath:(id)indexPath;	// 0x10d739
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x10d3d1
- (id)_initialSelection;	// 0x10d7cd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x10d521
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x10d64d
@end

