/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStoreProvider.h"


@interface BRSeriesProvider : BRDataStoreProvider {
}
- (id)initWithDataStore:(id)dataStore;	// 0x33b0dbd9
- (void)_dataStoreInsertionNotification:(id)notification;	// 0x33b0dd61
- (void)_dataStoreModificationNotification:(id)notification;	// 0x33b0ddcd
- (void)_dataStoreRemovedNotification:(id)notification;	// 0x33b0de39
- (void)_databaseObjectWasAdded:(id)added;	// 0x33b0dea5
- (void)dealloc;	// 0x33b0dcc1
- (id)hashForDataAtIndex:(long)index;	// 0x33b0dd1d
@end

