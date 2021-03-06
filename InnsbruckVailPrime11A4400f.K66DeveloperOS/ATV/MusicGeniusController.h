/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class ATVDataItem, NSArray;

__attribute__((visibility("hidden")))
@interface MusicGeniusController : MusicController {
	ATVDataItem *_geniusSeed;	// 164 = 0xa4
	BOOL _isDataSavedIntoMetadata;	// 168 = 0xa8
	NSArray *_dataFromMetadata;	// 172 = 0xac
	BOOL _startGeniusPlayback;	// 176 = 0xb0
}
@property(assign, nonatomic) BOOL startGeniusPlayback;	// G=0x198259; S=0x198269; @synthesize=_startGeniusPlayback
- (id)initFromMetadataWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x1970bd
- (id)initWithSeed:(id)seed;	// 0x197011
- (void)_setup;	// 0x198279
- (void)_showMediaMenuView;	// 0x198351
- (id)data;	// 0x19722d
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1977d5
- (BOOL)dataQueryComplete:(id)complete;	// 0x1973b1
- (void)dealloc;	// 0x1971c9
- (id)errorControlForQuery:(id)query;	// 0x1976b5
- (id)indexPathForDataItem:(void *)dataItem;	// 0x197765
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x197b25
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x19801d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x197e95
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1979fd
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x198111
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x198059
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x197851
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x197a35
- (id)newDataQuery;	// 0x1972e9
// declared property setter: - (void)setStartGeniusPlayback:(BOOL)playback;	// 0x198269
// declared property getter: - (BOOL)startGeniusPlayback;	// 0x198259
@end

