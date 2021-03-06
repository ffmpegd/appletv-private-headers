/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"


__attribute__((visibility("hidden")))
@interface RentalsController : BRDataQueryController {
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x298a71
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x298f71
- (id)errorForNoContent;	// 0x298ec9
- (id)indexPathForDataItem:(void *)dataItem;	// 0x298ee9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x29950d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x299da9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x299cb1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2994c1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x299019
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2994d1
- (id)newDataQuery;	// 0x298ae1
- (long)numberOfSectionsInList:(id)list;	// 0x2994cd
@end

